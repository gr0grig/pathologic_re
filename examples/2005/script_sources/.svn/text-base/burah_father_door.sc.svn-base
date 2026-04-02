include std.sci
include outdoor_door_base.sci
include key_logic.sci

maintask TDoor : TDoorBase
{
	void OnUse(object actor) {
		if (IsLocked()) {
			if (HasDoorKey(actor, "burah_father_key", true)) {
				Lock(false);
			}
		}
		
		super.OnUse(actor);
	}	
}
