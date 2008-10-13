// sample fragment program
// gxbase 20/09/04
//
// this shader creates a simple 3D check pattern

// incoming parameters (set by application)
uniform float GridSize;
uniform vec3  Colour1;
uniform vec3  Colour2;

// variables from our vertex program
varying vec3  my_Position;
varying float my_Intensity;

void main(void)
{
   // position in grid (based on model coords)
   vec3 p = fract(my_Position / GridSize);
   
   // step function to create grid
   p = step(p, 0.5);
 
   // check pattern in (XY) only
   float a = p.x * p.y + (1-p.x) * (1-p.y);
 
   // calculate fragment colour
   vec3 colour = mix(
      Colour1, Colour2,            // grid colours to mix
      a * p.z + (1-a) * (1-p.z)    // check pattern in (XYZ)
   );

   // include lighting intensity
   colour *= my_Intensity;
   gl_FragColor = vec4(colour, 1.0);
}
