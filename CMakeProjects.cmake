if (BUILD_EXAMPLE)
	subdirs (Samples/HelloWorld)	
	subdirs (Samples/Sponza)
	subdirs (Samples/TankScene)
	subdirs (Samples/DrawPrimitives)
	if (NOT BUILD_EMSCRIPTEN)
		subdirs (Samples/Materials)
		subdirs (Samples/Shader)
		subdirs (Samples/LuckyDraw)
		subdirs (Samples/SkinnedMesh)
		subdirs (Samples/LightmapUV)
		subdirs (Samples/Lightmapping)
		subdirs (Samples/LightmappingVertex)
	endif()	
endif()