include std.sci
include actor_disp_base.sci

maintask TBomb : TDispBase
{
	void init(void) {
		@SetVisibility(true);
		super.init();
	}

	void OnCollision(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			actor->SetProperty("health", 0);
			
			object scene;
			@GetScene(scene);
			Vector vPos;
			@GetPosition(vPos);
			object fire;
			@AddActorByType(fire, "scripted", scene, vPos, [0, 0, 0], "fire.xml");
			
			@PlaySound("explode");
		}
	}
}
