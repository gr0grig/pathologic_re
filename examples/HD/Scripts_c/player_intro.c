// @GLOBALS: 0:string:

maintask task_0
{
	void init(void)
	{
		bool var_1_bool;
		@HasProperty("effects", var_1_bool);
		if(!var_1_bool) { //@nz
			@SetProperty("effects", true);
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_eyes_height.bin");
		}
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnTimer(int iID)
	{
		int var_2_int;
		iID = var_2_int;
		bool var_1_bool;
		func_58(var_1_bool, var_2_int);
	}

}


// @pe
void OnPlayerEnemy(void)
{
	func_198();
	func_146();
}


// @pe
void OnPlayerStartWalking(void)
{
	func_187();
	func_146();
}


// @pe
void OnPlayerStopWalking(void)
{
	func_167();
	func_156();
}


// @pe
void OnLSHAnimationEnd(void)
{
	func_177();
}


// @pe
void func_26(string var_22_string, int var_23_int)
{
	if(var_23_int == 1) {
		var_22_string = "wood";
		return 0;
	EMIT "GOTO 0x38";
	}
	if(var_23_int == 2) {
		var_22_string = "metal";
		return 0;
	EMIT "GOTO 0x38";
	}
	if(var_23_int == 3) {
		var_22_string = "ground";
		return 0;
	EMIT "GOTO 0x38";
	}
	if(var_23_int == 4) {
		var_22_string = "water";
		return 0;
	EMIT "GOTO 0x38";
	}
	if(var_23_int == 5) {
		var_22_string = "carpet";
		return 0;
	}
	var_22_string = "stone";
}


// @pe
void func_198(void)
{
	func_177();
	@SetTimer(12, 0.6);
	@ModNoise(1);
}


void func_167(void)
{
	bool var_1_bool;
	@KillTimer(10, var_1_bool);
	if(var_1_bool != 0)
		@ModNoise(-2);
}


// @pe
void func_209(void)
{
	func_87();
}


void func_146(void)
{
	bool var_6_bool;
	@KillTimer(11, var_6_bool);
	if(var_6_bool != 0)
		@ModNoise(-3);
}


void func_177(void)
{
	bool var_1_bool;
	@KillTimer(12, var_1_bool);
	if(var_1_bool != 0)
		@ModNoise(-1);
}


// @pe
void func_213(void)
{
	func_87();
}


void func_87(void)
{
	bool var_13_bool; int var_14_int; bool var_17_bool; int var_18_int; string var_20_string;
	@GetGroundMaterial(var_13_bool, var_14_int);
	if(!var_13_bool) //@nz
		var_14_int = -1;
	string var_22_string; int var_23_int;
	var_14_int = var_23_int;
	func_26(var_22_string, var_23_int);
	string var_15_string;
	var_22_string = var_15_string;
	int var_16_int = 0;
	
	for(;;) {
		@IsExistingSound(var_17_bool, (("step_" + var_15_string) + (var_16_int + 1)));
		if(!var_17_bool) { //@nz
			break;
		Label_118:
			if(var_16_int == 1) {
				var_18_int = 0;
			} else {
					@irand(var_18_int, var_16_int);
					var_53_string = GlobalVars[0];
					if(!((("step_" + var_15_string) + (var_18_int + 1)) != var_53_string)) goto Label_134;
			}
			for(;;) {
				@PlaySound(("step_" + var_15_string) + (var_18_int + 1));
				var_48_string = GlobalVars[0];
				var_20_string = var_48_string;
				GlobalVars[0] = var_48_string;

			}

		Label_134:
		}
		var_16_int += 1;
	}
	var_40_bool = !var_16_int; //@nz
	if(var_40_bool == 0) goto Label_118;
	var_41_string = GlobalVars[0];
	GlobalVars[0] = "";
}


// @pe
void func_217(void)
{
	func_87();
	func_146();
}


// @pe
void func_58(bool var_1_bool, int var_2_int)
{
	if(var_2_int == 10) {
		func_209();
		var_1_bool = true;
		return 0;
	EMIT "GOTO 0x55";
	}
	if(var_2_int == 11) {
		func_217();
		var_1_bool = true;
		return 0;
	EMIT "GOTO 0x55";
	}
	if(var_2_int == 12) {
		func_213();
		var_1_bool = true;
		return 0;
	}
	var_1_bool = false;
}


// @pe
void func_187(void)
{
	func_167();
	@SetTimer(10, 0.35);
	@ModNoise(2);
}


// @pe
void func_156(void)
{
	func_146();
	@SetTimer(11, 0.15);
	@ModNoise(3);
}


