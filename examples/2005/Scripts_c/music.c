maintask task_0
{
	void init(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, object var_4_object)
	{
		@sync();
		@SetTimer(0, 15);
	
		for(;;) {
			bool var_7_bool;
			func_116(var_4_object, var_7_bool, false);
			if(var_7_bool != 0)
				@WaitForMusicEnd1();
			else
				@Sleep(1);
		}
	
	}
	EMIT "Return(); Pop(0)";

	void OnTimer(string var_0_string, string var_1_string, string var_2_string, int var_3_int, bool var_4_bool, object var_5_object)
	{
		string var_7_string;
		if(var_5_object == 0) {
			@Trace("Music time limit reached");
			if(var_1_string != "") {
				string var_13_string;
				func_63(var_13_string);
				var_13_string = var_7_string;
				if(var_0_string == var_7_string) {
					bool var_46_bool; string var_47_string;
					var_7_string = var_47_string;
					func_174(var_7_string, var_46_bool, var_47_string);
					if(var_46_bool != 0)
						return 2;
				} else {
					bool var_102_bool = false;
					if(var_0_string != "horror") {
						if(var_7_string != "horror")
							var_102_bool = true;
					}
					if(var_102_bool == 0) goto Label_58;
					bool var_107_bool; string var_108_string;
					var_7_string = var_108_string;
					func_174(var_7_string, var_107_bool, var_108_string);
					if(var_107_bool == 0) goto Label_58;
					return 2;
				}
			Label_58:
				bool var_55_bool;
				func_116(var_7_string, var_55_bool, true);
			}
		}
	
	}

	// @pe
	void OnMusicChange(string var_0_string, string var_1_string, string var_2_string, string var_3_string, bool var_4_bool, object var_5_object)
	{
		if(var_5_object == "attack") {
			if(var_2_string != "") {
				func_187();
				TaskCall(1);
				func_234(var_12_bool, var_13_object, var_2_string);
				TaskReturn();
				@SetTimer(0, 15);
			}
		} else {
			func_187();
			string var_21_string;
			var_5_object = var_21_string;
			TaskCall(2);
			func_306(var_21_string);
			TaskReturn();
		}
	
	}

	void OnRegionChange(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, object var_4_object)
	{
		string var_7_string;
		func_63(var_7_string);
		string var_6_string;
		var_7_string = var_6_string;
		bool var_5_bool;
		func_174(var_4_object, var_5_bool, var_6_string);
		if(!var_5_bool) //@nz
			@StopMusic1();
	}

}


task task_1
{
	// @pe
	void OnMusicChange(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, object var_4_object, string var_5_string)
	{
		if(var_5_string == "attack") {
			@SetTimer(1, 10);
			var_0_string = false;
		} else if(var_5_string != "") {
			func_291(var_5_string);
			string var_13_string;
			var_5_string = var_13_string;
			TaskCall(2);
			func_306(var_13_string);
			TaskReturn();
		}
	
	}

	// @pe
	void OnTimer(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, object var_4_object, int var_5_int)
	{
		if(var_5_int == 1) {
			@FadeMusic1(2);
			@KillTimer(1);
			var_0_string = true;
		}
	}

	void OnRegionChange(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, object var_4_object)
	{
		object var_6_object;
		@GetActiveScene(var_6_object);
		if(var_1_string != var_6_object) {
			var_0_string = true;
			@StopMusic1();
		}
	}
	EMIT "Stack[-1] = 0";

}


task task_2
{
	// @pe
	void OnMusicChange(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, object var_4_object, string var_5_string)
	{
		if(var_5_string == "")
			@FadeMusic1(1);
	}

}


// @pe
void func_320(string var_27_string, int var_28_int)
{
	var_27_string = ("Region" + var_28_int) + "State";
}


void func_291(string var_0_string)
{
	var_0_string = true;
	@KillTimer(1);
}


