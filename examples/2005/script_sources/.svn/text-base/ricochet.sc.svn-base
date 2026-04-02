include std.sci

// CONSTANTS
// CONSTANTS

property int Material;

maintask TRifleRicochet
{
	void init(void) {
		if (!IsLoaded()) {
			@RemoveActor(self());		
			return;
		}
		
		//@PlayGlobalSound(GetMaterialName(Material), [0,0,0], 500);
		
		object r;
		@FindParticleSystem("richochet", r);
		r->Enable();
		r->AddSource([0,0,0], [0,400,0], 1.5);
		@Sleep(0.5);
		r->Fade(true);
		@Sleep(0.5);
		@RemoveActor(self());
	}
	
	void OnUnload() {
		@RemoveActor(self());		
		@sync();
	}	
}
