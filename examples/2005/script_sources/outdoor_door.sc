include outdoor_door_base.sci

maintask TDoor : TDoorBase
{
	void init(void) {
		@DisableUpdate();
		super.init();
	}
}
