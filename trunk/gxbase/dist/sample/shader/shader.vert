// sample fragment program
// gxbase 20/09/04
//
// this shader creates a simple 3D check pattern

// incoming parameters (set by application)
uniform vec3 LightPosition;

// diffuse/specular
const float Kd = 0.6;
const float Ks = 0.4;

// variables to pass on to our fragment program
varying vec3  my_Position;
varying float my_Intensity;

void main(void)
{
   vec3
      vPos   = vec3(gl_ModelViewMatrix * gl_Vertex),
      vNorm  = normalize(gl_NormalMatrix * gl_Normal),
      vLight = normalize(LightPosition - vPos),
      vView  = normalize(-vPos);

   float
      id = max(dot(vLight,vNorm), 0.0),
      is = 0.0;

   if (id > 0.0) {
      vec3 vRef = reflect(-vLight,vNorm);
      is = max(dot(vRef,vView), 0.0);
   }

   // these are passed on to fragment program
   my_Intensity = Kd * id + Ks * is;
   my_Position  = gl_Vertex;

   gl_Position = ftransform();
}
