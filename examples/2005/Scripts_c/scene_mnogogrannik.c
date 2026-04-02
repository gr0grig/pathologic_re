maintask task_0
{
	void init(object var_0_object)
	{
		object var_1_object;
		func_164(var_1_object);
		var_0_object = var_1_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object)
	{
		int var_17_int; bool var_18_bool; object var_19_object; int var_20_int; int var_21_int; int var_22_int; int var_23_int; int var_24_int; int var_25_int; int var_26_int; int var_27_int; int var_28_int; int var_29_int; int var_30_int; int var_31_int; int var_32_int;
		var_17_int = 0;
	
		for(;;) {
			@GetLocator(("pt_spawn" + (var_17_int + 1)), var_18_bool);
			if(!var_18_bool) { //@nz
				break;
			Label_29:
				@CreateIntVector(var_19_object);
				var_20_int = 1;

				while(var_20_int <= var_17_int) {
					var_19_object->add(var_20_int);
					var_20_int += 1;
				}

				var_21_int = 0;

				while(var_21_int < 6) {
					@irand(var_22_int, var_17_int);
					var_19_object->get(var_23_int, var_22_int);
					var_19_object->remove(var_22_int);
					var_17_int += -1;
					object var_46_object; object var_47_object;
					object var_51_object;
					func_158(var_51_object);
					var_51_object = var_47_object;
					func_170(var_46_object, var_47_object, ("pt_spawn" + var_23_int), "pers_littleboy", "littleboy_mnogogrannik.xml");
					var_0_object->add(var_46_object); //@t
					var_21_int += 1;
				}

				var_24_int = 0;

				while(var_24_int < 6) {
					@irand(var_25_int, var_17_int);
					var_19_object->get(var_26_int, var_25_int);
					var_19_object->remove(var_25_int);
					var_17_int += -1;
					object var_72_object; object var_73_object;
					object var_77_object;
					func_158(var_77_object);
					var_77_object = var_73_object;
					func_170(var_72_object, var_73_object, ("pt_spawn" + var_26_int), "pers_littlegirl", "littlegirl_mnogogrannik.xml");
					var_0_object->add(var_72_object); //@t
					var_24_int += 1;
				}

				var_27_int = 0;

				while(var_27_int < 5) {
					@irand(var_28_int, var_17_int);
					var_19_object->get(var_29_int, var_28_int);
					var_19_object->remove(var_28_int);
					var_17_int += -1;
					object var_83_object; object var_84_object;
					object var_88_object;
					func_158(var_88_object);
					var_88_object = var_84_object;
					func_170(var_83_object, var_84_object, ("pt_spawn" + var_29_int), "pers_doberman", "boy_mnogogrannik.xml");
					var_0_object->add(var_83_object); //@t
					var_27_int += 1;
				}

				var_30_int = 0;

				while(var_30_int < 5) {
					@irand(var_31_int, var_17_int);
					var_19_object->get(var_32_int, var_31_int);
					var_19_object->remove(var_31_int);
					var_17_int += -1;
					object var_94_object; object var_95_object;
					object var_99_object;
					func_158(var_99_object);
					var_99_object = var_95_object;
					func_170(var_94_object, var_95_object, ("pt_spawn" + var_32_int), "pers_girl", "girl_mnogogrannik.xml");
					var_0_object->add(var_94_object); //@t
					var_30_int += 1;
				}

			}
			var_17_int += 1;
		}
		if(!(var_17_int < 22)) goto Label_29;
		@Trace("Not enough spawn points");
	}
	EMIT "Stack[-14] = 0";

	void OnUnload(object var_0_object)
	{
		func_188(var_0_object);
	}

}


void func_170(object var_46_object, object var_47_object, string var_48_string, string var_49_string, string var_50_string)
{
	bool var_59_bool; cvector var_60_cvector; cvector var_61_cvector;
	var_47_object->GetLocator(var_48_string, var_59_bool, var_60_cvector, var_61_cvector);
	if(!var_59_bool) //@nz
		@Trace(("Locator " + var_48_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_49_string, var_47_object, var_60_cvector, var_61_cvector, var_50_string);
	object var_62_object = var_46_object;
	
}
EMIT "Stack[-1] = 0";


void func_188(object var_1_object)
{
	int var_5_int; int var_6_int; object var_7_object;
	if(var_1_object != 0) {
		var_1_object->size(var_5_int);
		var_6_int = 0;

		while(var_6_int < var_5_int) {
			var_1_object->get(var_7_object, var_6_int);
			if(var_7_object != 0)
				@RemoveActor(var_7_object);
			var_7_object = null;
			var_6_int += 1;
		}

		var_1_object->clear();
	}
}


void func_164(object var_1_object)
{
	object var_3_object;
	@CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_158(object var_51_object)
{
	object var_53_object;
	@self(var_53_object);
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


