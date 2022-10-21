install(
    TARGETS Triangles_exe
    RUNTIME COMPONENT Triangles_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
