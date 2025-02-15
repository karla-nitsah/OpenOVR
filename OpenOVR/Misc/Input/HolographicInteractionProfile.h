// Interaction profile from the WMR "Holographic" controllers - feature a trackpad and joystick
#pragma once

#include "InteractionProfile.h"

class HolographicInteractionProfile : public InteractionProfile {
public:
	HolographicInteractionProfile();

	const std::string& GetPath() const override;
	std::optional<const char*> GetLeftHandRenderModelName() const override;
	std::optional<const char*> GetRightHandRenderModelName() const override;
	std::optional<const char*> GetOpenVRName() const override;
	std::optional<enum vr::EVRSkeletalTrackingLevel> GetOpenVRTrackinglevel() const override;

protected:
	const LegacyBindings* GetLegacyBindings(const std::string& handPath) const override;
};
