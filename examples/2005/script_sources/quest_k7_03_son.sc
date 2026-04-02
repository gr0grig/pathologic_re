include std.sci
include disp_idle.sci
include kgame.sci
include NPC_littleboy.sci

maintask TSon : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
}
