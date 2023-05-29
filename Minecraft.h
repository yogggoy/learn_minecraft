//
// Created by Иван Ильин on 03.10.2021.
//

#ifndef MINECRAFT_MINECRAFT_H
#define MINECRAFT_MINECRAFT_H

#include "engine/Engine.h"
#include "Player.h"
#include "PlayerController.h"
#include "Map.h"
//#include "engine/utils/ObjectController.h"

class Minecraft : public Engine {
private:
    std::shared_ptr<Player> player = std::make_shared<Player>();
    std::shared_ptr<PlayerController> playerController = std::make_shared<PlayerController>(player, keyboard, mouse);
    std::shared_ptr<Map> map = std::make_shared<Map>(world);

    //ObjectController cameraController;

    void start() override;
    void update() override;

    void addCube();
    void removeCube();
    void updateCubeInHandColor();

    void gui() override;

public:
    Minecraft() = default;
    //Minecraft() : cameraController(camera, keyboard, mouse) {};
};


#endif //MINECRAFT_MINECRAFT_H
