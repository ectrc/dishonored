#ifndef DISHONORED_STATE_H
#define DISHONORED_STATE_H

#include "sdk.hpp"

#include <numbers>

struct rotator {
    double Pitch;
    double Yaw;

    rotator operator+(const rotator& other) const {
        return {Pitch + other.Pitch, Yaw + other.Yaw};
    }
};

struct DishonoredState {
    bool should_exit = false;

    TArray<UObject*>* GObjects{};
    UDishonoredEngine* DishonoredEngine{};
    ADishonoredPlayerPawn* DishonoredPlayerPawn{};
    ADishonoredPlayerController* DishonoredPlayerController{};

    [[nodiscard]] rotator GetRotation() const {
        rotator rotation{};
        rotation.Pitch = ((DishonoredPlayerController->PlayerCamera->Rotation.Pitch * std::numbers::pi) / 32768.0f);
        rotation.Yaw = (DishonoredPlayerController->PlayerCamera->Rotation.Yaw * std::numbers::pi) / 32768.0f;
        return rotation;
    }

    [[nodiscard]] FVector GetLookVector() const {
        auto rotation = GetRotation();

        FVector camera_look_vector{};
        camera_look_vector.X = static_cast<float>(cos(rotation.Pitch) * cos(rotation.Yaw));
        camera_look_vector.Y = static_cast<float>(cos(rotation.Pitch) * sin(rotation.Yaw));
        camera_look_vector.Z = static_cast<float>(sin(rotation.Pitch));

        return camera_look_vector;
    }

    [[nodiscard]] FVector GetAdjustedLookVector() const {
        auto rotation = GetRotation() + rotator{std::numbers::pi / 6, 0};

        FVector camera_look_vector{};
        camera_look_vector.X = static_cast<float>(cos(rotation.Pitch) * cos(rotation.Yaw));
        camera_look_vector.Y = static_cast<float>(cos(rotation.Pitch) * sin(rotation.Yaw));
        camera_look_vector.Z = static_cast<float>(sin(rotation.Pitch));

        return camera_look_vector;
    }
};

#endif
