// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
	{
		object var_13_object;
		func_392(var_13_object);
		var_7_object = var_13_object;
		object var_12_object;
		@GetSceneByName(var_12_object, "cot_eva");
		@Trigger(var_12_object, "nodanko");
		@GetSceneByName(var_12_object, "warehouse_rubin");
		@Trigger(var_12_object, "norubin");
		func_434("warehouse_rubin@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string)
	{
		object var_29_object; object var_30_object; object var_31_object; int var_32_int; bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector; object var_36_object; object var_37_object; object var_38_object; object var_39_object; object var_40_object; object var_41_object; cvector var_42_cvector; cvector var_43_cvector; bool var_44_bool; int var_45_int;
		@Trace(var_11_string);
		if(var_11_string == "warehouse_rubin_load") {
			if(!var_0_object) { //@nz
				@GetSceneByName(var_29_object, "warehouse_rubin");
				object var_50_object; object var_51_object;
				var_29_object = var_51_object;
				func_398(var_50_object, var_51_object, "pt_rubin", "NPC_Bakalavr", "k10q01_danko.xml");
				var_0_object = var_50_object;
				var_29_object = null;
			}
		} else if(var_11_string == "place_soldiers") {
				@GetMainOutdoorScene(var_30_object);
				object var_70_object; object var_71_object;
				var_30_object = var_71_object;
				func_416(var_70_object, var_71_object, "pt_k10q01_soldier1", "pers_soldat", "k10q01_soldier.xml");
				var_1_object = var_70_object;
				object var_88_object; object var_89_object;
				var_30_object = var_89_object;
				func_416(var_88_object, var_89_object, "pt_k10q01_soldier2", "pers_soldat", "k10q01_soldier.xml");
				var_2_object = var_88_object;
				func_434("uprava_prison@door1", true);
				func_434("uprava_admin@door1", false);
				var_30_object = null;
		}
	Label_276:
		for(;;) {

		}
	
		if(var_11_string == "remove_soldiers") {
			if(var_1_object != 0)
				var_1_object->Remove(); //@t
			if(var_2_object != 0)
				var_2_object->Remove(); //@t
			func_434("uprava_prison@door1", false);
			goto Label_276;
		}
		if(var_11_string == "init_prison") {
			@GetSceneByName(var_31_object, "uprava_prison");
			object var_114_object; object var_115_object;
			var_31_object = var_115_object;
			func_398(var_114_object, var_115_object, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale.xml");
			var_3_object = var_114_object;
			var_32_int = 1;

			for(;;) {
				var_31_object->GetLocator(("pt_k10q01_fog" + var_32_int), var_33_bool, var_34_cvector, var_35_cvector);
				if(!var_33_bool) { //@nz
				} else {
					@AddActorByType(var_36_object, "fog", var_31_object, var_34_cvector, var_35_cvector, "fog_stat_indoor.xml");
					var_7_object->add(var_36_object); //@t
					var_36_object = null;
					var_32_int += 1;
				}
				var_31_object = null;
				goto Label_276;

			}
		}
		if(var_11_string == "free_prisoner") {
			if(var_3_object != 0)
				@Trigger(var_3_object, "cleanup");
			@GetMainOutdoorScene(var_37_object);
			object var_129_object; object var_130_object;
			var_37_object = var_130_object;
			func_416(var_129_object, var_130_object, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale_free.xml");
			var_4_object = var_129_object;
			@GetSceneByName(var_37_object, "burah_home");
			@Trigger(var_37_object, "noburah");
			var_37_object = null;
		} else if(var_11_string == "init_factory") {
			@GetSceneByName(var_38_object, "factory");
			object var_139_object; object var_140_object;
			var_38_object = var_140_object;
			func_398(var_139_object, var_140_object, "pt_k10q01_burah", "NPC_Burah", "k10q01_burah.xml");
			var_5_object = var_139_object;
			func_434("factory@door1", false);
			var_38_object = null;
		} else if(var_11_string == "place_prophet") {
			@GetMainOutdoorScene(var_39_object);
			object var_148_object; object var_149_object;
			var_39_object = var_149_object;
			func_416(var_148_object, var_149_object, "pt_k10q01_prophet", "pers_krysa", "k10q01_prophet.xml");
			var_10_object = var_148_object;
			var_39_object = null;
		} else if(var_11_string == "teleport") {
			@FindActor(var_40_object, "player");
			if(var_40_object != 0) {
				@GetSceneByName(var_41_object, "house_vlad");
				var_41_object->GetLocator("pt_k10q01_teleport", var_44_bool, var_42_cvector, var_43_cvector);
				@Teleport(var_40_object, var_41_object, var_42_cvector, var_43_cvector);
				func_434("ihouse_vlad@door2", true);
				object var_161_object; object var_162_object;
				var_41_object = var_162_object;
				func_398(var_161_object, var_162_object, "pt_k10q01_wastedmale_u1", "pers_wasted_male", "k10q01_wastedmale_u.xml");
				object var_166_object; object var_167_object;
				var_41_object = var_167_object;
				func_398(var_166_object, var_167_object, "pt_k10q01_wastedmale_u2", "pers_wasted_male", "k10q01_wastedmale_u.xml");
				object var_171_object; object var_172_object;
				var_41_object = var_172_object;
				func_398(var_171_object, var_172_object, "pt_k10q01_rubin", "NPC_Rubin", "k10q01_rubin.xml");
				var_6_object = var_171_object;
				var_41_object = null;
			}
			var_40_object = null;
		} else if(var_11_string == "fail") {
			func_482();
			func_277();
		} else if(var_11_string == "completed") {
			func_482();
			func_285();
		} else if(var_11_string == "cleanup") {
			@GetVariable("k10q01", var_45_int);
			if(var_45_int != 1000) {
			func_277();
			goto Label_276;
		}
		}
		func_293(var_35_cvector, var_36_object, var_37_object, var_38_object, var_39_object, var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int);
	}

}


void func_416(object var_70_object, object var_71_object, string var_72_string, string var_73_string, string var_74_string)
{
	bool var_79_bool; cvector var_80_cvector; cvector var_81_cvector;
	var_71_object->GetLocator(var_72_string, var_79_bool, var_80_cvector, var_81_cvector);
	if(!var_79_bool) //@nz
		@Trace(("Locator " + var_72_string) + " doesn't exist");
	else
		var_71_object->AddStationaryActor(Obj(), var_80_cvector, var_81_cvector, var_73_string, var_74_string);
	object var_82_object = var_70_object;
	
}
EMIT "Stack[-1] = 0";


void func_482(void)
{
	bool var_178_bool;
	func_451(var_178_bool, "klara2_npc_positioner", "init");
}


void func_451(bool var_178_bool, string var_179_string, string var_180_string)
{
	object var_182_object;
	@FindActor(var_182_object, var_179_string);
	if(var_182_object == null)
		var_178_bool = false;
	@Trigger(var_182_object, var_180_string);
	var_178_bool = true;
}
EMIT "Stack[-1] = 0";


void func_386(object var_228_object)
{
	object var_230_object;
	@self(var_230_object);
	var_230_object = var_228_object;
}
EMIT "Stack[-1] = 0";


void func_293(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
{
	object var_187_object;
	@GetSceneByName(var_187_object, "cot_eva");
	@Trigger(var_187_object, "danko");
	@GetSceneByName(var_187_object, "burah_home");
	@Trigger(var_187_object, "burah");
	@GetSceneByName(var_187_object, "warehouse_rubin");
	@Trigger(var_187_object, "rubin");
	func_434("uprava_prison@door1", false);
	func_434("ihouse_vlad@door2", false);
	func_434("factory@door1", false);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		var_4_object->Remove(); //@t
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_10_object != 0)
		var_10_object->Remove(); //@t
	if(var_6_object != 0)
		@Trigger(var_6_object, "cleanup");
	func_463(var_7_object, "cleanup");
	if(var_8_object != 0)
		@Trigger(var_8_object, "cleanup");
	if(var_9_object != 0)
		@Trigger(var_9_object, "cleanup");
	object var_228_object;
	func_386(var_228_object);
	@RemoveActor(var_228_object);
}
EMIT "Stack[-1] = 0";


void func_392(object var_13_object)
{
	object var_15_object;
	@CreateObjectVector(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_398(object var_50_object, object var_51_object, string var_52_string, string var_53_string, string var_54_string)
{
	bool var_59_bool; cvector var_60_cvector; cvector var_61_cvector;
	var_51_object->GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector);
	if(!var_59_bool) //@nz
		@Trace(("Locator " + var_52_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string);
	object var_62_object = var_50_object;
	
}
EMIT "Stack[-1] = 0";


void func_463(object var_212_object, string var_213_string)
{
	int var_217_int; int var_218_int; object var_219_object;
	if(var_212_object != 0) {
		var_212_object->size(var_217_int);
		var_218_int = 0;

		for(;;) {
			if(!(var_218_int < var_217_int)) goto Label_481;
			var_212_object->get(var_219_object, var_218_int);
			if(var_219_object != 0)
				@Trigger(var_219_object, var_213_string);
			var_219_object = null;
			var_218_int += 1;
		}
	}
Label_481:
}


void func_434(string var_20_string, bool var_21_bool)
{
	object var_23_object;
	@FindActor(var_23_object, var_20_string);
	if(!var_23_object) //@nz
		@Trace(("Door " + var_20_string) + " not found");
	else
		var_23_object->SetProperty("locked", var_21_bool);
	
}
EMIT "Stack[-1] = 0";


void func_277(void)
{
	@SetVariable("k10q01", -1);
	func_293(var_35_cvector, var_36_object, var_37_object, var_38_object, var_39_object, var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int);
}


void func_285(void)
{
	@SetVariable("k10q01", 1000);
	func_293(var_35_cvector, var_36_object, var_37_object, var_38_object, var_39_object, var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int);
}


