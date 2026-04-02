include std.sci
include actor_disp_base.sci

const float c_fRadius = 60;

maintask TFire : TDispBase
{
	var object m_Trigger;

	void init(void) {
		object scene;
		@GetScene(scene);
		@AddScriptedActor(m_Trigger, "trigger_d10q01_fire", "trigger_fire_damage.bin", scene, [0, 0, 0]);

		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		
		object fire;
		@FindParticleSystem("fire", fire);
		if (fire == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		
		float fRadius = c_fRadius;
		
		for (float x = -fRadius; x < fRadius; x+= fRadius / 10) {
			for (float z = -fRadius; z < fRadius; z+= fRadius / 10) {
				if (x * x + z * z > fRadius * fRadius)
					continue;
					
				Vector vPos; vPos.x = x; vPos.y = 0; vPos.z = z;
				fire->AddSource(vPos, [0,1,0], 0.0);
			}
		}
		
		fire->Enable();
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnUnload(void) {
		TWaitForLoad{};
	}

	void OnDispose(void) {
		if (m_Trigger)
			@RemoveActor(m_Trigger);
	}
}
