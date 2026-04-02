maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool)
	{
		var_4_bool = false;
		object var_5_object;
		func_298(var_5_object);
		var_0_object = var_5_object;
		object var_8_object;
		func_298(var_8_object);
		var_2_object = var_8_object;
		object var_9_object;
		func_298(var_9_object);
		var_1_object = var_9_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, string var_5_string)
	{
		int var_15_int; int var_16_int; object var_17_object; object var_18_object; int var_19_int; int var_20_int; object var_21_object; object var_22_object; int var_23_int;
		@Trace(var_5_string);
		if(var_5_string == "place_butchers") {
			func_17(var_22_object, var_23_int);
		} else if(var_5_string == "patrol_talk") {
				func_95(var_22_object, var_23_int);
		}
	Label_245:
		for(;;) {

		}
	
		if(var_5_string == "gpatrol_attack") {
			if(!var_4_bool) { //@nz
				var_4_bool = true;
				object var_115_object;
				func_304(var_115_object, "quest_d3_01_teleport");
			}
			var_2_object->size(var_15_int); //@t
			var_16_int = 0;

			while(var_16_int < var_15_int) {
				var_2_object->get(var_17_object, var_16_int); //@t
				var_17_object->GetActor(var_18_object);
				if(var_18_object != 0)
					@Trigger(var_18_object, "kill_player");
				var_18_object = null;
				var_17_object = null;
				var_16_int += 1;
			}

			@Trigger(var_3_object, "put_item");
			func_262(var_20_int, var_21_object, var_22_object, var_23_int);
		} else if(var_5_string == "gpatrol_talk") {
			@Trigger(var_3_object, "put_item");
			var_2_object->size(var_19_int); //@t
			var_20_int = 0;

			while(var_20_int < var_19_int) {
				var_2_object->get(var_21_object, var_20_int); //@t
				var_21_object->GetActor(var_22_object);
				if(var_22_object != 0)
					@Trigger(var_22_object, "talk_player");
				var_22_object = null;
				var_21_object = null;
				var_20_int += 1;
			}

			func_262(var_20_int, var_21_object, var_22_object, var_23_int);
		}
		if(var_5_string == "cleanup") {
			@GetVariable("d3q01", var_23_int);
			if(var_23_int != 1000)
				func_246();
			else
				func_282();
			if(var_5_string == "fail") {
				func_246();
			} else if(var_5_string == "completed") {
				func_254();
			}
		}
		goto Label_245;
	
	}

}


void func_354(object var_139_object, string var_140_string)
{
	int var_144_int; int var_145_int; object var_146_object;
	if(var_139_object != 0) {
		var_139_object->size(var_144_int);
		var_145_int = 0;

		for(;;) {
			if(!(var_145_int < var_144_int)) goto Label_372;
			var_139_object->get(var_146_object, var_145_int);
			if(var_146_object != 0)
				@Trigger(var_146_object, var_140_string);
			var_146_object = null;
			var_145_int += 1;
		}
	}
Label_372:
}


void func_292(object var_168_object)
{
	object var_170_object;
	@self(var_170_object);
	var_170_object = var_168_object;
}
EMIT "Stack[-1] = 0";


void func_262(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	func_333(var_0_object);
	func_354(var_1_object, "cleanup");
	var_1_object = null;
	func_333(var_2_object);
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
}


void func_298(object var_5_object)
{
	object var_7_object;
	@CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
}
EMIT "Stack[-1] = 0";


void func_333(object var_128_object)
{
	int var_132_int; int var_133_int; object var_134_object;
	if(var_128_object != 0) {
		var_128_object->size(var_132_int);
		var_133_int = 0;

		while(var_133_int < var_132_int) {
			var_128_object->get(var_134_object, var_133_int);
			if(var_134_object != 0)
				var_134_object->Remove();
			var_134_object = null;
			var_133_int += 1;
		}

		var_128_object->clear();
	}
}


