// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool)
	{
		object var_3_object;
		func_198(var_3_object, "quest_d8_03");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, string var_3_string)
	{
		object var_9_object; object var_10_object; object var_11_object; float var_12_float; int var_13_int;
		@Trace(var_3_string);
		if(var_3_string == "block_well") {
			@GetSceneByName(var_9_object, "house_vlad");
			@AddActor(var_10_object, "d8q01_well_block", var_9_object, [0.0, 0.0, 0.0]);
			var_10_object = null;
			var_9_object = null;
		} else if(var_3_string == "place_toy") {
				@GetSceneByName(var_11_object, "r4_house_2_02");
				object var_22_object; object var_23_object;
				var_11_object = var_23_object;
				func_209(var_22_object, var_23_object, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
				var_0_object = var_22_object;
				var_11_object = null;
		}
	Label_122:
		for(;;) {

		}
	
		if(var_3_string == "boiny_load") {
			if(!var_2_bool) { //@nz
				var_2_bool = true;
				object var_43_object;
				func_198(var_43_object, "quest_d8_01_cutscene");
			}
		} else if(var_3_string == "unlock_boiny") {
			func_0();
			@GetGameTime(var_12_float);
			if(var_12_float >= 191.0)
				func_131();
			else
				@SetTimeEvent(0, 191.0);
			if(var_3_string == "cleanup") {
				@GetVariable("d8q01", var_13_int);
				if(var_13_int != 1000)
					func_143();
				else
					func_159(var_12_float, var_13_int);
				if(var_3_string == "fail")
					func_143();
				if(!(var_3_string == "completed")) goto Label_122;
				func_151();
			}
		}
		goto Label_122;
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, bool var_2_bool, int var_3_int, float var_4_float)
	{
		@ReleaseTimeEvent(0);
		func_131();
	}

	// @pe
	void OnKeyDown(object var_0_object, object var_1_object, bool var_2_bool, int var_3_int)
	{
		@CameraSwitchToNormal();
	}

}


void func_0(void)
{
	int var_54_int;
	@GetVariable("d8q01MladVladIsVictim", var_54_int);
	if(var_54_int != 0) {
		bool var_58_bool;
		func_244(var_58_bool, "volonteers_danko", "kill", "mladvlad");
	} else {
		bool var_65_bool;
		func_244(var_65_bool, "volonteers_danko", "kill", "bigvlad");
	}
	
}


void func_256(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 716, 1, 536363);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_282(var_22_bool, var_23_object, 175);
}
EMIT "Stack[-1] = 0";


void func_192(object var_121_object)
{
	object var_123_object;
	@self(var_123_object);
	var_123_object = var_121_object;
}
EMIT "Stack[-1] = 0";


void func_131(void)
{
	@Trace("Boiny unlocked");
	func_227("boiny@door1", false);
	func_256();
}


void func_227(string var_7_string, bool var_8_bool)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(!var_10_object) //@nz
		@Trace(("Door " + var_7_string) + " not found");
	else
		var_10_object->SetProperty("locked", var_8_bool);
	
}
EMIT "Stack[-1] = 0";


void func_198(object var_3_object, string var_4_string)
{
	object var_7_object;
	@GetMainOutdoorScene(var_7_object);
	object var_8_object;
	@AddBlankActor(var_8_object, var_7_object, var_4_string, (var_4_string + ".bin"));
	var_8_object = var_3_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_269(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_143(void)
{
	@SetVariable("d8q01", -1);
	func_159(var_12_float, var_13_int);
}


void func_209(object var_22_object, object var_23_object, string var_24_string, string var_25_string, string var_26_string)
{
	bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	var_23_object->GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector);
	if(!var_31_bool) //@nz
		@Trace(("Locator " + var_24_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string);
	object var_34_object = var_22_object;
	
}
EMIT "Stack[-1] = 0";


void func_244(bool var_58_bool, string var_59_string, string var_60_string, string var_61_string)
{
	object var_63_object;
	@FindActor(var_63_object, var_59_string);
	if(var_63_object == null)
		var_58_bool = false;
	@Trigger(var_63_object, var_60_string, var_61_string);
	var_58_bool = true;
}
EMIT "Stack[-1] = 0";


void func_151(void)
{
	@SetVariable("d8q01", 1000);
	func_159(var_12_float, var_13_int);
}


void func_282(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_269(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_159(object var_0_object, object var_1_object)
{
	@ReleaseTimeEvent(0);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_227("boiny@door1", true);
	func_0();
	object var_121_object;
	func_192(var_121_object);
	@RemoveActor(var_121_object);
}


