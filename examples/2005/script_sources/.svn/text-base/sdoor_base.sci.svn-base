include std.sci
include door_base.sci

task TSDoorBase
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		if (!actor)
			return;
		if (!CanOpen(actor)) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return;
		}
		bool bNegative;
		@ClassifyActor(bNegative, actor);
		bNegative = !bNegative;
		int iOpenSide;
		@GetOpenSide(iOpenSide);
		if (!iOpenSide) {
			@Open(bNegative);
		}
		else if (iOpenSide > 0) {
			if (bNegative)
				@Close();
			else
				@Open(bNegative);
		}
		else {
			if (bNegative)
				@Open(bNegative);
			else
				@Close();
		}
	}
	
	void OnClearPath(object actor) {
		if (!actor || !CanOpen(actor))
			return;
		bool bNegative;
		@ClassifyActor(bNegative, actor);
		@Open(!bNegative);
	}
	
	bool CanOpen(object actor) { return !IsLocked(); }

}