void func_304(object var_115_object, string var_116_string)
{
	object var_119_object;
	@GetMainOutdoorScene(var_119_object);
	object var_120_object;
	@AddBlankActor(var_120_object, var_119_object, var_116_string, (var_116_string + ".bin"));
	var_120_object = var_115_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_17(object var_0_object, object var_1_object)
{
	object var_29_object;
	@GetMainOutdoorScene(var_29_object);
	int var_30_int;
	@irand(var_30_int, 3);
	@Trace("Patrol location: " + var_30_int);
	object var_35_object; object var_36_object;
	var_29_object = var_36_object;
	func_315(var_35_object, var_36_object, ("pt_d3q01_patrol" + (var_30_int + 1)), "pers_patrool", "d3q01_cpatrol.xml");
	var_0_object->add(var_35_object); //@t
	object var_56_object; object var_57_object;
	var_29_object = var_57_object;
	func_315(var_56_object, var_57_object, ("pt_d3q01_patrol" + (((var_30_int + 1) % 3) + 1)), "pers_patrool", "d3q01_patrol.xml");
	var_0_object->add(var_56_object); //@t
	object var_68_object; object var_69_object;
	var_29_object = var_69_object;
	func_315(var_68_object, var_69_object, ("pt_d3q01_patrol" + (((var_30_int + 2) % 3) + 1)), "pers_patrool", "d3q01_patrol.xml");
	var_0_object->add(var_68_object); //@t
	object var_31_object;
	@AddScriptedActor(var_31_object, "d3q01_corpse1", "actor_disp.bin", var_29_object, [0.0, 0.0, 0.0]);
	var_1_object->add(var_31_object); //@t
	@AddScriptedActor(var_31_object, "d3q01_corpse2", "actor_disp.bin", var_29_object, [0.0, 0.0, 0.0]);
	var_1_object->add(var_31_object); //@t
	@AddScriptedActor(var_31_object, "d3q01_corpse3", "actor_disp.bin", var_29_object, [0.0, 0.0, 0.0]);
	var_1_object->add(var_31_object); //@t
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-3] = 0";


void func_246(void)
{
	@SetVariable("d3q01", -1);
	func_282();
}


void func_282(void)
{
	func_262(var_20_int, var_21_object, var_22_object, var_23_int);
	object var_168_object;
	func_292(var_168_object);
	@RemoveActor(var_168_object);
}


void func_315(object var_35_object, object var_36_object, string var_37_string, string var_38_string, string var_39_string)
{
	bool var_47_bool; cvector var_48_cvector; cvector var_49_cvector;
	var_36_object->GetLocator(var_37_string, var_47_bool, var_48_cvector, var_49_cvector);
	if(!var_47_bool) //@nz
		@Trace(("Locator " + var_37_string) + " doesn't exist");
	else
		var_36_object->AddStationaryActor(Obj(), var_48_cvector, var_49_cvector, var_38_string, var_39_string);
	object var_50_object = var_35_object;
	
}
EMIT "Stack[-1] = 0";


void func_254(void)
{
	@SetVariable("d3q01", 1000);
	func_282();
}


void func_95(object var_2_object, object var_3_object)
{
	object var_92_object;
	@GetMainOutdoorScene(var_92_object);
	object var_93_object; object var_94_object;
	var_92_object = var_94_object;
	func_315(var_93_object, var_94_object, "pt_d3q01_gpatrol1", "pers_patrool", "d3q01_gpatrol.xml");
	var_2_object->add(var_93_object); //@t
	object var_98_object; object var_99_object;
	var_92_object = var_99_object;
	func_315(var_98_object, var_99_object, "pt_d3q01_gpatrol2", "pers_patrool", "d3q01_gpatrol.xml");
	var_2_object->add(var_98_object); //@t
	object var_103_object; object var_104_object;
	func_315(var_103_object, var_104_object, "pt_d3q01_gpatrol3", "pers_patrool", "d3q01_gpatrol.xml");
	var_2_object->add(var_103_object); //@t
	@AddActor(var_3_object, "d3q01_graveyard_fire", var_104_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
}
EMIT "Stack[-1] = 0";


