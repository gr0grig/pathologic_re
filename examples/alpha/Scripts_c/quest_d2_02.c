// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool)
	{
		var_4_bool = false;
		var_5_bool = false;
		@SetVariable("d2q02", 1);
		func_290(2);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		object var_7_object; object var_8_object; object var_9_object; object var_10_object;
		@Trace(var_6_string);
		if(var_5_bool != 0) {
			if(var_6_string == "mpatrol_unload") {
				var_1_object->Remove(); //@t
				var_1_object = null;
			} else if(var_6_string == "patrol1_unload") {
						var_2_object->Remove(); //@t
						var_2_object = null;
			}
		}
	Label_36:
		for(;;) {
			if(!var_4_bool) { //@nz
				if(var_6_string == "put_patrol") {
					@GetMainOutdoorScene(var_9_object);
					object var_17_object; object var_18_object;
					var_9_object = var_18_object;
					func_320(var_17_object, var_18_object, "pt_d2q02_driver", "pers_birdmask", "d2q02_driver.xml");
					var_0_object = var_17_object;
					object var_35_object; object var_36_object;
					var_9_object = var_36_object;
					func_320(var_35_object, var_36_object, "pt_d2q02_mpatrol", "pers_patrool", "d2q02_mpatrol.xml");
					object var_40_object; object var_41_object;
					var_9_object = var_41_object;
					func_320(var_40_object, var_41_object, "pt_d2q02_patrol1", "pers_patrool", "d2q02_patrol1.xml");
					object var_45_object; object var_46_object;
					var_9_object = var_46_object;
					func_320(var_45_object, var_46_object, "pt_d2q02_patrol2", "pers_patrool", "d2q02_patrol2.xml");
					var_3_object = var_45_object;
					var_9_object = null;
				} else {
						if(var_6_string == "player_attack") {
							var_35_object->GetActor(var_10_object); //@t
							@Trigger(var_10_object, "kill_player");
							var_40_object->GetActor(var_10_object); //@t
							@Trigger(var_10_object, "kill_player");
							var_3_object->GetActor(var_10_object); //@t
							@Trigger(var_10_object, "kill_player");
							var_5_bool = true;
							func_162();
							var_10_object = null;
					}
					for(;;) {
						} else if(var_6_string == "completed") {
					func_162();
			}
				if(var_6_string == "driver_unload") {
					func_196(var_7_object, var_8_object, var_9_object, var_10_object, 0);
				} else if(var_6_string == "mpatrol_unload") {
					func_196(var_7_object, var_8_object, var_9_object, var_10_object, 1);
				} else if(var_6_string == "patrol1_unload") {
					func_196(var_7_object, var_8_object, var_9_object, var_10_object, 2);
				} else if(var_6_string == "patrol2_unload") {
					func_196(var_7_object, var_8_object, var_9_object, var_10_object, 3);

					}
				}

			}

		}
	
		if(!(var_6_string == "patrol2_unload")) goto Label_36;
		var_3_object->Remove(); //@t
		var_3_object = null;
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, int var_6_int, float var_7_float)
	{
		func_140();
	}

}


void func_320(object var_17_object, object var_18_object, string var_19_string, string var_20_string, string var_21_string)
{
	bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector;
	var_18_object->GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector);
	if(!var_26_bool) //@nz
		@Trace(("Locator " + var_19_string) + " doesn't exist");
	else
		var_18_object->AddStationaryActor(Obj(), var_27_cvector, var_28_cvector, var_20_string, var_21_string);
	object var_29_object = var_17_object;
	
}
EMIT "Stack[-1] = 0";


void func_162(void)
{
	int var_56_int;
	@GetVariable("d2q02", var_56_int);
	bool var_58_bool = false;
	if(var_56_int != 1000) {
		if(var_56_int != -1)
			var_58_bool = true;
	}
	if(var_58_bool != 0) {
		@SetVariable("d2q02", 1000);
		func_380();
		func_187(var_56_int);
	}
}


