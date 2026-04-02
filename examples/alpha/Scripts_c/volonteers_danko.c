maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
	{
		func_679(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, string var_5_string, string var_6_string)
	{
		int var_7_int; int var_8_int;
		@Trace(var_5_string);
		if(var_5_string == "rescue") {
			int var_11_int;
			int var_12_int; int var_13_int;
			int var_14_int; string var_15_string;
			var_6_string = var_15_string;
			func_948(var_14_int, var_15_string);
			var_14_int = var_13_int;
			func_742(var_11_int, var_12_int, var_13_int);
			var_12_int = var_11_int;
			func_856(var_7_int, var_8_int, var_11_int);
		} else {
				if(!(var_5_string == "rescue_locked")) goto Label_462;
				var_8_int = 0;

				for(;;) {
					int var_203_int;
					func_737(var_8_int, var_203_int);
					if(!(var_8_int < var_203_int)) goto Label_461;
					bool var_205_bool; int var_206_int;
					var_8_int = var_206_int;
					func_771(var_205_bool, var_206_int);
					if(var_205_bool != 0) {
						int var_214_int;
						var_8_int = var_214_int;
						func_856(var_7_int, var_8_int, var_214_int);
					}
					var_8_int += 1;
				}

			Label_461:
		}

	
	Label_462:
		if(var_5_string == "update") {
			func_528(var_7_int, var_8_int);
		} else if(var_5_string == "cleanup") {
			func_657(var_8_int);
		}
	}

}


void func_896(int var_488_int)
{
	int var_492_int;
	var_488_int = var_492_int;
	int var_490_int;
	string var_491_string;
	func_765(var_490_int, var_491_string, var_492_int);
	@GetVariable(var_491_string, var_490_int);
	string var_493_string; int var_494_int;
	var_488_int = var_494_int;
	func_765(var_490_int, var_493_string, var_494_int);
	@SetVariable(var_493_string, ((var_490_int & 8) | 3));
}