void func_326(string var_59_string, string var_60_string)
{
	int var_65_int; bool var_66_bool;
	var_65_int = 0;
	
	for(;;) {
		@HasMusicValue(var_66_bool, var_60_string, ("agressive" + (var_65_int + 1)));
		if(!var_66_bool) { //@nz
			break;
		Label_352:
			var_59_string = "";
		}
		var_65_int += 1;
	}
	if(var_65_int == 0) goto Label_352;
	int var_67_int;
	@irand(var_67_int, var_65_int);
	string var_68_string;
	@GetMusicValue(var_68_string, var_60_string, ("agressive" + (var_67_int + 1)));
	var_68_string = var_59_string;
}


// @pe
void func_234(string var_0_string, string var_1_string, string var_11_string)
{
	@SetTimer(1, 10);
	@GetActiveScene(var_1_string);
	@SwitchMusic1(var_11_string, true);
	@WaitForMusicEnd1();
	
	for(;;) {
		var_17_bool = !false; //@nz
		if(var_17_bool == 0) goto Label_255;
		@PlayMusic1(var_11_string, true);
		@WaitForMusicEnd1();
	}
	
Label_255:
}


void func_174(string var_1_string, bool var_5_bool, string var_6_string)
{
	bool var_41_bool; string var_42_string;
	@HasMusicValue(var_41_bool, var_6_string, "music");
	if(var_41_bool != 0) {
		@GetMusicValue(var_42_string, var_6_string, "music");
		var_5_bool = var_1_string == var_42_string;
	}
	var_5_bool = false;
}


// @pe
void func_145(string var_1_string, string var_2_string, string var_48_string, string var_49_string, bool var_50_bool)
{
	var_1_string = var_49_string;
	if(var_49_string != "") {
		@Trace((("Playing: '" + var_49_string) + "' from category: ") + var_48_string);
		if(var_50_bool != 0)
			@SwitchMusic1(var_49_string);
		else
			@PlayMusic1(var_49_string);
	}
	string var_59_string; string var_60_string;
	var_48_string = var_60_string;
	func_326(var_59_string, var_60_string);
	@Trace("Chosen agressive: " + var_59_string);
	
}


// @pe
void func_306(string var_13_string)
{
	@PlayMusic1(var_13_string);
	@WaitForMusicEnd1();
}


void func_116(string var_0_string, bool var_7_bool, bool var_8_bool)
{
	string var_12_string;
	string var_13_string;
	func_63(var_13_string);
	var_0_string = var_13_string;
	bool var_11_bool;
	@HasMusicValue(var_11_bool, var_0_string, "music");
	if(var_11_bool != 0) {
		@GetMusicValue(var_12_string, var_0_string, "music");
		string var_49_string; bool var_50_bool;
		var_12_string = var_49_string;
		var_8_bool = var_50_bool;
		func_145(var_11_bool, var_12_string, var_0_string, var_49_string, var_50_bool);
		var_7_bool = true;
	}
	bool var_84_bool;
	var_8_bool = var_84_bool;
	func_145(var_11_bool, var_12_string, var_0_string, "", var_84_bool);
	var_7_bool = false;
}


void func_187(void)
{
	@KillTimer(0);
}


void func_63(string var_13_string)
{
	bool var_19_bool; string var_20_string; int var_21_int; int var_22_int; float var_23_float;
	@HasMusicAttribute(var_19_bool, "id");
	if(var_19_bool != 0) {
		@GetMusicAttribute(var_20_string, "id");
		@_strtoi(var_21_int, var_20_string);
		string var_27_string;
		func_320(var_27_string, (var_21_int - 1));
		@GetVariable(var_27_string, var_22_int);
		var_22_int = var_22_int & 3;
		bool var_34_bool = true;
		var_36_bool = var_22_int == 1;
		if(var_36_bool != 1) {
			var_38_bool = var_22_int == 2;
			if(var_38_bool != 1)
				var_34_bool = false;
		}
		if(var_34_bool != 0) {
			var_13_string = "horror";
			return 10;
		EMIT "GOTO 0x72";
		}
		@GetGameTime(var_23_float);
		var_23_float = var_23_float % 24;
		bool var_40_bool = false;
		if(var_23_float >= 9) {
			if(var_23_float <= 19)
				var_40_bool = true;
		}
		if(var_40_bool != 0)
			var_13_string = "day";
		else
			var_13_string = "night";
		var_13_string = "general";
		return 10;
	}
	
}


