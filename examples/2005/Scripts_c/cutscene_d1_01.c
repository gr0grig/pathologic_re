maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object)
	{
		var_0_bool = false;
		var_1_bool = false;
		var_2_bool = false;
		object var_6_object;
		func_289(var_6_object);
		var_3_object = var_6_object;
		@SetTimeEvent(0, 7);
		@SetTimeEvent(1, 18);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object)
	{
		if(var_2_bool != 0) {
			func_189(var_5_object);
		} else if(var_1_bool != 0) {
			var_1_bool = false;
			func_111(var_2_bool, var_3_object, var_4_object, var_5_object);
		}
	
	}

	// @pe
	void OnGameTime(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, float var_7_float)
	{
		if(var_6_int == 0) {
			bool var_10_bool;
			func_235(var_10_bool);
			if(var_10_bool != 0)
				var_1_bool = true;
			else
				func_111(var_4_object, var_5_object, var_6_int, var_7_float);
				bool var_65_bool;
				func_235(var_65_bool);
				if(var_65_bool != 0)
					var_2_bool = true;
				} else {
			func_189(var_7_float);
				}
		for(;;) {
			return 0;

		}
	
	}

	void OnIntersection(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object)
	{
		object var_10_object;
		if(!var_0_bool) { //@nz
		}
		@SetVariable("cutscene_burn_d1", 1);
		bool var_9_bool;
		@IsPlayerActor(var_6_object, var_9_bool);
		if(var_9_bool != 0) {
			disable OnIntersection;
			func_360(var_3_object, "play");
			@Trigger(var_4_object, "play");
			object var_28_object;
			var_6_object = var_28_object;
			TaskCall(1);
			func_202(var_28_object);
			TaskReturn();
			@GetMainOutdoorScene(var_10_object);
			object var_61_object; object var_62_object;
			var_10_object = var_62_object;
			func_295(var_61_object, var_62_object, "pt_cs_d1_01_worker", "pers_worker", "cutscene_d1_01_worker.xml");
			object var_79_object; object var_80_object;
			var_10_object = var_80_object;
			func_295(var_79_object, var_80_object, "pt_cs_d1_01_woman", "pers_woman", "cutscene_d1_01_woman.xml");
			object var_84_object; object var_85_object;
			func_295(var_84_object, var_85_object, "pt_cs_d1_01_alkash", "pers_alkash", "cutscene_d1_01_alkash.xml");
			func_180(var_9_bool, var_85_object);
			var_10_object = null;
		}
	}

}


task task_1
{
	// @pe
	void OnKeyDown(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int)
	{
		@CameraSwitchToNormal();
	}

}


void func_384(void)
{
	@SetSepia(0, 0);
}


