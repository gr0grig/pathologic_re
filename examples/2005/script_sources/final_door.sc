include std.sci
include sdoor_base.sci

maintask TSDoor : TSDoorBase
{
	void OnUse(object actor) {
		disable OnUse;
		@Trace("on use");
		@TriggerWorld("open");
	}
	
	void OnTrigger(string name) {
		@Trace("trigger " + name);
		if (name == "open") {
			object actor;
			@FindActor(actor, "player");
			super.OnUse(actor);
		}
	}
}
