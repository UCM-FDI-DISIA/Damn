#version 330 core

uniform sampler2D texture;
in vec2 vUv0;
out vec4 fFragColor;

void main()
{
    vec2 texelSize = 1.0 / textureSize;
    vec4 blurColor = vec4(0.0);
    
    // Sample surrounding pixels and average them for blur effect
    for (int x = -2; x <= 2; ++x) {
        for (int y = -2; y <= 2; ++y) {
            vec2 offset = vec2(x, y) * texelSize;
            blurColor += texture(inputTexture, uv + offset);
        }
    }
    blurColor /= 25.0; // Adjust according to the kernel size
    
    fragColor = blurColor;
}

void main() {
	
	vec3 frontFaceColor = vec3(texture(texFront, vUv0));
	vec3 backFaceColor = vec3(texture(texBack, vUv0));
	vec3 colorC = vec3(texture(patron, vUv0));
	if(colorC.x > 0.6) discard;
	bool frontFacing = (Flipping > -1)? gl_FrontFacing : ! gl_FrontFacing;
	vec3 color;
	if(frontFacing)color = frontFaceColor;
	else color = backFaceColor;
	fFragColor = vec4(color, 1.0);
}