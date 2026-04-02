maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		func_397(var_11_object);
		var_7_object = var_11_object;
		func_432("warehouse_gangster@door1", true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, string var_11_string)
	{
		object var_21_object; bool var_22_bool; object var_23_object; object var_24_object; object var_25_object; bool var_26_bool; cvector var_27_cvector; bool var_28_bool; int var_29_int;
		@Trace(var_11_string);
		if(var_11_string == "rubin_unlock") {
			func_432("warehouse_rubin@door1", false);
			@FindActor(var_21_object, "iwarehouse_rubin_Stol");
			var_21_object->AddItem(var_22_bool, "b4q01_sample", 0);
			var_21_object = null;
		} else if(var_11_string == "place_rubin") {
				@GetSceneByName(var_23_object, "warehouse_gangster");
				object var_48_object; object var_49_object;
				var_23_object = var_49_object;
				func_414(var_48_object, var_49_object, "pt_b4q01_rubin", "NPC_Rubin", "b4q01_Rubin.xml");
				var_1_object = var_48_object;
				object var_66_object; object var_67_object;
				var_23_object = var_67_object;
				func_414(var_66_object, var_67_object, "pt_b4q01_agony1", "pers_unosha", "b4q01_agony1.xml");
				var_2_object = var_66_object;
				object var_71_object; object var_72_object;
				func_414(var_71_object, var_72_object, "pt_b4q01_agony2", "pers_worker", "b4q01_agony2.xml");
				var_3_object = var_71_object;
				@AddScriptedActor(var_4_object, "b4q01_corpse", "actor_disp.bin", var_72_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
				func_432("warehouse_gangster@door1", false);
				var_0_bool = true;
				var_23_object = null;
		}
	Label_268:
		for(;;) {

		}
	
		if(var_11_string == "wg_unload") {
			if(var_0_bool != 0) {
				var_10_bool = true;
				func_285(var_25_object, var_26_bool, var_27_cvector, var_28_bool, var_29_int);
				func_432("warehouse_gangster@door1", true);
				@GetMainOutdoorScene(var_24_object);
				object var_96_object; object var_97_object;
				var_24_object = var_97_object;
				func_414(var_96_object, var_97_object, "pt_b4q01_patrol1", "pers_patrool", "b4q01_patrol.xml");
				var_7_object->add(var_96_object); //@t
				object var_101_object; object var_102_object;
				var_24_object = var_102_object;
				func_414(var_101_object, var_102_object, "pt_b4q01_patrol2", "pers_patrool", "b4q01_patrol.xml");
				var_7_object->add(var_101_object); //@t
				object var_106_object; object var_107_object;
				var_24_object = var_107_object;
				func_414(var_106_object, var_107_object, "pt_b4q01_patrol3", "pers_patrool", "b4q01_patrol.xml");
				var_7_object->add(var_106_object); //@t
				object var_111_object; object var_112_object;
				func_414(var_111_object, var_112_object, "pt_b4q01_patrol4", "pers_patrool", "b4q01_patrol.xml");
				var_7_object->add(var_111_object); //@t
				object var_116_object;
				func_403(var_116_object, "quest_b4_01_teleport");
				@GetSceneByName(var_112_object, "factory");
				object var_125_object; object var_126_object;
				var_24_object = var_126_object;
				func_414(var_125_object, var_126_object, "pt_b4q01_patrol1_1", "pers_patrool", "b4q01_fpatrol1.xml");
				var_8_object = var_125_object;
				object var_130_object; object var_131_object;
				func_414(var_130_object, var_131_object, "pt_b4q01_patrol2_1", "pers_patrool", "b4q01_fpatrol2.xml");
				var_9_object = var_130_object;
				@AddActor(var_25_object, "b4q01_factory_corpse", var_131_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b4q01_factory_corpse.xml");
				object var_139_object; object var_140_object;
				var_24_object = var_140_object;
				func_414(var_139_object, var_140_object, "pt_b4q01_agony1", "pers_unosha", "agony1_man.xml");
				var_5_object = var_139_object;
				object var_144_object; object var_145_object;
				func_414(var_144_object, var_145_object, "pt_b4q01_agony2", "pers_worker", "agony1_man.xml");
				var_6_object = var_144_object;
				@SetTimer(0, 20.0);
				var_145_object->GetLocator("pt_b4q01_fog", var_26_bool, var_27_cvector);
				object var_152_object; cvector var_153_cvector;
				var_24_object = var_152_object;
				func_383(var_152_object, var_153_cvector);
				var_25_object = null;
				var_24_object = null;
			}
		} else if(var_11_string == "factory_unload") {
			@KillTimer(0);
			if(var_10_bool != 0) {
				object var_163_object;
				func_391(var_163_object);
				@RemoveActor(var_163_object);
			}
		} else if(var_11_string == "patrol_attack") {
			func_432("ifactory_grid_door", false);
			@Trigger(var_8_object, "attack");
			@Trigger(var_9_object, "attack");
		} else if(var_11_string == "patrol_dead") {
			var_8_object->IsDead(var_28_bool); //@t
			if(var_28_bool != 0) {
				var_9_object->IsDead(var_28_bool); //@t
				if(var_28_bool != 0) {
					func_432("ifactory@door1", false);
					@PlaySound("door_open");
				}
			}
		}
		if(var_11_string == "cleanup") {
			@GetVariable("b4q01", var_29_int);
			if(var_29_int != 1000)
				func_269();
			else
				func_309(var_153_cvector, var_28_bool, var_29_int);
			if(var_11_string == "fail") {
				func_269();
			} else if(var_11_string == "completed") {
				func_277();
			}
		}
		goto Label_268;
	
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int != 0) {
		}
		object var_14_object;
		@GetSceneByName(var_14_object, "factory");
		cvector var_15_cvector;
		var_14_object->GetRandomPFPoint(var_15_cvector, 0, 0);
		object var_21_object; cvector var_22_cvector;
		var_14_object = var_21_object;
		var_15_cvector = var_22_cvector;
		func_383(var_21_object, var_22_cvector);
	}
	EMIT "Stack[-2] = 0";

}


