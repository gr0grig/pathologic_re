include std.sci

maintask TTower
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			TPlayerIntersection{actor};
	}
}

task TPlayerIntersection
{
	var object m_Player;

	void init(object player) {
		m_Player = player;
		for (;;) {
			@PlaySound((rndbool(0.5))? "sound1" : "sound2");
			int iDelay;
			@irand(iDelay, 15);
			bool bSuccess;
			@Sleep(iDelay + 15, bSuccess);
			if (!bSuccess || !m_Player)
				break;
		}
	}

	void OnUnload(void) {
		@StopGroup0();
	}

	void OnStopIntersection(object actor) {
		if (m_Player == actor)
			@StopGroup0();
	}
}