void func_289(object var_6_object)
{
	object var_8_object;
	@CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_321(object var_43_object, object var_44_object, string var_45_string, string var_46_string, string var_47_string)
{
	bool var_52_bool; cvector var_53_cvector; cvector var_54_cvector;
	var_44_object->GetLocator(var_45_string, var_52_bool, var_53_cvector, var_54_cvector);
	if(!var_52_bool) //@nz
		@Trace(("Locator " + var_45_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_46_string, var_44_object, var_53_cvector, var_54_cvector, var_47_string);
	object var_55_object = var_43_object;
	
}
EMIT "Stack[-1] = 0";


void func_295(object var_61_object, object var_62_object, string var_63_string, string var_64_string, string var_65_string)
{
	bool var_70_bool; cvector var_71_cvector; cvector var_72_cvector;
	var_62_object->GetLocator(var_63_string, var_70_bool, var_71_cvector, var_72_cvector);
	if(!var_70_bool) //@nz
		@Trace(("Locator " + var_63_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_64_string, var_62_object, var_71_cvector, var_72_cvector, var_65_string);
	object var_73_object = var_61_object;
	
}
EMIT "Stack[-1] = 0";


void func_360(object var_15_object, string var_16_string)
{
	int var_20_int; int var_21_int; object var_22_object;
	if(var_15_object != 0) {
		var_15_object->size(var_20_int);
		var_21_int = 0;

		for(;;) {
			if(!(var_21_int < var_20_int)) goto Label_378;
			var_15_object->get(var_22_object, var_21_int);
			if(var_22_object != 0)
				@Trigger(var_22_object, var_16_string);
			var_22_object = null;
			var_21_int += 1;
		}
	}
Label_378:
}


void func_263(object var_48_object)
{
	if(!var_48_object) { //@nz
	}
	int var_50_int;
	var_48_object->GetProperty("noaccess", var_50_int);
	if(var_50_int > 1)
		var_48_object->SetProperty("noaccess", (var_50_int - 1));
	else
		var_48_object->RemoveProperty("noaccess");
	
}


// @pe
void func_202(object var_28_object)
{
	func_379();
	object var_31_object;
	var_28_object = var_31_object;
	func_240(var_31_object);
	@RegisterKeyCallback("space");
	@CameraPlay("cs_cannibal.mot");
	@CameraWaitForPlayFinish();
	@UnregisterKeyCallback("space");
	object var_48_object;
	var_28_object = var_48_object;
	func_263(var_48_object);
	func_384();
	@CameraSwitchToNormal();
}


void func_235(bool var_10_bool)
{
	bool var_12_bool;
	@IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
}


void func_111(bool var_0_bool, object var_3_object, object var_4_object, object var_5_object)
{
	var_0_bool = true;
	object var_14_object;
	@GetMainOutdoorScene(var_14_object);
	object var_15_object; object var_16_object;
	var_14_object = var_16_object;
	func_313(var_15_object, var_16_object, "cs_cannibal_alkash1", "cs_play_all_trigger.bin");
	var_3_object->add(var_15_object); //@t
	object var_23_object; object var_24_object;
	var_14_object = var_24_object;
	func_313(var_23_object, var_24_object, "cs_cannibal_grabitel1", "cs_play_all_trigger.bin");
	var_3_object->add(var_23_object); //@t
	object var_27_object; object var_28_object;
	var_14_object = var_28_object;
	func_313(var_27_object, var_28_object, "cs_cannibal_unosha1", "cs_play_all_trigger.bin");
	var_3_object->add(var_27_object); //@t
	object var_31_object; object var_32_object;
	var_14_object = var_32_object;
	func_313(var_31_object, var_32_object, "cs_cannibal_unosha2", "cs_play_all_trigger.bin");
	var_3_object->add(var_31_object); //@t
	object var_35_object; object var_36_object;
	var_14_object = var_36_object;
	func_313(var_35_object, var_36_object, "cs_cannibal_woman1", "cs_play_all_trigger.bin");
	var_3_object->add(var_35_object); //@t
	object var_39_object; object var_40_object;
	var_14_object = var_40_object;
	func_313(var_39_object, var_40_object, "cs_cannibal_worker1", "cs_play_all_trigger.bin");
	var_3_object->add(var_39_object); //@t
	object var_43_object; object var_44_object;
	var_14_object = var_44_object;
	func_321(var_43_object, var_44_object, "pt_cs_d1_01_fire", "scripted", "bonfire_big.xml");
	var_5_object = var_43_object;
	object var_61_object; object var_62_object;
	var_14_object = var_62_object;
	func_313(var_61_object, var_62_object, "cs_cannibal_nudegirl", "cs_play_all_trigger.bin");
	var_4_object = var_61_object;
}
EMIT "Stack[-1] = 0";


void func_240(object var_31_object)
{
	int var_35_int;
	if(!var_31_object) { //@nz
	}
	bool var_34_bool;
	var_31_object->HasProperty("noaccess", var_34_bool);
	if(var_34_bool != 0) {
		var_31_object->GetProperty("noaccess", var_35_int);
		var_31_object->SetProperty("noaccess", (var_35_int + 1));
	} else {
		var_31_object->SetProperty("noaccess", 1);
	}
	
}


void func_339(object var_89_object)
{
	int var_93_int; int var_94_int; object var_95_object;
	if(var_89_object != 0) {
		var_89_object->size(var_93_int);
		var_94_int = 0;

		while(var_94_int < var_93_int) {
			var_89_object->get(var_95_object, var_94_int);
			if(var_95_object != 0)
				@RemoveActor(var_95_object);
			var_95_object = null;
			var_94_int += 1;
		}

		var_89_object->clear();
	}
}


void func_180(object var_3_object, object var_4_object)
{
	func_339(var_3_object);
	if(var_4_object != 0)
		@RemoveActor(var_4_object);
}


void func_379(void)
{
	@SetSepia(0.5, 0.886);
}


void func_313(object var_15_object, object var_16_object, string var_17_string, string var_18_string)
{
	object var_20_object;
	@AddScriptedActor(var_20_object, var_17_string, var_18_string, var_16_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_20_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_283(object var_79_object)
{
	object var_81_object;
	@self(var_81_object);
	var_81_object = var_79_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_189(object var_5_object)
{
	func_180(var_6_int, var_7_float);
	if(var_5_object != 0)
		@RemoveActor(var_5_object);
	object var_79_object;
	func_283(var_79_object);
	@RemoveActor(var_79_object);
}


