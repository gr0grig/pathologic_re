include std.sci
include disp_idle.sci
include kgame.sci
include NPC_patrol.sci

maintask TProrok : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
}
