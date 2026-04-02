include std.sci

property string Name;

var bool m_bNotTriggered;

maintask TTrigger
{
	void init(void) {
		m_bNotTriggered = true;
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnIntersection(object actor) {
		if (!m_bNotTriggered)
			return;

		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			m_bNotTriggered = false;

			object scene;
			@GetScene(scene);
			@Trigger(scene, Name);
		}
	}
}
