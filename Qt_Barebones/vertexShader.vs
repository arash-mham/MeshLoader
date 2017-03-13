#version 400

in vec3 position;
in vec3 color;
in vec3 normal;

uniform mat4 mvpMatrix;
uniform mat4 modelToWorldTransformationMatrix;
uniform float alpha;
out vec3 worldNormal;
out vec3 worldPosition;
out vec3 fragmentColor;

void main(){
       vec4 p = vec4(position, 1.0);
	   vec4 transformedPosition=mvpMatrix*p;
	   worldPosition=vec3(modelToWorldTransformationMatrix*p);
	   vec4 n=vec4(normal,0.0);
	  worldNormal=normalize(vec3(modelToWorldTransformationMatrix*n));
	  if(color.z==0)
	   fragmentColor=vec3(color.x*alpha,1-color.x*alpha,0);
	   else
	   fragmentColor=color;

	   gl_Position=transformedPosition;
}