void func_0(object var_73_object)
{
	int var_77_int; object var_78_object;
	var_77_int = 0;
	
	while(var_77_int < 12) {
		@CreateIntVector(var_78_object);
		var_73_object->add(var_78_object);
		var_78_object = null;
		var_77_int += 1;
	}
	
	object var_79_object;
	var_73_object->get(var_79_object, 0);
	var_73_object->get(var_79_object, 1);
	int var_85_int;
	func_742(var_79_object, var_85_int, 11);
	var_79_object->add(var_85_int);
	int var_97_int;
	func_742(var_79_object, var_97_int, 18);
	var_79_object->add(var_97_int);
	int var_99_int;
	func_742(var_79_object, var_99_int, 21);
	var_79_object->add(var_99_int);
	var_73_object->get(var_79_object, 2);
	int var_102_int;
	func_742(var_79_object, var_102_int, 2);
	var_79_object->add(var_102_int);
	int var_104_int;
	func_742(var_79_object, var_104_int, 9);
	var_79_object->add(var_104_int);
	int var_106_int;
	func_742(var_79_object, var_106_int, 11);
	var_79_object->add(var_106_int);
	int var_108_int;
	func_742(var_79_object, var_108_int, 13);
	var_79_object->add(var_108_int);
	int var_110_int;
	func_742(var_79_object, var_110_int, 24);
	var_79_object->add(var_110_int);
	var_73_object->get(var_79_object, 3);
	int var_113_int;
	func_742(var_79_object, var_113_int, 10);
	var_79_object->add(var_113_int);
	int var_115_int;
	func_742(var_79_object, var_115_int, 11);
	var_79_object->add(var_115_int);
	int var_117_int;
	func_742(var_79_object, var_117_int, 18);
	var_79_object->add(var_117_int);
	int var_119_int;
	func_742(var_79_object, var_119_int, 20);
	var_79_object->add(var_119_int);
	int var_121_int;
	func_742(var_79_object, var_121_int, 24);
	var_79_object->add(var_121_int);
	int var_123_int;
	func_742(var_79_object, var_123_int, 26);
	var_79_object->add(var_123_int);
	var_73_object->get(var_79_object, 4);
	int var_126_int;
	func_742(var_79_object, var_126_int, 9);
	var_79_object->add(var_126_int);
	int var_128_int;
	func_742(var_79_object, var_128_int, 10);
	var_79_object->add(var_128_int);
	int var_130_int;
	func_742(var_79_object, var_130_int, 18);
	var_79_object->add(var_130_int);
	int var_132_int;
	func_742(var_79_object, var_132_int, 20);
	var_79_object->add(var_132_int);
	int var_134_int;
	func_742(var_79_object, var_134_int, 21);
	var_79_object->add(var_134_int);
	int var_136_int;
	func_742(var_79_object, var_136_int, 24);
	var_79_object->add(var_136_int);
	var_73_object->get(var_79_object, 5);
	int var_139_int;
	func_742(var_79_object, var_139_int, 20);
	var_79_object->add(var_139_int);
	var_73_object->get(var_79_object, 6);
	int var_142_int;
	func_742(var_79_object, var_142_int, 3);
	var_79_object->add(var_142_int);
	int var_144_int;
	func_742(var_79_object, var_144_int, 9);
	var_79_object->add(var_144_int);
	int var_146_int;
	func_742(var_79_object, var_146_int, 10);
	var_79_object->add(var_146_int);
	int var_148_int;
	func_742(var_79_object, var_148_int, 11);
	var_79_object->add(var_148_int);
	int var_150_int;
	func_742(var_79_object, var_150_int, 13);
	var_79_object->add(var_150_int);
	int var_152_int;
	func_742(var_79_object, var_152_int, 18);
	var_79_object->add(var_152_int);
	int var_154_int;
	func_742(var_79_object, var_154_int, 19);
	var_79_object->add(var_154_int);
	int var_156_int;
	func_742(var_79_object, var_156_int, 20);
	var_79_object->add(var_156_int);
	int var_158_int;
	func_742(var_79_object, var_158_int, 21);
	var_79_object->add(var_158_int);
	int var_160_int;
	func_742(var_79_object, var_160_int, 24);
	var_79_object->add(var_160_int);
	int var_162_int;
	func_742(var_79_object, var_162_int, 26);
	var_79_object->add(var_162_int);
	var_73_object->get(var_79_object, 7);
	int var_165_int;
	func_742(var_79_object, var_165_int, 3);
	var_79_object->add(var_165_int);
	int var_167_int;
	func_742(var_79_object, var_167_int, 9);
	var_79_object->add(var_167_int);
	int var_169_int;
	func_742(var_79_object, var_169_int, 11);
	var_79_object->add(var_169_int);
	int var_171_int;
	func_742(var_79_object, var_171_int, 13);
	var_79_object->add(var_171_int);
	int var_173_int;
	func_742(var_79_object, var_173_int, 18);
	var_79_object->add(var_173_int);
	int var_175_int;
	func_742(var_79_object, var_175_int, 19);
	var_79_object->add(var_175_int);
	int var_177_int;
	func_742(var_79_object, var_177_int, 20);
	var_79_object->add(var_177_int);
	int var_179_int;
	func_742(var_79_object, var_179_int, 21);
	var_79_object->add(var_179_int);
	int var_181_int;
	func_742(var_79_object, var_181_int, 24);
	var_79_object->add(var_181_int);
	int var_183_int;
	func_742(var_79_object, var_183_int, 26);
	var_79_object->add(var_183_int);
	var_73_object->get(var_79_object, 8);
	int var_186_int;
	func_742(var_79_object, var_186_int, 3);
	var_79_object->add(var_186_int);
	int var_188_int;
	func_742(var_79_object, var_188_int, 9);
	var_79_object->add(var_188_int);
	int var_190_int;
	func_742(var_79_object, var_190_int, 10);
	var_79_object->add(var_190_int);
	int var_192_int;
	func_742(var_79_object, var_192_int, 11);
	var_79_object->add(var_192_int);
	int var_194_int;
	func_742(var_79_object, var_194_int, 13);
	var_79_object->add(var_194_int);
	int var_196_int;
	func_742(var_79_object, var_196_int, 18);
	var_79_object->add(var_196_int);
	int var_198_int;
	func_742(var_79_object, var_198_int, 19);
	var_79_object->add(var_198_int);
	int var_200_int;
	func_742(var_79_object, var_200_int, 20);
	var_79_object->add(var_200_int);
	int var_202_int;
	func_742(var_79_object, var_202_int, 21);
	var_79_object->add(var_202_int);
	int var_204_int;
	func_742(var_79_object, var_204_int, 24);
	var_79_object->add(var_204_int);
	var_73_object->get(var_79_object, 9);
	int var_207_int;
	func_742(var_79_object, var_207_int, 3);
	var_79_object->add(var_207_int);
	int var_209_int;
	func_742(var_79_object, var_209_int, 9);
	var_79_object->add(var_209_int);
	int var_211_int;
	func_742(var_79_object, var_211_int, 10);
	var_79_object->add(var_211_int);
	int var_213_int;
	func_742(var_79_object, var_213_int, 11);
	var_79_object->add(var_213_int);
	int var_215_int;
	func_742(var_79_object, var_215_int, 13);
	var_79_object->add(var_215_int);
	int var_217_int;
	func_742(var_79_object, var_217_int, 18);
	var_79_object->add(var_217_int);
	int var_219_int;
	func_742(var_79_object, var_219_int, 19);
	var_79_object->add(var_219_int);
	int var_221_int;
	func_742(var_79_object, var_221_int, 21);
	var_79_object->add(var_221_int);
	int var_223_int;
	func_742(var_79_object, var_223_int, 24);
	var_79_object->add(var_223_int);
}
EMIT "Stack[-1] = 0";


