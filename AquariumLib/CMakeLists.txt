project(AquariumLib)

set(SOURCE_FILES)

set(wxBUILD_PRECOMP OFF)
find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)

include(${wxWidgets_USE_FILE})

set(SOURCE_FILES MainFrame.cpp MainFrame.h pch.h AquariumView.cpp AquariumView.h Aquarium.cpp Aquarium.h Item.cpp Item.h FishBeta.cpp FishBeta.h ids.h StarFish.cpp StarFish.h Molly.cpp Molly.h DecorCastle.cpp DecorCastle.h Fish.cpp Fish.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)
