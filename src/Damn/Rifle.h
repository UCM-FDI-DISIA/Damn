#ifndef RIFLE_H
#define RIFLE_H

#include "WeaponComponent.h"

namespace damn {
	class Rifle : public WeaponComponent
	{
	public:
		Rifle() = default;
		~Rifle() = default;

		void Init(eden_script::ComponentArguments* args) override;

		void Start() override;

		void Shoot() override final;

		static std::string GetID() { return "RIFLE"; }
	protected:
		virtual void PlayIdleAnim() override;
		virtual void PlayShootAnim() override;
		virtual void PlayReloadAnim() override;
		virtual bool isAnyAnimPlaying() override;
	};
}
#endif // !RIFLE_H

