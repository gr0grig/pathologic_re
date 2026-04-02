maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool)
	{
		var_4_bool = false;
		object var_5_object;
		func_269(var_5_object);
		var_0_object = var_5_object;
		object var_8_object;
		func_269(var_8_object);
		var_2_object = var_8_object;
		object var_9_object;
		func_269(var_9_object);
		var_1_object = var_9_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, string var_5_string)
	{
		int var_14_int; int var_15_int; object var_16_object; object var_17_object; int var_18_int; int var_19_int; object var_20_object; object var_21_object;
		@Trace(var_5_string);
		if(var_5_string == "place_butchers") {
			func_17(var_20_object, var_21_object);
		} else if(var_5_string == "patrol_talk") {
				func_95(var_20_object, var_21_object);
		}

	
		if(var_5_string == "gpatrol_attack") {
			if(!var_4_bool) { //@nz
				var_4_bool = true;
				object var_113_object;
				func_275(var_113_object, "quest_d3_01_teleport");
			}
			var_2_object->size(var_14_int); //@t
			var_15_int = 0;

			while(var_15_int < var_14_int) {
				var_2_object->get(var_16_object, var_15_int); //@t
				var_16_object->GetActor(var_17_object);
				if(var_17_object != 0)
					@Trigger(var_17_object, "kill_player");
				var_17_object = null;
				var_16_object = null;
				var_15_int += 1;
			}

			@Trigger(var_3_object, "put_item");
			func_245(var_18_int, var_19_int, var_20_object, var_21_object);
		} else if(var_5_string == "gpatrol_talk") {
			@Trigger(var_3_object, "put_item");
			var_2_object->size(var_18_int); //@t
			var_19_int = 0;

			while(var_19_int < var_18_int) {
				var_2_object->get(var_20_object, var_19_int); //@t
				var_20_object->GetActor(var_21_object);
				if(var_21_object != 0)
					@Trigger(var_21_object, "talk_player");
				var_21_object = null;
				var_20_object = null;
				var_19_int += 1;
			}

			func_245(var_18_int, var_19_int, var_20_object, var_21_object);
		} else if(var_5_string == "fail") {
			func_229();
		} else if(var_5_string == "completed") {
			func_237();
		}
	}

}


void func_323(object var_136_object, string var_137_string)
{
	int var_141_int; object var_143_object;
	var_136_object->size(var_141_int);
	int var_142_int = 0;
	
	while(var_142_int < var_141_int) {
		var_136_object->get(var_143_object, var_142_int);
		if(var_143_object != 0)
			@Trigger(var_143_object, var_137_string);
		var_143_object = null;
		var_142_int += 1;
	}
	
}


void func_229(void)
{
	@SetVariable("d3q01", -1);
	func_264();
}


void func_264(void)
{
	func_245(var_18_int, var_19_int, var_20_object, var_21_object);
}


void func_237(void)
{
	@SetVariable("d3q01", 1000);
	func_264();
}


void func_269(object var_5_object)
{
	object var_7_object;
	@CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
}
EMIT "Stack[-1] = 0";


void func_304(object var_126_object)
{
	int var_130_int; object var_132_object;
	var_126_object->size(var_130_int);
	int var_131_int = 0;
	
	while(var_131_int < var_130_int) {
		var_126_object->get(var_132_object, var_131_int);
		if(var_132_object != 0)
			var_132_object->Remove();
		var_132_object = null;
		var_131_int += 1;
	}
	
	var_126_object->clear();
}


void func_17(object var_0_object, object var_1_object)
{
	object var_27_object;
	@GetMainOutdoorScene(var_27_object);
	int var_28_int;
	@irand(var_28_int, 3);
	@Trace("Patrol location: " + var_28_int);
	object var_33_object; object var_34_object;
	var_27_object = var_34_object;
	func_286(var_33_object, var_34_object, ("pt_d3q01_patrol" + (var_28_int + 1)), "pers_patrool", "d3q01_cpatrol.xml");
	var_0_object->add(var_33_object); //@t
	object var_54_object; object var_55_object;
	var_27_object = var_55_object;
	func_286(var_54_object, var_55_object, ("pt_d3q01_patrol" + (((var_28_int + 1) % 3) + 1)), "pers_patrool", "d3q01_patrol.xml");
	var_0_object->add(var_54_object); //@t
	object var_66_object; object var_67_object;
	var_27_object = var_67_object;
	func_286(var_66_object, var_67_object, ("pt_d3q01_patrol" + (((var_28_int + 2) % 3) + 1)), "pers_patrool", "d3q01_patrol.xml");
	var_0_object->add(var_66_object); //@t
	object var_29_object;
	@AddScriptedActor(var_29_object, "d3q01_corpse1", "actor_disp.bin", var_27_object, [0.0, 0.0, 0.0]);
	var_1_object->add(var_29_object); //@t
	@AddScriptedActor(var_29_object, "d3q01_corpse2", "actor_disp.bin", var_27_object, [0.0, 0.0, 0.0]);
	var_1_object->add(var_29_object); //@t
	@AddScriptedActor(var_29_object, "d3q01_corpse3", "actor_disp.bin", var_27_object, [0.0, 0.0, 0.0]);
	var_1_object->add(var_29_object); //@t
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-3] = 0";


void func_275(object var_113_object, string var_114_string)
{
	object var_117_object;
	@GetMainOutdoorScene(var_117_object);
	object var_118_object;
	@AddBlankActor(var_118_object, var_117_object, var_114_string, (var_114_string + ".bin"));
	var_118_object = var_113_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_245(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	func_304(var_0_object);
	func_323(var_1_object, "cleanup");
	var_1_object->clear(); //@t
	func_304(var_2_object);
	@Trigger(var_3_object, "cleanup");
}


void func_286(object var_33_object, object var_34_object, string var_35_string, string var_36_string, string var_37_string)
{
	bool var_45_bool; cvector var_46_cvector; cvector var_47_cvector;
	var_34_object->GetLocator(var_35_string, var_45_bool, var_46_cvector, var_47_cvector);
	if(!var_45_bool) //@nz
		@Trace(("Locator " + var_35_string) + " doesn't exist");
	else
		var_34_object->AddStationaryActor(Obj(), var_46_cvector, var_47_cvector, var_36_string, var_37_string);
	object var_48_object = var_33_object;
	
}
EMIT "Stack[-1] = 0";


void func_95(object var_2_object, object var_3_object)
{
	object var_90_object;
	@GetMainOutdoorScene(var_90_object);
	object var_91_object; object var_92_object;
	var_90_object = var_92_object;
	func_286(var_91_object, var_92_object, "pt_d3q01_gpatrol1", "pers_patrool", "d3q01_gpatrol.xml");
	var_2_object->add(var_91_object); //@t
	object var_96_object; object var_97_object;
	var_90_object = var_97_object;
	func_286(var_96_object, var_97_object, "pt_d3q01_gpatrol2", "pers_patrool", "d3q01_gpatrol.xml");
	var_2_object->add(var_96_object); //@t
	object var_101_object; object var_102_object;
	func_286(var_101_object, var_102_object, "pt_d3q01_gpatrol3", "pers_patrool", "d3q01_gpatrol.xml");
	var_2_object->add(var_101_object); //@t
	@AddActor(var_3_object, "d3q01_graveyard_fire", var_102_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
}
EMIT "Stack[-1] = 0";