void func_449(object var_198_object, string var_199_string)
{
	int var_203_int; int var_204_int; object var_205_object;
	if(var_198_object != 0) {
		var_198_object->size(var_203_int);
		var_204_int = 0;

		for(;;) {
			if(!(var_204_int < var_203_int)) goto Label_467;
			var_198_object->get(var_205_object, var_204_int);
			if(var_205_object != 0)
				@Trigger(var_205_object, var_199_string);
			var_205_object = null;
			var_204_int += 1;
		}
	}
Label_467:
}


void func_391(object var_163_object)
{
	object var_165_object;
	@self(var_165_object);
	var_165_object = var_163_object;
}
EMIT "Stack[-1] = 0";


void func_269(void)
{
	@SetVariable("b4q01", -1);
	func_309(var_27_cvector, var_28_bool, var_29_int);
}


void func_397(object var_11_object)
{
	object var_13_object;
	@CreateObjectVector(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_432(string var_14_string, bool var_15_bool)
{
	object var_17_object;
	@FindActor(var_17_object, var_14_string);
	if(!var_17_object) //@nz
		@Trace(("Door " + var_14_string) + " not found");
	else
		var_17_object->SetProperty("locked", var_15_bool);
	
}
EMIT "Stack[-1] = 0";


void func_403(object var_116_object, string var_117_string)
{
	object var_120_object;
	@GetMainOutdoorScene(var_120_object);
	object var_121_object;
	@AddBlankActor(var_121_object, var_120_object, var_117_string, (var_117_string + ".bin"));
	var_121_object = var_116_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_309(object var_5_object, object var_6_object, object var_7_object)
{
	if(var_10_bool != 0) {
	}
	@KillTimer(0);
	func_432("warehouse_rubin@door1", false);
	func_432("ifactory@door1", false);
	object var_188_object;
	@FindActor(var_188_object, "iwarehouse_rubin_Stol");
	int var_189_int;
	var_188_object->RemoveItemByType(var_189_int, "b4q01_sample");
	object var_186_object;
	int var_187_int;
	func_285(var_29_int, var_186_object, var_187_int, var_188_object, var_189_int);
	func_449(var_7_object, "cleanup");
	var_7_object = null;
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_6_object != 0)
		@Trigger(var_6_object, "cleanup");
	func_432("warehouse_gangster@door1", false);
	object var_216_object;
	func_391(var_216_object);
	@RemoveActor(var_216_object);
}
EMIT "Stack[-2] = 0";


void func_277(void)
{
	@SetVariable("b4q01", 1000);
	func_309(var_27_cvector, var_28_bool, var_29_int);
}


void func_285(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	if(var_0_bool != 0) {
		if(var_1_object != 0)
			@Trigger(var_1_object, "cleanup");
		if(var_2_object != 0)
			@Trigger(var_2_object, "cleanup");
		if(var_3_object != 0)
			@Trigger(var_3_object, "cleanup");
		if(var_4_object != 0)
			@Trigger(var_4_object, "cleanup");
		var_0_bool = false;
	}
}


void func_414(object var_48_object, object var_49_object, string var_50_string, string var_51_string, string var_52_string)
{
	bool var_57_bool; cvector var_58_cvector; cvector var_59_cvector;
	var_49_object->GetLocator(var_50_string, var_57_bool, var_58_cvector, var_59_cvector);
	if(!var_57_bool) //@nz
		@Trace(("Locator " + var_50_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_51_string, var_49_object, var_58_cvector, var_59_cvector, var_52_string);
	object var_60_object = var_48_object;
	
}
EMIT "Stack[-1] = 0";


void func_383(object var_21_object, cvector var_22_cvector)
{
	object var_24_object;
	@AddActorByType(var_24_object, "fog", var_21_object, var_22_cvector, [0.0, 0.0, 1.0], "b4q01_fog.xml");
}
EMIT "Stack[-1] = 0";


