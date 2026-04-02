include std.sci
include item_slow.sci

maintask TEffect: TSlow
{
	void init(void) {
		float fImmunity;
		@GetProperty("immunity", fImmunity);
		if (fImmunity < c_fImmunityTo) {
			@SetProperty("immunity", c_fImmunityTo);
		}
		
		super.init(c_fWorkTime);
	}
	
	bool Tick(float fDeltaTime) {
		ModPropertyF("immunity", fDeltaTime * c_fImmunityProgress, 0, c_fImmunityTo);
		return false;
	}
}
