// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
	{
		var_0_int = 4;
		object var_7_object;
		@GetSceneByName(var_7_object, "d2q01_house1");
		object var_9_object; object var_10_object;
		var_7_object = var_10_object;
		func_226(var_9_object, var_10_object, "pt_b1q05_spi4ka", "NPC_Spi4ka", "b1q05_spi4ka.xml");
		var_4_object = var_9_object;
		@GetSceneByName(var_7_object, "house_spi4ka");
		@Trigger(var_7_object, "nospi4ka");
		@GetMainOutdoorScene(var_7_object);
		object var_29_object; object var_30_object;
		var_7_object = var_30_object;
		func_244(var_29_object, var_30_object, "pt_b1q05_patrol_house", "pers_patrool", "b1q05_patrol_house.xml");
		var_1_object = var_29_object;
		object var_47_object; object var_48_object;
		var_7_object = var_48_object;
		func_244(var_47_object, var_48_object, "pt_b1q05_patrol1", "pers_patrool", "b1q05_patrol_key.xml");
		var_2_object = var_47_object;
		object var_52_object; object var_53_object;
		var_7_object = var_53_object;
		func_244(var_52_object, var_53_object, "pt_b1q05_patrol2", "pers_patrool", "b1q05_patrol.xml");
		var_3_object = var_52_object;
		object var_57_object; object var_58_object;
		var_7_object = var_58_object;
		func_244(var_57_object, var_58_object, "pt_b1q05_woman", "pers_woman", "b1q05_woman.xml");
		var_5_object = var_57_object;
		func_196(1);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(int var_0_int, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string)
	{
		object var_11_object; object var_12_object; object var_13_object; int var_14_int;
		@Trace(var_6_string);
		if(var_6_string == "attack") {
			if(var_2_object != 0) {
				var_2_object->GetActor(var_11_object); //@t
				if(var_11_object != 0)
					@Trigger(var_11_object, "attack");
				var_11_object = null;
			}
			if(var_3_object != 0) {
				var_3_object->GetActor(var_12_object); //@t
				if(var_12_object != 0)
					@Trigger(var_12_object, "attack");
				var_12_object = null;
			}
		} else {
				if(!(var_6_string == "house_load")) goto Label_110;
				@GetSceneByName(var_13_object, "d2q01_house1");
				var_14_int = 0;

				while(var_14_int < var_0_int) {
					object var_27_object; object var_28_object;
					var_13_object = var_28_object;
					func_226(var_27_object, var_28_object, ("pt_b1q05_rat" + (var_14_int + 1)), "pers_rat", "b1q05_rat.xml");
					var_14_int += 1;
				}

				var_13_object = null;
		}

	
	Label_110:
		if(var_6_string == "rat_dead") {
			var_0_int += -1;
		} else if(var_6_string == "fail") {
			func_149();
		} else if(var_6_string == "completed") {
			func_157();
		}
	}

	// @pe
	void OnGameTime(int iID, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, float var_7_float)
	{
		func_130();
	}

}


void func_226(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
{
	bool var_18_bool; cvector var_19_cvector; cvector var_20_cvector;
	var_10_object->GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	if(!var_18_bool) //@nz
		@Trace(("Locator " + var_11_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	object var_21_object = var_9_object;
	
}
EMIT "Stack[-1] = 0";


void func_130(void)
{
	int var_9_int;
	@GetVariable("b1q05", var_9_int);
	if(var_9_int != 1000)
		func_149();
	int var_8_int;
	func_165(var_5_object, var_6_int, var_7_float, var_8_int, var_9_int);
	object var_25_object;
	func_220(var_25_object);
	@RemoveActor(var_25_object);
}


void func_196(int var_62_int)
{
	float var_63_float; float var_64_float;
	@GetGameTime(var_64_float);
	if(var_64_float >= (var_62_int * 24)) {
		func_165(var_6_object, var_7_object, var_62_int, var_63_float, var_64_float);
	} else {
		@SetTimeEvent(0, (var_62_int * 24));
		@Hold();
	}
	
}


void func_165(object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
{
	object var_69_object;
	@GetSceneByName(var_69_object, "house_spi4ka");
	@Trigger(var_69_object, "spi4ka");
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	if(var_3_object != 0)
		var_3_object->Remove(); //@t
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(var_5_object != 0)
		var_5_object->Remove(); //@t
}
EMIT "Stack[-1] = 0";


void func_244(object var_29_object, object var_30_object, string var_31_string, string var_32_string, string var_33_string)
{
	bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	var_30_object->GetLocator(var_31_string, var_38_bool, var_39_cvector, var_40_cvector);
	if(!var_38_bool) //@nz
		@Trace(("Locator " + var_31_string) + " doesn't exist");
	else
		var_30_object->AddStationaryActor(Obj(), var_39_cvector, var_40_cvector, var_32_string, var_33_string);
	object var_41_object = var_29_object;
	
}
EMIT "Stack[-1] = 0";


void func_149(void)
{
	@SetVariable("b1q05", -1);
	func_165(var_5_object, var_6_int, var_7_float, var_8_int, var_9_int);
}


void func_220(object var_25_object)
{
	object var_27_object;
	@self(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


void func_157(void)
{
	@SetVariable("b1q05", 1000);
	func_165(var_10_int, var_11_object, var_12_object, var_13_object, var_14_int);
}