void func_290(int var_8_int)
{
	float var_10_float;
	@GetGameTime(var_10_float);
	if(var_10_float >= (var_8_int * 24)) {
		func_187(var_10_float);
	} else {
		@SetTimeEvent(0, (var_8_int * 24));
		@Hold();
	}
	
}


// @pe
void func_196(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_14_int)
{
	bool var_15_bool = false;
	bool var_16_bool = false;
	bool var_17_bool = false;
	bool var_18_bool = true;
	var_20_bool = var_14_int == 0;
	if(var_20_bool != 1) {
		bool var_21_bool;
		func_280(var_21_bool, var_0_object);
		if(var_21_bool != 1)
			var_18_bool = false;
	}
	if(var_18_bool != 0) {
		bool var_26_bool = true;
		var_28_bool = var_14_int == 1;
		if(var_28_bool != 1) {
			bool var_29_bool;
			func_280(var_29_bool, var_1_object);
			if(var_29_bool != 1)
				var_26_bool = false;
		}
		if(var_26_bool != 0)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		bool var_31_bool = true;
		var_33_bool = var_14_int == 2;
		if(var_33_bool != 1) {
			bool var_34_bool;
			func_280(var_34_bool, var_2_object);
			if(var_34_bool != 1)
				var_31_bool = false;
		}
		if(var_31_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		bool var_36_bool = true;
		var_38_bool = var_14_int == 3;
		if(var_38_bool != 1) {
			bool var_39_bool;
			func_280(var_39_bool, var_3_object);
			if(var_39_bool != 1)
				var_36_bool = false;
		}
		if(var_36_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		if(var_0_object != 0)
			var_0_object->Remove(); //@t
		if(var_1_object != 0)
			var_1_object->Remove(); //@t
		if(var_2_object != 0)
			var_2_object->Remove(); //@t
		if(var_3_object != 0)
			var_3_object->Remove(); //@t
		object var_45_object;
		func_314(var_45_object);
		@RemoveActor(var_45_object);
	}
}


void func_396(void)
{
	@Trace("Adding diary entry");
	object var_14_object;
	@CreateDiaryEntry(var_14_object, 62, 2, 12144);
	bool var_19_bool; object var_20_object;
	var_14_object = var_20_object;
	func_351(var_19_bool, var_20_object, 11);
}
EMIT "Stack[-1] = 0";


void func_140(void)
{
	int var_9_int;
	@GetVariable("d2q02", var_9_int);
	if(var_9_int != 1000)
		func_151();
}


void func_338(object var_28_object)
{
	object var_30_object;
	@GetDiaryRoot(var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_28_object = false;
	}
	var_30_object = var_28_object;
}
EMIT "Stack[-1] = 0";


void func_151(void)
{
	func_396();
	@SetVariable("d2q02", -1);
	func_187(var_9_int);
}


void func_280(bool var_21_bool, object var_22_object)
{
	if(!var_22_object) //@nz
		var_21_bool = true;
	object var_24_object;
	var_22_object->GetActor(var_24_object);
	var_21_bool = !var_24_object;
}
EMIT "Stack[-1] = 0";


void func_412(void)
{
}


void func_314(object var_45_object)
{
	object var_47_object;
	@self(var_47_object);
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_187(bool var_4_bool)
{
	func_412();
	var_4_bool = true;
	func_196(var_5_bool, var_8_int, var_9_float, var_10_float, -1);
}


void func_380(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 61, 2, 12143);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_351(var_71_bool, var_72_object, 11);
}
EMIT "Stack[-1] = 0";


void func_351(bool var_19_bool, object var_20_object, int var_21_int)
{
	object var_28_object;
	func_338(var_28_object);
	object var_25_object;
	var_28_object = var_25_object;
	object var_26_object;
	var_25_object->Find(var_21_int, var_26_object);
	if(!var_26_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_21_int);
		var_19_bool = false;
	}
	var_26_object->AddChild(var_20_object);
	@SetVariable("player_diary", 1);
	int var_27_int;
	var_20_object->GetCategory(var_27_int);
	@SetDiarySection(var_27_int);
	var_19_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


