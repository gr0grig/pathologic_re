maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		object var_3_object;
		func_431(var_3_object);
		var_1_object = var_3_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_19_object; int var_20_int; int var_21_int; object var_22_object; object var_23_object; object var_24_object; object var_25_object; object var_26_object; object var_27_object; object var_28_object; float var_29_float; int var_30_int; int var_31_int; object var_32_object; bool var_33_bool;
		@Trace(var_3_string);
		if(var_3_string == "factory") {
			func_455("factory@door1", false);
			func_471("ifactory_grid_door", true);
			@GetSceneByName(var_19_object, "factory");
			object var_57_object; object var_58_object;
			var_19_object = var_58_object;
			func_437(var_57_object, var_58_object, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
			var_0_object = var_57_object;
			object var_75_object; object var_76_object;
			var_19_object = var_76_object;
			func_437(var_75_object, var_76_object, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml");
			var_1_object->add(var_75_object); //@t
			object var_80_object; object var_81_object;
			var_19_object = var_81_object;
			func_437(var_80_object, var_81_object, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml");
			var_1_object->add(var_80_object); //@t
			object var_85_object; object var_86_object;
			var_19_object = var_86_object;
			func_437(var_85_object, var_86_object, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml");
			var_1_object->add(var_85_object); //@t
			var_19_object = null;
		} else if(var_3_string == "d5q01_trigger_factory") {
				@GetVariable("d5q01PlayCutscene", var_20_int);
				if(var_20_int != 0) {
					@GetVariable("d5q01", var_21_int);
					bool var_95_bool; int var_96_int;
					var_21_int = var_96_int;
					func_525(var_95_bool, var_96_int);
					if(var_95_bool != 0) {
						func_455("ifactory@door1", true);
						@GetSceneByName(var_22_object, "factory");
						@SetVariable("d5q01PlayCutscene", 0);
						func_489(var_1_object);
						@AddScriptedActor(var_23_object, "cs_factory_grabitel1", "cs_play_all.bin", var_22_object, [0.0, 0.0, 0.0]);
						@AddScriptedActor(var_24_object, "cs_factory_grabitel2", "cs_play_all.bin", var_22_object, [0.0, 0.0, 0.0]);
						@AddScriptedActor(var_25_object, "cs_factory_patrol1", "cs_play_all.bin", var_22_object, [0.0, 0.0, 0.0]);
						@AddScriptedActor(var_26_object, "cs_factory_patrol2", "cs_play_all.bin", var_22_object, [0.0, 0.0, 0.0]);
						@AddScriptedActor(var_27_object, "cs_factory_patrol3", "cs_play_all.bin", var_22_object, [0.0, 0.0, 0.0]);
						var_25_object->ForceGeometryLoad();
						var_26_object->ForceGeometryLoad();
						var_27_object->ForceGeometryLoad();
						@FindActor(var_28_object, "player");
						object var_132_object;
						var_28_object = var_132_object;
						func_388(var_132_object);
						@RegisterKeyCallback("space");
						@CameraPlay("cs_factory1.mot");
						@CameraWaitForPlayFinish();
						@UnregisterKeyCallback("space");
						object var_149_object;
						var_28_object = var_149_object;
						func_411(var_149_object);
						@RemoveActor(var_23_object);
						@RemoveActor(var_24_object);
						@RemoveActor(var_25_object);
						@RemoveActor(var_26_object);
						@RemoveActor(var_27_object);
						object var_160_object; object var_161_object;
						var_22_object = var_161_object;
						func_437(var_160_object, var_161_object, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_b.xml");
						var_1_object->add(var_160_object); //@t
						object var_165_object; object var_166_object;
						var_22_object = var_166_object;
						func_437(var_165_object, var_166_object, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_b.xml");
						var_1_object->add(var_165_object); //@t
						object var_170_object; object var_171_object;
						var_22_object = var_171_object;
						func_437(var_170_object, var_171_object, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_b.xml");
						var_1_object->add(var_170_object); //@t
						object var_175_object; object var_176_object;
						var_22_object = var_176_object;
						func_437(var_175_object, var_176_object, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_b.xml");
						var_1_object->add(var_175_object); //@t
						object var_180_object; object var_181_object;
						var_22_object = var_181_object;
						func_437(var_180_object, var_181_object, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml");
						var_1_object->add(var_180_object); //@t
						@CameraSwitchToNormal();
						var_28_object = null;
						var_27_object = null;
						var_26_object = null;
						var_25_object = null;
						var_24_object = null;
						var_23_object = null;
						var_22_object = null;
					}
				}
		}
	Label_296:
		for(;;) {

		}
	
		if(var_3_string == "burah_free") {
			@GetGameTime(var_29_float);
			if(var_29_float >= 117)
				func_325(var_33_bool);
			else
				@SetTimeEvent(0, 117);
			if(var_3_string == "factory_fight") {
				func_455("ifactory@door1", true);
				func_508(var_1_object, "attack");
				@PlaySound("door_close");
				goto Label_296;
			}
			if(var_3_string == "dead") {
				var_1_object->size(var_30_int); //@t
				var_31_int = 0;

				for(;;) {
					if(var_31_int < var_30_int) {
						var_1_object->get(var_32_object, var_31_int); //@t
						var_32_object->IsDead(var_33_bool);
						if(!var_33_bool) { //@nz
						} else {
							var_32_object = null;
							var_31_int += 1;
						}
					}
					if(var_31_int == var_30_int)
						func_455("ifactory@door1", false);
					goto Label_296;

				}
			}
			if(var_3_string == "fail") {
				func_297();
			} else if(var_3_string == "completed") {
				func_305();
			}
		}
		@Trigger(var_0_object, "cleanup");
		func_455("factory@door1", true);
		goto Label_296;
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		@ReleaseTimeEvent(0);
		func_325(var_4_float);
	}

	// @pe
	void OnKeyDown(object var_0_object, object var_1_object, object var_2_object, int var_3_int)
	{
		@CameraSwitchToNormal();
	}

}


void func_388(object var_132_object)
{
	int var_136_int;
	if(!var_132_object) { //@nz
	}
	bool var_135_bool;
	var_132_object->HasProperty("noaccess", var_135_bool);
	if(var_135_bool != 0) {
		var_132_object->GetProperty("noaccess", var_136_int);
		var_132_object->SetProperty("noaccess", (var_136_int + 1));
	} else {
		var_132_object->SetProperty("noaccess", 1);
	}
	
}


void func_325(object var_2_object)
{
	object var_8_object;
	@GetMainOutdoorScene(var_8_object);
	int var_9_int;
	@irand(var_9_int, 2);
	@Trace("Girl location: " + (var_9_int + 1));
	@AddActor(var_2_object, ("d5q01_girl_corpse" + (var_9_int + 1)), var_8_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_girl_corpse.xml");
	@Trigger(var_2_object, "cleanup");
}
EMIT "Stack[-2] = 0";


void func_455(string var_36_string, bool var_37_bool)
{
	object var_39_object;
	@FindActor(var_39_object, var_36_string);
	if(!var_39_object) //@nz
		@Trace(("Door " + var_36_string) + " not found");
	var_39_object->SetProperty("locked", var_37_bool);
}
EMIT "Stack[-1] = 0";


void func_489(object var_106_object)
{
	int var_110_int; object var_112_object;
	var_106_object->size(var_110_int);
	int var_111_int = 0;
	
	while(var_111_int < var_110_int) {
		var_106_object->get(var_112_object, var_111_int);
		if(var_112_object != 0)
			@RemoveActor(var_112_object);
		var_112_object = null;
		var_111_int += 1;
	}
	
	var_106_object->clear();
}


void func_297(void)
{
	@SetVariable("d5q01", -1);
	func_351(var_31_int, var_32_object, var_33_bool);
}


// @pe
void func_525(bool var_95_bool, int var_96_int)
{
	var_95_bool = false;
	if(var_96_int >= 1) {
		if(var_96_int < 1000)
			var_95_bool = true;
	}
}


void func_431(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_305(void)
{
	@SetVariable("d5q01", 1000);
	func_351(var_31_int, var_32_object, var_33_bool);
}


void func_437(object var_57_object, object var_58_object, string var_59_string, string var_60_string, string var_61_string)
{
	bool var_66_bool; cvector var_67_cvector; cvector var_68_cvector;
	var_58_object->GetLocator(var_59_string, var_66_bool, var_67_cvector, var_68_cvector);
	if(!var_66_bool) //@nz
		@Trace(("Locator " + var_59_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_60_string, var_58_object, var_67_cvector, var_68_cvector, var_61_string);
	object var_69_object = var_57_object;
	
}
EMIT "Stack[-1] = 0";


void func_471(string var_46_string, bool var_47_bool)
{
	object var_49_object;
	@FindActor(var_49_object, var_46_string);
	if(!var_49_object) //@nz
		@Trace(("Door " + var_46_string) + " not found");
	var_49_object->Close();
	var_49_object->SetProperty("locked", var_47_bool);
}
EMIT "Stack[-1] = 0";


void func_411(object var_149_object)
{
	if(!var_149_object) { //@nz
	}
	int var_151_int;
	var_149_object->GetProperty("noaccess", var_151_int);
	if(var_151_int > 1)
		var_149_object->SetProperty("noaccess", (var_151_int - 1));
	else
		var_149_object->RemoveProperty("noaccess");
	
}


void func_508(object var_215_object, string var_216_string)
{
	int var_220_int; object var_222_object;
	var_215_object->size(var_220_int);
	int var_221_int = 0;
	
	while(var_221_int < var_220_int) {
		var_215_object->get(var_222_object, var_221_int);
		if(var_222_object != 0)
			@Trigger(var_222_object, var_216_string);
		var_222_object = null;
		var_221_int += 1;
	}
	
}


void func_351(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	func_471("ifactory_grid_door", false);
	func_508(var_1_object, "cleanup");
	var_1_object->clear(); //@t
	func_455("factory@door1", true);
	@SetVariable("d5q01PlayCutscene", 0);
	@ReleaseTimeEvent(0);
}


