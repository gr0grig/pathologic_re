maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool)
	{
		var_5_bool = false;
		object var_7_object;
		@GetSceneByName(var_7_object, "warehouse_rubin");
		@Trigger(var_7_object, "rubin");
		func_256("house_petr@door1", false);
		object var_20_object;
		func_214(var_20_object);
		var_0_object = var_20_object;
		var_4_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		object var_11_object; int var_12_int; int var_13_int; int var_14_int;
		@Trace(var_6_string);
		if(var_6_string == "init_house") {
			bool var_17_bool;
			func_273(var_17_bool, "NPC_Petr");
			var_5_bool = true;
			@GetSceneByName(var_11_object, "house_petr");
			var_12_int = 1;

			while(var_12_int <= 4) {
				object var_25_object; object var_26_object;
				var_11_object = var_26_object;
				func_220(var_25_object, var_26_object, ("pt_d10q01_soldier" + var_12_int), "pers_soldat", "d10q01_soldier.xml");
				var_0_object->add(var_25_object); //@t
			}

			object var_45_object; object var_46_object;
			var_11_object = var_46_object;
			func_220(var_45_object, var_46_object, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml");
			var_0_object->add(var_45_object); //@t
			object var_50_object; object var_51_object;
			func_238(var_50_object, var_51_object, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
			var_1_object = var_50_object;
			@GetMainOutdoorScene(var_51_object);
			object var_68_object; object var_69_object;
			var_11_object = var_69_object;
			func_220(var_68_object, var_69_object, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
			var_2_object = var_68_object;
			object var_73_object; object var_74_object;
			var_11_object = var_74_object;
			func_238(var_73_object, var_74_object, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
			var_3_object = var_73_object;
		} else if(var_6_string == "soldier_fight") {
				func_285(var_0_object, "attack");
				var_4_bool = true;
		}
	Label_145:
		for(;;) {

		}
	
		if(var_6_string == "house_unload") {
			@GetVariable("d10q01SoldierTalk", var_13_int);
			if(var_13_int != 0)
				func_256("house_petr@door1", true);
			goto Label_145;
		}
		if(var_6_string == "cleanup") {
			@GetVariable("d10q01", var_14_int);
			if(var_14_int != 1000)
				func_146();
			else
				func_162(Obj(), (var_12_int + 1), var_13_int, var_14_int);
			if(var_6_string == "fail") {
				func_146();
			} else if(var_6_string == "completed") {
				func_154();
			}
		}
		goto Label_145;
	
	}

}


void func_256(string var_10_string, bool var_11_bool)
{
	object var_13_object;
	@FindActor(var_13_object, var_10_string);
	if(!var_13_object) //@nz
		@Trace(("Door " + var_10_string) + " not found");
	else
		var_13_object->SetProperty("locked", var_11_bool);
	
}
EMIT "Stack[-1] = 0";


void func_162(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	object var_114_object;
	func_285(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	func_256("house_petr@door1", false);
	if(var_5_bool != 0) {
		@GetSceneByName(var_114_object, "house_petr");
		object var_127_object; object var_128_object;
		var_114_object = var_128_object;
		func_220(var_127_object, var_128_object, "pt_petr", "NPC_Petr", "NPC_Danko_Petr.xml");
		var_114_object = null;
	}
	object var_132_object;
	func_208(var_132_object);
	@RemoveActor(var_132_object);
}


void func_238(object var_50_object, object var_51_object, string var_52_string, string var_53_string, string var_54_string)
{
	bool var_59_bool; cvector var_60_cvector; cvector var_61_cvector;
	var_51_object->GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector);
	if(!var_59_bool) //@nz
		@Trace(("Locator " + var_52_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string);
	object var_62_object = var_50_object;
	
}
EMIT "Stack[-1] = 0";


void func_208(object var_132_object)
{
	object var_134_object;
	@self(var_134_object);
	var_134_object = var_132_object;
}
EMIT "Stack[-1] = 0";


void func_273(bool var_17_bool, string var_18_string)
{
	object var_20_object;
	@FindActor(var_20_object, var_18_string);
	if(!var_20_object) //@nz
		var_17_bool = false;
	@RemoveActor(var_20_object);
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";


void func_146(void)
{
	@SetVariable("d10q01", -1);
	func_162(var_11_object, var_12_int, var_13_int, var_14_int);
}


void func_214(object var_20_object)
{
	object var_22_object;
	@CreateObjectVector(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_154(void)
{
	@SetVariable("d10q01", 1000);
	func_162(var_11_object, var_12_int, var_13_int, var_14_int);
}


void func_220(object var_25_object, object var_26_object, string var_27_string, string var_28_string, string var_29_string)
{
	bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	var_26_object->GetLocator(var_27_string, var_35_bool, var_36_cvector, var_37_cvector);
	if(!var_35_bool) //@nz
		@Trace(("Locator " + var_27_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_28_string, var_26_object, var_36_cvector, var_37_cvector, var_29_string);
	object var_38_object = var_25_object;
	
}
EMIT "Stack[-1] = 0";


void func_285(object var_80_object, string var_81_string)
{
	int var_85_int; int var_86_int; object var_87_object;
	if(var_80_object != 0) {
		var_80_object->size(var_85_int);
		var_86_int = 0;

		for(;;) {
			if(!(var_86_int < var_85_int)) goto Label_303;
			var_80_object->get(var_87_object, var_86_int);
			if(var_87_object != 0)
				@Trigger(var_87_object, var_81_string);
			var_87_object = null;
			var_86_int += 1;
		}
	}
Label_303:
}


