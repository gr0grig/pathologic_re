// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		func_240("mnogogrannik_han@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_8_object; object var_9_object; int var_10_int;
		@Trace(var_4_string);
		if(var_4_string == "init_termitnik2") {
			@GetSceneByName(var_8_object, "burah_home");
			@Trigger(var_8_object, "noburah");
			@GetSceneByName(var_8_object, "cot_eva");
			@Trigger(var_8_object, "nodanko");
			@GetSceneByName(var_8_object, "warehouse_rubin");
			@Trigger(var_8_object, "norubin");
			@GetSceneByName(var_8_object, "termitnik2");
			func_240("termitnik2@door1", false);
			object var_30_object; object var_31_object;
			var_8_object = var_31_object;
			func_222(var_30_object, var_31_object, "pt_k9q01_burah", "NPC_Bakalavr", "k9q01_danko.xml");
			var_1_object = var_30_object;
			object var_48_object; object var_49_object;
			var_8_object = var_49_object;
			func_222(var_48_object, var_49_object, "pt_k9q01_danko", "NPC_Burah", "k9q01_burah.xml");
			var_0_object = var_48_object;
			var_8_object = null;
		} else if(var_4_string == "init_mnogogrannik") {
				func_240("mnogogrannik@door1", false);
				func_240("mnogogrannik_han@door2", false);
				func_240("hidden_room@door1", false);
				@GetSceneByName(var_9_object, "hidden_room");
				object var_62_object; object var_63_object;
				var_9_object = var_63_object;
				func_222(var_62_object, var_63_object, "pt_boy", "pers_littleboy2", "k9q01_littleboy.xml");
				var_2_object = var_62_object;
				object var_67_object; object var_68_object;
				var_9_object = var_68_object;
				func_222(var_67_object, var_68_object, "pt_girl", "pers_littlegirl2", "k9q01_littlegirl.xml");
				var_3_object = var_67_object;
				var_9_object = null;
		}

	
		if(var_4_string == "fail") {
			func_140();
			func_269();
			func_275();
		} else if(var_4_string == "completed") {
			func_148();
			func_269();
			func_275();
		} else if(var_4_string == "cleanup") {
			@GetVariable("k9q01", var_10_int);
			if(var_10_int != 1000)
				func_140();
		}
		func_206();
	}

}


void func_257(bool var_96_bool, string var_97_string, string var_98_string)
{
	object var_100_object;
	@FindActor(var_100_object, var_97_string);
	if(var_100_object == null)
		var_96_bool = false;
	@Trigger(var_100_object, var_98_string);
	var_96_bool = true;
}
EMIT "Stack[-1] = 0";


void func_140(void)
{
	@SetVariable("k9q01", -1);
	func_156(var_7_int, var_8_object, var_9_object, var_10_int);
}


void func_269(void)
{
	bool var_96_bool;
	func_257(var_96_bool, "klara2_npc_positioner", "init");
}


void func_206(void)
{
	func_284();
	object var_119_object;
	func_216(var_119_object);
	@RemoveActor(var_119_object);
}


void func_240(string var_4_string, bool var_5_bool)
{
	object var_7_object;
	@FindActor(var_7_object, var_4_string);
	if(!var_7_object) //@nz
		@Trace(("Door " + var_4_string) + " not found");
	else
		var_7_object->SetProperty("locked", var_5_bool);
	
}
EMIT "Stack[-1] = 0";


void func_275(void)
{
	object var_103_object;
	@GetSceneByName(var_103_object, "burah_home");
	@Trigger(var_103_object, "noburah");
}
EMIT "Stack[-1] = 0";


void func_148(void)
{
	@SetVariable("k9q01", 1000);
	func_156(var_7_int, var_8_object, var_9_object, var_10_int);
}


void func_284(void)
{
	object var_116_object;
	@GetSceneByName(var_116_object, "burah_home");
	@Trigger(var_116_object, "burah");
}
EMIT "Stack[-1] = 0";


void func_216(object var_119_object)
{
	object var_121_object;
	@self(var_121_object);
	var_121_object = var_119_object;
}
EMIT "Stack[-1] = 0";


void func_156(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	object var_77_object;
	@GetSceneByName(var_77_object, "cot_eva");
	@Trigger(var_77_object, "danko");
	@GetSceneByName(var_77_object, "warehouse_rubin");
	@Trigger(var_77_object, "rubin");
	func_240("mnogogrannik@door1", true);
	func_240("mnogogrannik_han@door1", true);
	func_240("hidden_room@door1", true);
}
EMIT "Stack[-1] = 0";


void func_222(object var_30_object, object var_31_object, string var_32_string, string var_33_string, string var_34_string)
{
	bool var_39_bool; cvector var_40_cvector; cvector var_41_cvector;
	var_31_object->GetLocator(var_32_string, var_39_bool, var_40_cvector, var_41_cvector);
	if(!var_39_bool) //@nz
		@Trace(("Locator " + var_32_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_33_string, var_31_object, var_40_cvector, var_41_cvector, var_34_string);
	object var_42_object = var_30_object;
	
}
EMIT "Stack[-1] = 0";


