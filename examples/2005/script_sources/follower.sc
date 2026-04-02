include std.sci
include follow.sci

void OnDeath(object actor) {}

var bool m_bRunning;

void OnConsole(string strCmd, string strParams) {
	if (strCmd == "frun") {
		m_bRunning = true;
	}
	else if (strCmd == "fwalk") {
		m_bRunning = false;
	}
}

maintask TFollower
{
	void init(void) {
		m_bRunning = true;
		object player;
		@FindActor(player, "player");
		while (player != null) {
			if (TFollow{player})
				TWait{};
			@WaitForAnimEnd();
			@Sleep(3);
		}
	}
	
	void OnConsole(string strCmd, string strParams) {
		if (strCmd == "fstop") {
			TWait{};
		}
		else global.OnConsole(strCmd, strParams);
	}
}

task TFollow : TFollowBase
{
	var bool m_bWait;
	
	bool init(object actor) {
		m_bWait = false;
		super.init(actor, 200, 10000, m_bRunning, true);
		return m_bWait;
	}

	void OnConsole(string strCmd, string strParams) {
		if (strCmd == "fstop") {
			m_bWait = true;
			CancelActivity();
		}
		else if (strCmd == "fgo") {
			m_bWait = false;
		}
		else global.OnConsole(strCmd, strParams);
	}
}

task TWait
{
	void init(void) {
		@Trace("Waiting for your orders!");
		@Hold();
		@Trace("Following you!");
	}

	void OnConsole(string strCmd, string strParams) {
		if (strCmd == "fgo") {
			@StopGroup0();
		}
		else global.OnConsole(strCmd, strParams);
	}
}
