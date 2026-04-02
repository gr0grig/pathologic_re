maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
	{
		@CreateObjectVector(var_1_object);
		@CreateObjectVector(var_5_object);
		object var_7_object;
		@GetMainOutdoorScene(var_7_object);
		object var_8_object; object var_9_object;
		var_7_object = var_9_object;
		func_503(var_8_object, var_9_object, "pt_d5q01_sobor_guard1", "pers_wasted_male", "d5q01_sobor_guard1.xml");
		var_5_object->add(var_8_object); //@t
		object var_26_object; object var_27_object;
		var_7_object = var_27_object;
		func_503(var_26_object, var_27_object, "pt_d5q01_sobor_guard2", "pers_wasted_male", "d5q01_sobor_guard2.xml");
		var_5_object->add(var_26_object); //@t
		object var_31_object; object var_32_object;
		var_7_object = var_32_object;
		func_503(var_31_object, var_32_object, "pt_d5q01_sobor_guard3", "pers_wasted_male", "d5q01_sobor_guard3.xml");
		var_5_object->add(var_31_object); //@t
		object var_36_object; object var_37_object;
		var_7_object = var_37_object;
		func_503(var_36_object, var_37_object, "pt_d5q01_theater_guard", "pers_whitemask", "d5q01_theater_guard.xml");
		var_5_object->add(var_36_object); //@t
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string)
	{
		object var_17_object; int var_18_int; int var_19_int; object var_20_object; float var_21_float; int var_22_int; int var_23_int; object var_24_object; bool var_25_bool; int var_26_int;
		@Trace(var_6_string);
		if(var_6_string == "factory") {
			func_521("factory@door1", false);
			func_538("ifactory_grid_door", true);
			@GetSceneByName(var_17_object, "factory");
			object var_51_object; object var_52_object;
			var_17_object = var_52_object;
			func_485(var_51_object, var_52_object, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
			var_0_object = var_51_object;
			object var_69_object; object var_70_object;
			var_17_object = var_70_object;
			func_485(var_69_object, var_70_object, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml");
			var_1_object->add(var_69_object); //@t
			object var_74_object; object var_75_object;
			var_17_object = var_75_object;
			func_485(var_74_object, var_75_object, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml");
			var_1_object->add(var_74_object); //@t
			object var_79_object; object var_80_object;
			var_17_object = var_80_object;
			func_485(var_79_object, var_80_object, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml");
			var_1_object->add(var_79_object); //@t
			var_17_object = null;
		} else if(var_6_string == "d5q01_trigger_factory") {
				@GetVariable("d5q01PlayCutscene", var_18_int);
				if(var_18_int != 0) {
					@GetVariable("d5q01", var_19_int);
					bool var_89_bool; int var_90_int;
					var_19_int = var_90_int;
					func_665(var_89_bool, var_90_int);
					if(var_89_bool != 0) {
						func_521("ifactory@door1", true);
						@SetVariable("d5q01PlayCutscene", 0);
						func_604(var_1_object);
						object var_110_object;
						func_474(var_110_object, "quest_d5_01_cutscene");
					}
				}
		}
	Label_309:
		for(;;) {

		}
	
		if(var_6_string == "cutscene_end") {
			@GetSceneByName(var_20_object, "factory");
			object var_121_object; object var_122_object;
			var_20_object = var_122_object;
			func_485(var_121_object, var_122_object, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_disp_b.xml");
			var_1_object->add(var_121_object); //@t
			object var_126_object; object var_127_object;
			var_20_object = var_127_object;
			func_485(var_126_object, var_127_object, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_disp_b.xml");
			var_1_object->add(var_126_object); //@t
			object var_131_object; object var_132_object;
			var_20_object = var_132_object;
			func_485(var_131_object, var_132_object, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_disp_b.xml");
			var_1_object->add(var_131_object); //@t
			object var_136_object; object var_137_object;
			var_20_object = var_137_object;
			func_485(var_136_object, var_137_object, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_disp_b.xml");
			var_1_object->add(var_136_object); //@t
			object var_141_object; object var_142_object;
			var_20_object = var_142_object;
			func_485(var_141_object, var_142_object, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml");
			var_1_object->add(var_141_object); //@t
			var_20_object = null;
		} else if(var_6_string == "burah_free") {
			@GetGameTime(var_21_float);
			if(var_21_float >= 116)
				func_338(var_24_object, var_25_bool, var_26_int);
			else
				@SetTimeEvent(0, 116);
			if(var_6_string == "factory_fight") {
				func_521("ifactory@door1", true);
				func_646(var_1_object, "attack");
				@PlaySound("door_close");
				bool var_186_bool; object var_187_object;
				object var_189_object;
				func_416(var_189_object);
				var_189_object = var_187_object;
				func_559(var_186_bool, var_187_object, -0.25);
			}
			if(var_6_string == "dead") {
				bool var_230_bool; object var_231_object;
				object var_233_object;
				func_416(var_233_object);
				var_233_object = var_231_object;
				func_559(var_230_bool, var_231_object, -0.25);
				var_1_object->size(var_22_int); //@t
				var_23_int = 0;

				for(;;) {
					if(var_23_int < var_22_int) {
						var_1_object->get(var_24_object, var_23_int); //@t
						var_24_object->IsDead(var_25_bool);
						if(!var_25_bool) { //@nz
						} else {
							var_24_object = null;
							var_23_int += 1;
						}
					}
					if(var_23_int == var_22_int)
						func_521("ifactory@door1", false);

				}
			}
			if(var_6_string == "cleanup") {
				@GetVariable("d5q01", var_26_int);
				if(var_26_int != 1000)
					func_310();
				else
					func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int);
				if(var_6_string == "fail")
					func_310();
				if(!(var_6_string == "completed")) goto Label_309;
				func_318();
			}
			func_404(var_26_int);
		}
		@Trigger(var_0_object, "cleanup");
		func_521("factory@door1", true);
		goto Label_309;
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, float var_7_float)
	{
		@ReleaseTimeEvent(0);
		func_338(var_5_object, var_6_int, var_7_float);
	}

	// @pe
	void OnKeyDown(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int)
	{
		@CameraSwitchToNormal();
	}

}


void func_646(object var_173_object, string var_174_string)
{
	int var_178_int; int var_179_int; object var_180_object;
	if(var_173_object != 0) {
		var_173_object->size(var_178_int);
		var_179_int = 0;

		for(;;) {
			if(!(var_179_int < var_178_int)) goto Label_664;
			var_173_object->get(var_180_object, var_179_int);
			if(var_180_object != 0)
				@Trigger(var_180_object, var_174_string);
			var_180_object = null;
			var_179_int += 1;
		}
	}
Label_664:
}


void func_521(string var_29_string, bool var_30_bool)
{
	object var_32_object;
	@FindActor(var_32_object, var_29_string);
	if(!var_32_object) //@nz
		@Trace(("Door " + var_29_string) + " not found");
	else
		var_32_object->SetProperty("locked", var_30_bool);
	
}
EMIT "Stack[-1] = 0";


void func_457(object var_275_object)
{
	object var_277_object;
	@self(var_277_object);
	var_277_object = var_275_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_463(float var_219_float, float var_220_float, float var_221_float, float var_222_float)
{
	if(var_220_float < var_221_float) {
		var_221_float = var_219_float;
		return 0;
	}
	if(var_220_float > var_222_float) {
		var_222_float = var_219_float;
		return 0;
	}
	var_220_float = var_219_float;
}


void func_338(object var_2_object, object var_3_object, object var_4_object)
{
	object var_10_object;
	@GetMainOutdoorScene(var_10_object);
	@AddActor(var_2_object, "d5q01_corpse_girl", var_10_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_girl_corpse.xml");
	@AddActor(var_3_object, "d5q01_corpse1", var_10_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_corpse.xml");
	@AddActor(var_4_object, "d5q01_corpse2", var_10_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_corpse.xml");
}
EMIT "Stack[-1] = 0";


void func_594(float var_197_float)
{
	object var_199_object;
	@CreateFloatVector(var_199_object);
	var_199_object->add(var_197_float);
	@SendWorldWndMessage(16, var_199_object);
}
EMIT "Stack[-1] = 0";


void func_404(object var_5_object)
{
	func_625(var_5_object);
	object var_275_object;
	func_457(var_275_object);
	@RemoveActor(var_275_object);
}


// @pe
void func_665(bool var_89_bool, int var_90_int)
{
	var_89_bool = false;
	if(var_90_int >= 1) {
		if(var_90_int < 1000)
			var_89_bool = true;
	}
}


void func_538(string var_39_string, bool var_40_bool)
{
	object var_42_object;
	@FindActor(var_42_object, var_39_string);
	if(!var_42_object) { //@nz
		@Trace(("Door " + var_39_string) + " not found");
	} else {
		if(var_40_bool != 0)
			var_42_object->Close();
		var_42_object->SetProperty("locked", var_40_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_474(object var_110_object, string var_111_string)
{
	object var_114_object;
	@GetMainOutdoorScene(var_114_object);
	object var_115_object;
	@AddBlankActor(var_115_object, var_114_object, var_111_string, (var_111_string + ".bin"));
	var_115_object = var_110_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_604(object var_99_object)
{
	int var_103_int; int var_104_int; object var_105_object;
	if(var_99_object != 0) {
		var_99_object->size(var_103_int);
		var_104_int = 0;

		while(var_104_int < var_103_int) {
			var_99_object->get(var_105_object, var_104_int);
			if(var_105_object != 0)
				@RemoveActor(var_105_object);
			var_105_object = null;
			var_104_int += 1;
		}

		var_99_object->clear();
	}
}


void func_416(object var_189_object)
{
	object var_191_object;
	@FindActor(var_191_object, "player");
	var_191_object = var_189_object;
}
EMIT "Stack[-1] = 0";


void func_485(object var_51_object, object var_52_object, string var_53_string, string var_54_string, string var_55_string)
{
	bool var_60_bool; cvector var_61_cvector; cvector var_62_cvector;
	var_52_object->GetLocator(var_53_string, var_60_bool, var_61_cvector, var_62_cvector);
	if(!var_60_bool) //@nz
		@Trace(("Locator " + var_53_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_54_string, var_52_object, var_61_cvector, var_62_cvector, var_55_string);
	object var_63_object = var_51_object;
	
}
EMIT "Stack[-1] = 0";


void func_423(bool var_209_bool, object var_210_object, string var_211_string)
{
	var_216_bool = IsFuncExist(var_210_object, "HasProperty", 2);
	if(!var_216_bool) { //@nz
		var_209_bool = false;
		return 2;
	}
	bool var_213_bool;
	var_210_object->HasProperty(var_211_string, var_213_bool);
	var_213_bool = var_209_bool;
}


void func_361(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	func_538("ifactory_grid_door", false);
	func_646(var_1_object, "cleanup");
	func_521("factory@door1", true);
	@SetVariable("d5q01PlayCutscene", 0);
	@ReleaseTimeEvent(0);
}


// @pe
void func_559(bool var_186_bool, object var_187_object, float var_188_float)
{
	if(!var_187_object) { //@nz
		var_186_bool = false;
		return 0;
	}
	if(var_188_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_188_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_197_float;
		var_188_float = var_197_float;
		func_594(var_197_float);
		bool var_201_bool; object var_202_object; float var_204_float;
		var_187_object = var_202_object;
		var_188_float = var_204_float;
		func_435(var_201_bool, var_202_object, "reputation", var_204_float, (float)0, (float)1);
		var_186_bool = true;
		return 0;

	}
	
	var_186_bool = false;
}


void func_625(object var_264_object)
{
	int var_268_int; int var_269_int; object var_270_object;
	if(var_264_object != 0) {
		var_264_object->size(var_268_int);
		var_269_int = 0;

		while(var_269_int < var_268_int) {
			var_264_object->get(var_270_object, var_269_int);
			if(var_270_object != 0)
				var_270_object->Remove();
			var_270_object = null;
			var_269_int += 1;
		}

		var_264_object->clear();
	}
}


void func_435(bool var_201_bool, object var_202_object, string var_203_string, float var_204_float, float var_205_float, float var_206_float)
{
	object var_210_object;
	var_202_object = var_210_object;
	string var_211_string;
	var_203_string = var_211_string;
	bool var_209_bool;
	func_423(var_209_bool, var_210_object, var_211_string);
	if(!var_209_bool) //@nz
		var_201_bool = false;
	float var_208_float;
	var_202_object->GetProperty(var_203_string, var_208_float);
	float var_219_float; float var_221_float; float var_222_float;
	var_205_float = var_221_float;
	var_206_float = var_222_float;
	func_463(var_219_float, (var_208_float + var_204_float), var_221_float, var_222_float);
	var_202_object->SetProperty(var_203_string, var_219_float);
	var_201_bool = true;
}


void func_310(void)
{
	@SetVariable("d5q01", -1);
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int);
}


void func_503(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_9_object->GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		var_9_object->AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string);
	object var_20_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


void func_318(void)
{
	@SetVariable("d5q01", 1000);
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int);
}