void func_1666(object var_18_object, object var_19_object)
{
	object var_21_object;
	var_18_object->add(1);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_alexandr@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(2);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("shouse1_kabak@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(3);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_anna@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(4);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_bigvad@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(6);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_georg@door1");
		var_21_object->add("cot_georg@door2");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(9);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_julia@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(10);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_kapella@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(11);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_katerina@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(13);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_lara@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(18);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("vagon_mishka@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(19);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("house_vlad@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(20);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("warehouse_notkin@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(21);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("dt_house_1_04@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(22);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("house_petr@door1");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(24);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("house_spi4ka@door1");
		var_21_object->add("house_spi4ka@door2");
		var_19_object->add(var_21_object);
	}
	var_18_object->add(26);
	if(var_19_object != 0) {
		@CreateStringVector(var_21_object);
		var_21_object->add("cot_viktor@door1");
		var_21_object->add("cot_viktor@door2");
		var_19_object->add(var_21_object);
	}
}
EMIT "Stack[-1] = 0";


void func_771(bool var_205_bool, int var_206_int)
{
	int var_210_int;
	var_206_int = var_210_int;
	int var_208_int;
	string var_209_string;
	func_765(var_208_int, var_209_string, var_210_int);
	@GetVariable(var_209_string, var_208_int);
	var_205_bool = (var_208_int & 2) != 0;
}


void func_783(bool var_479_bool, int var_480_int)
{
	int var_484_int;
	var_480_int = var_484_int;
	int var_482_int;
	string var_483_string;
	func_765(var_482_int, var_483_string, var_484_int);
	@GetVariable(var_483_string, var_482_int);
	var_479_bool = (var_482_int & 1) == 0;
}


void func_528(object var_3_object, int var_4_int)
{
	int var_230_int; int var_231_int; object var_232_object; int var_233_int; int var_234_int; string var_235_string; int var_237_int; int var_238_int; int var_240_int; int var_241_int;
	@Trace("Volonteers update...");
	
	for(;;) {
		int var_243_int;
		func_737(var_241_int, var_243_int);
		if(!(0 < var_243_int)) goto Label_578;
		int var_245_int; int var_246_int;
		var_230_int = var_246_int;
		func_760(var_241_int, var_245_int, var_246_int);
		var_245_int = var_231_int;
		bool var_249_bool; int var_250_int;
		var_230_int = var_250_int;
		func_771(var_249_bool, var_250_int);
		if(var_249_bool != 0) {
			int var_251_int;
			var_230_int = var_251_int;
			func_807(var_241_int, var_251_int);
		}
		bool var_437_bool; int var_438_int;
		var_230_int = var_438_int;
		func_795(var_437_bool, var_438_int);
		if(var_437_bool != 0) {
			var_3_object->get(var_232_object, var_230_int); //@t
			var_232_object->size(var_233_int);
			var_234_int = 0;

			while(var_234_int < var_233_int) {
				var_232_object->get(var_235_string, var_234_int);
				string var_447_string;
				var_235_string = var_447_string;
				func_932(var_447_string, true);
				var_234_int += 1;
			}

			var_232_object = null;
		}
		var_230_int += 1;
	}
	
Label_578:
	var_4_int += 1;
	int var_452_int;
	int var_454_int;
	func_411(var_4_int);
	var_454_int = var_452_int;
	func_476(var_452_int, var_4_int);
	int var_236_int = 0;
	
	for(;;) {
		int var_501_int;
		func_737(var_241_int, var_501_int);
		if(!(0 < var_501_int)) goto Label_619;
		int var_503_int; int var_504_int;
		var_237_int = var_504_int;
		func_760(var_241_int, var_503_int, var_504_int);
		var_503_int = var_238_int;
		bool var_505_bool; int var_506_int;
		var_237_int = var_506_int;
		func_771(var_505_bool, var_506_int);
		if(var_505_bool != 0) {
			string var_508_string; int var_509_int;
			var_238_int = var_509_int;
			func_1308(var_508_string, var_509_int);
			@Trace("Volonteer : " + var_508_string);
			var_236_int += 1;
		}
		var_237_int += 1;
	}
	
Label_619:
	int var_239_int = 0;
	
	for(;;) {
		int var_513_int;
		func_737(var_241_int, var_513_int);
		if(!(0 < var_513_int)) goto Label_649;
		int var_515_int; int var_516_int;
		var_240_int = var_516_int;
		func_760(var_241_int, var_515_int, var_516_int);
		var_515_int = var_241_int;
		bool var_517_bool; int var_518_int;
		var_240_int = var_518_int;
		func_795(var_517_bool, var_518_int);
		if(var_517_bool != 0) {
			var_239_int += 1;
			string var_521_string; int var_522_int;
			var_241_int = var_522_int;
			func_1308(var_521_string, var_522_int);
			@Trace("Diseased volonteer : " + var_521_string);
		}
		var_240_int += 1;
	}
	
Label_649:
	@Trace((("Today volonteers: " + var_236_int) + ", diseased: ") + var_239_int);
}


void func_657(object var_2_object)
{
	object var_535_object;
	@Trace("Volonteers Cleanup...");
	int var_534_int = 0;
	
	for(;;) {
		int var_537_int;
		func_737(var_535_object, var_537_int);
		if(!(var_534_int < var_537_int)) goto Label_678;
		var_2_object->get(var_535_object, var_534_int); //@t
		if(var_535_object != null)
			var_535_object->Remove();
		var_535_object = null;
		var_534_int += 1;
	}
	
Label_678:
}


void func_914(object var_415_object, object var_416_object, string var_417_string, string var_418_string, string var_419_string)
{
	bool var_428_bool; cvector var_429_cvector; cvector var_430_cvector;
	var_416_object->GetLocator(var_417_string, var_428_bool, var_429_cvector, var_430_cvector);
	if(!var_428_bool) //@nz
		@Trace(("Locator " + var_417_string) + " doesn't exist");
	else
		var_416_object->AddStationaryActor(Obj(), var_429_cvector, var_430_cvector, var_418_string, var_419_string);
	object var_431_object = var_415_object;
	
}
EMIT "Stack[-1] = 0";


void func_856(object var_2_object, object var_3_object, int var_11_int)
{
	int var_181_int;
	var_11_int = var_181_int;
	string var_179_string;
	string var_180_string;
	func_765(var_179_string, var_180_string, var_181_int);
	int var_174_int;
	@GetVariable(var_180_string, var_174_int);
	string var_185_string; int var_186_int;
	var_11_int = var_186_int;
	func_765(var_179_string, var_185_string, var_186_int);
	@SetVariable(var_185_string, 1);
	object var_175_object;
	var_2_object->get(var_175_object, var_11_int); //@t
	if(var_175_object != null)
		var_175_object->Remove();
	object var_176_object;
	var_3_object->get(var_176_object, var_11_int); //@t
	int var_177_int;
	var_176_object->size(var_177_int);
	int var_178_int = 0;
	
	while(var_178_int < var_177_int) {
		var_176_object->get(var_179_string, var_178_int);
		string var_190_string;
		var_179_string = var_190_string;
		func_932(var_190_string, false);
		var_178_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_795(bool var_437_bool, int var_438_int)
{
	int var_442_int;
	var_438_int = var_442_int;
	int var_440_int;
	string var_441_string;
	func_765(var_440_int, var_441_string, var_442_int);
	@GetVariable(var_441_string, var_440_int);
	var_437_bool = (var_440_int & 4) != 0;
}


// @pe
void func_411(int var_454_int)
{
	var_454_int = 2;
}


// @pe
void func_1308(string var_269_string, int var_270_int)
{
	if(var_270_int == 1) {
		var_269_string = "alexandr";
		return 0;
	}
	if(var_270_int == 2) {
		var_269_string = "andrei";
		return 0;
	}
	if(var_270_int == 3) {
		var_269_string = "anna";
		return 0;
	}
	if(var_270_int == 4) {
		var_269_string = "bigvlad";
		return 0;
	}
	if(var_270_int == 5) {
		var_269_string = "eva";
		return 0;
	}
	if(var_270_int == 6) {
		var_269_string = "georg";
		return 0;
	}
	if(var_270_int == 7) {
		var_269_string = "grif";
		return 0;
	}
	if(var_270_int == 8) {
		var_269_string = "han";
		return 0;
	}
	if(var_270_int == 9) {
		var_269_string = "julia";
		return 0;
	}
	if(var_270_int == 10) {
		var_269_string = "kapella";
		return 0;
	}
	if(var_270_int == 11) {
		var_269_string = "katerina";
		return 0;
	}
	if(var_270_int == 12) {
		var_269_string = "klara";
		return 0;
	}
	if(var_270_int == 13) {
		var_269_string = "lara";
		return 0;
	}
	if(var_270_int == 14) {
		var_269_string = "laska";
		return 0;
	}
	if(var_270_int == 15) {
		var_269_string = "maria";
		return 0;
	}
	if(var_270_int == 16) {
		var_269_string = "mark";
		return 0;
	}
	if(var_270_int == 17) {
		var_269_string = "mat";
		return 0;
	}
	if(var_270_int == 18) {
		var_269_string = "mishka";
		return 0;
	}
	if(var_270_int == 19) {
		var_269_string = "mladvlad";
		return 0;
	}
	if(var_270_int == 20) {
		var_269_string = "notkin";
		return 0;
	}
	if(var_270_int == 21) {
		var_269_string = "ospina";
		return 0;
	}
	if(var_270_int == 22) {
		var_269_string = "petr";
		return 0;
	}
	if(var_270_int == 23) {
		var_269_string = "rubin";
		return 0;
	}
	if(var_270_int == 24) {
		var_269_string = "spi4ka";
		return 0;
	}
	if(var_270_int == 25) {
		var_269_string = "starshina";
		return 0;
	}
	if(var_270_int == 26) {
		var_269_string = "viktor";
		return 0;
	}
	if(var_270_int == 27) {
		var_269_string = "wasted_woman";
		return 0;
	}
	if(var_270_int == 28) {
		var_269_string = "wasted_male";
		return 0;
	}
	if(var_270_int == 29) {
		var_269_string = "alkash";
		return 0;
	}
	if(var_270_int == 30) {
		var_269_string = "boy";
		return 0;
	}
	if(var_270_int == 31) {
		var_269_string = "girl";
		return 0;
	}
	if(var_270_int == 32) {
		var_269_string = "littleboy";
		return 0;
	}
	if(var_270_int == 33) {
		var_269_string = "littlegirl";
		return 0;
	}
	if(var_270_int == 34) {
		var_269_string = "butcher";
		return 0;
	}
	if(var_270_int == 35) {
		var_269_string = "dohodyaga";
		return 0;
	}
	if(var_270_int == 36) {
		var_269_string = "unosha";
		return 0;
	}
	if(var_270_int == 37) {
		var_269_string = "vaxxabit";
		return 0;
	}
	if(var_270_int == 38) {
		var_269_string = "vaxxabitka";
		return 0;
	}
	if(var_270_int == 39) {
		var_269_string = "woman";
		return 0;
	}
	if(var_270_int == 40) {
		var_269_string = "worker";
		return 0;
	}
	if(var_270_int == 42) {
		var_269_string = "whitemask";
		return 0;
	}
	if(var_270_int == 43) {
		var_269_string = "birdmask";
		return 0;
	}
	if(var_270_int == 44) {
		var_269_string = "birdmask";
		return 0;
	}
	if(var_270_int == 46) {
		var_269_string = "patrol";
		return 0;
	}
	if(var_270_int == 47) {
		var_269_string = "danko";
		return 0;
	}
	if(var_270_int == 48) {
		var_269_string = "alkash_d";
		return 0;
	}
	if(var_270_int == 49) {
		var_269_string = "boy_d";
		return 0;
	}
	if(var_270_int == 50) {
		var_269_string = "butcher_d";
		return 0;
	}
	if(var_270_int == 51) {
		var_269_string = "dohodyaga_d";
		return 0;
	}
	if(var_270_int == 52) {
		var_269_string = "girl_d";
		return 0;
	}
	if(var_270_int == 53) {
		var_269_string = "littleboy_d";
		return 0;
	}
	if(var_270_int == 54) {
		var_269_string = "littlegirl_d";
		return 0;
	}
	if(var_270_int == 55) {
		var_269_string = "unosha2";
		return 0;
	}
	if(var_270_int == 56) {
		var_269_string = "unosha_d";
		return 0;
	}
	if(var_270_int == 57) {
		var_269_string = "unosha2_d";
		return 0;
	}
	if(var_270_int == 58) {
		var_269_string = "vaxxabit_d";
		return 0;
	}
	if(var_270_int == 59) {
		var_269_string = "vaxxabitka_d";
		return 0;
	}
	if(var_270_int == 60) {
		var_269_string = "wasted_male_d";
		return 0;
	}
	if(var_270_int == 61) {
		var_269_string = "wasted_woman_d";
		return 0;
	}
	if(var_270_int == 62) {
		var_269_string = "woman_d";
		return 0;
	}
	if(var_270_int == 63) {
		var_269_string = "worker2";
		return 0;
	}
	if(var_270_int == 64) {
		var_269_string = "worker_d";
		return 0;
	}
	if(var_270_int == 65) {
		var_269_string = "worker2_d";
		return 0;
	}
	if(var_270_int == 66) {
		var_269_string = "burah";
		return 0;
	}
	if(var_270_int == 67) {
		var_269_string = "gorbun_daughter";
		return 0;
	}
	if(var_270_int == 68) {
		var_269_string = "gorbun";
		return 0;
	}
	if(var_270_int == 69) {
		var_269_string = "albinos";
		return 0;
	}
	if(var_270_int == 70) {
		var_269_string = "aglaja";
		return 0;
	}
	if(var_270_int == 71) {
		var_269_string = "nude";
		return 0;
	}
	if(var_270_int == 72) {
		var_269_string = "block";
		return 0;
	}
	if(var_270_int == 73) {
		var_269_string = "officer";
		return 0;
	}
	var_269_string = "";
}


void func_476(int var_452_int, int var_453_int)
{
	int var_457_int = 0;
	
	while(var_457_int < var_452_int) {
		int var_459_int; int var_460_int;
		var_453_int = var_460_int;
		func_488(var_457_int, var_459_int, var_460_int);
		var_457_int += 1;
	}
	
}


void func_737(object var_0_object, int var_91_int)
{
	int var_93_int;
	var_0_object->size(var_93_int); //@t
	var_93_int = var_91_int;
}


void func_932(string var_190_string, bool var_191_bool)
{
	object var_193_object;
	@FindActor(var_193_object, var_190_string);
	if(!var_193_object) //@nz
		@Trace(("Door " + var_190_string) + " not found");
	var_193_object->SetProperty("locked", var_191_bool);
}
EMIT "Stack[-1] = 0";


void func_742(object var_0_object, int var_85_int, int var_86_int)
{
	int var_89_int; int var_90_int;
	var_89_int = 0;
	
	for(;;) {
		int var_91_int;
		func_737(var_90_int, var_91_int);
		if(!(var_89_int < var_91_int)) goto Label_758;
		var_0_object->get(var_90_int, var_89_int); //@t
		if(var_86_int == var_90_int)
			var_89_int = var_85_int;
		var_89_int += 1;
	}
	
Label_758:
	var_85_int = -1;
}


void func_679(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int)
{
	int var_15_int; object var_16_object;
	@Trace("Volonteers Init...");
	object var_11_object;
	@CreateIntVector(var_11_object);
	object var_12_object;
	@CreateObjectVector(var_12_object);
	object var_18_object; object var_19_object;
	func_1666(var_18_object, var_19_object);
	var_0_object = var_18_object;
	var_3_object = var_19_object;
	object var_13_object;
	@CreateObjectVector(var_13_object);
	object var_73_object;
	func_0(var_73_object);
	var_1_object = var_73_object;
	object var_14_object;
	@CreateObjectVector(var_14_object);
	
	for(;;) {
		int var_225_int;
		func_737(var_16_object, var_225_int);
		if(!(0 < var_225_int)) goto Label_724;
		string var_227_string; int var_228_int;
		var_15_int = var_228_int;
		func_765(var_16_object, var_227_string, var_228_int);
		@SetVariable(var_227_string, 0);
		var_14_object->add(Obj()); //@t
		var_16_object = null;
		var_15_int += 1;
	}
	
Label_724:
	var_4_int = 0;
	var_234_string = "Volonteers count: ";
	int var_235_int;
	func_737(var_234_string, var_235_int);
	@Trace(var_234_string + var_235_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";


void func_807(object var_2_object, int var_251_int)
{
	object var_258_object;
	int var_261_int;
	var_251_int = var_261_int;
	string var_259_string;
	string var_260_string;
	func_765(var_259_string, var_260_string, var_261_int);
	int var_256_int;
	@GetVariable(var_260_string, var_256_int);
	string var_262_string; int var_263_int;
	func_765(var_259_string, var_262_string, var_263_int);
	@SetVariable(var_262_string, ((var_256_int & 8) | 5));
	object var_257_object;
	var_2_object->get(var_257_object, var_263_int); //@t
	if(var_257_object == null) {
		@GetMainOutdoorScene(var_258_object);
		string var_269_string; int var_270_int;
		int var_271_int; int var_272_int;
		func_760(var_270_int, var_271_int, var_272_int);
		var_271_int = var_270_int;
		func_1308(var_269_string, var_270_int);
		var_269_string = var_259_string;
		object var_415_object; object var_416_object;
		var_258_object = var_416_object;
		func_914(var_415_object, var_416_object, ("pt_volonteer_" + var_259_string), "pers_birdmask", (("vbirdmask_" + var_259_string) + ".xml"));
		var_415_object = var_257_object;
		var_2_object->set(var_272_int, var_257_object); //@t
		var_258_object = null;
	}
}
EMIT "Stack[-3] = 0";


void func_488(object var_1_object, int var_459_int, int var_460_int)
{
	object var_467_object; int var_472_int;
	var_1_object->get(var_467_object, var_460_int); //@t
	int var_468_int;
	var_467_object->size(var_468_int);
	if(var_468_int == 0)
		return 12;
	int var_469_int = 0;
	if(var_468_int > 1)
		@irand(var_469_int, var_468_int);
	int var_470_int = 0;
	
	while(var_470_int < var_468_int) {
		var_467_object->get(var_472_int, ((var_470_int + var_469_int) % var_468_int));
		bool var_479_bool; int var_480_int;
		var_472_int = var_480_int;
		func_783(var_479_bool, var_480_int);
		if(var_479_bool != 0) {
			int var_488_int;
			var_472_int = var_488_int;
			func_896(var_488_int);
			var_472_int = -1;
			return 12;
		}
		var_470_int += 1;
	}
	
	var_459_int = -1;
}
EMIT "Stack[-6] = 0";


// @pe
void func_948(int var_14_int, string var_15_string)
{
	@_strlwr(var_15_string);
	if(var_15_string == "alexandr") {
		var_14_int = 1;
		return 0;
	}
	if(var_15_string == "andrei") {
		var_14_int = 2;
		return 0;
	}
	if(var_15_string == "anna") {
		var_14_int = 3;
		return 0;
	}
	if(var_15_string == "bigvlad") {
		var_14_int = 4;
		return 0;
	}
	if(var_15_string == "eva") {
		var_14_int = 5;
		return 0;
	}
	if(var_15_string == "georg") {
		var_14_int = 6;
		return 0;
	}
	if(var_15_string == "grif") {
		var_14_int = 7;
		return 0;
	}
	if(var_15_string == "han") {
		var_14_int = 8;
		return 0;
	}
	if(var_15_string == "julia") {
		var_14_int = 9;
		return 0;
	}
	if(var_15_string == "kapella") {
		var_14_int = 10;
		return 0;
	}
	if(var_15_string == "katerina") {
		var_14_int = 11;
		return 0;
	}
	if(var_15_string == "klara") {
		var_14_int = 12;
		return 0;
	}
	if(var_15_string == "lara") {
		var_14_int = 13;
		return 0;
	}
	if(var_15_string == "laska") {
		var_14_int = 14;
		return 0;
	}
	if(var_15_string == "maria") {
		var_14_int = 15;
		return 0;
	}
	if(var_15_string == "mark") {
		var_14_int = 16;
		return 0;
	}
	if(var_15_string == "mat") {
		var_14_int = 17;
		return 0;
	}
	if(var_15_string == "mishka") {
		var_14_int = 18;
		return 0;
	}
	if(var_15_string == "mladvlad") {
		var_14_int = 19;
		return 0;
	}
	if(var_15_string == "notkin") {
		var_14_int = 20;
		return 0;
	}
	if(var_15_string == "ospina") {
		var_14_int = 21;
		return 0;
	}
	if(var_15_string == "petr") {
		var_14_int = 22;
		return 0;
	}
	if(var_15_string == "rubin") {
		var_14_int = 23;
		return 0;
	}
	if(var_15_string == "spi4ka") {
		var_14_int = 24;
		return 0;
	}
	if(var_15_string == "starshina") {
		var_14_int = 25;
		return 0;
	}
	if(var_15_string == "viktor") {
		var_14_int = 26;
		return 0;
	}
	if(var_15_string == "wasted_woman") {
		var_14_int = 27;
		return 0;
	}
	if(var_15_string == "wasted_male") {
		var_14_int = 28;
		return 0;
	}
	if(var_15_string == "alkash") {
		var_14_int = 29;
		return 0;
	}
	if(var_15_string == "boy") {
		var_14_int = 30;
		return 0;
	}
	if(var_15_string == "girl") {
		var_14_int = 31;
		return 0;
	}
	if(var_15_string == "littleboy") {
		var_14_int = 32;
		return 0;
	}
	if(var_15_string == "littlegirl") {
		var_14_int = 33;
		return 0;
	}
	if(var_15_string == "butcher") {
		var_14_int = 34;
		return 0;
	}
	if(var_15_string == "dohodyaga") {
		var_14_int = 35;
		return 0;
	}
	if(var_15_string == "unosha") {
		var_14_int = 36;
		return 0;
	}
	if(var_15_string == "vaxxabit") {
		var_14_int = 37;
		return 0;
	}
	if(var_15_string == "vaxxabitka") {
		var_14_int = 38;
		return 0;
	}
	if(var_15_string == "woman") {
		var_14_int = 39;
		return 0;
	}
	if(var_15_string == "worker") {
		var_14_int = 40;
		return 0;
	}
	if(var_15_string == "whitemask") {
		var_14_int = 42;
		return 0;
	}
	if(var_15_string == "birdmask") {
		var_14_int = 43;
		return 0;
	}
	if(var_15_string == "birdmask") {
		var_14_int = 44;
		return 0;
	}
	if(var_15_string == "patrol") {
		var_14_int = 46;
		return 0;
	}
	if(var_15_string == "danko") {
		var_14_int = 47;
		return 0;
	}
	if(var_15_string == "alkash_d") {
		var_14_int = 48;
		return 0;
	}
	if(var_15_string == "boy_d") {
		var_14_int = 49;
		return 0;
	}
	if(var_15_string == "butcher_d") {
		var_14_int = 50;
		return 0;
	}
	if(var_15_string == "dohodyaga_d") {
		var_14_int = 51;
		return 0;
	}
	if(var_15_string == "girl_d") {
		var_14_int = 52;
		return 0;
	}
	if(var_15_string == "littleboy_d") {
		var_14_int = 53;
		return 0;
	}
	if(var_15_string == "littlegirl_d") {
		var_14_int = 54;
		return 0;
	}
	if(var_15_string == "unosha2") {
		var_14_int = 55;
		return 0;
	}
	if(var_15_string == "unosha_d") {
		var_14_int = 56;
		return 0;
	}
	if(var_15_string == "unosha2_d") {
		var_14_int = 57;
		return 0;
	}
	if(var_15_string == "vaxxabit_d") {
		var_14_int = 58;
		return 0;
	}
	if(var_15_string == "vaxxabitka_d") {
		var_14_int = 59;
		return 0;
	}
	if(var_15_string == "wasted_male_d") {
		var_14_int = 60;
		return 0;
	}
	if(var_15_string == "wasted_woman_d") {
		var_14_int = 61;
		return 0;
	}
	if(var_15_string == "woman_d") {
		var_14_int = 62;
		return 0;
	}
	if(var_15_string == "worker2") {
		var_14_int = 63;
		return 0;
	}
	if(var_15_string == "worker_d") {
		var_14_int = 64;
		return 0;
	}
	if(var_15_string == "worker2_d") {
		var_14_int = 65;
		return 0;
	}
	if(var_15_string == "burah") {
		var_14_int = 66;
		return 0;
	}
	if(var_15_string == "gorbun_daughter") {
		var_14_int = 67;
		return 0;
	}
	if(var_15_string == "gorbun") {
		var_14_int = 68;
		return 0;
	}
	if(var_15_string == "albinos") {
		var_14_int = 69;
		return 0;
	}
	if(var_15_string == "aglaja") {
		var_14_int = 70;
		return 0;
	}
	if(var_15_string == "nude") {
		var_14_int = 71;
		return 0;
	}
	if(var_15_string == "block") {
		var_14_int = 72;
		return 0;
	}
	if(var_15_string == "officer") {
		var_14_int = 73;
		return 0;
	}
	var_14_int = -1;
}


void func_760(object var_0_object, int var_245_int, int var_246_int)
{
	int var_248_int;
	var_0_object->get(var_248_int, var_246_int); //@t
	var_248_int = var_245_int;
}


void func_765(object var_0_object, string var_227_string, int var_228_int)
{
	int var_230_int;
	var_0_object->get(var_230_int, var_228_int); //@t
	var_227_string = "vol_" + var_230_int;
}


