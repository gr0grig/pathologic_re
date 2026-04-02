maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, int var_24_int, int var_25_int, object var_26_object)
	{
		@GetContainer(var_26_object);
		@CreateObjectVector(var_20_object);
		@CreateObjectVector(var_21_object);
		@CreateObjectVector(var_4_object);
		@CreateIntVector(var_5_object);
		@CreateIntVector(var_6_object);
		@CreateObjectVector(var_7_object);
		@CreateIntVector(var_8_object);
		@CreateIntVector(var_9_object);
		@CreateObjectVector(var_10_object);
		@CreateIntVector(var_11_object);
		@CreateObjectVector(var_12_object);
		@CreateIntVector(var_13_object);
		@CreateObjectVector(var_14_object);
		@CreateIntVector(var_15_object);
		@CreateObjectVector(var_16_object);
		@CreateIntVector(var_17_object);
		@CreateObjectVector(var_18_object);
		@CreateIntVector(var_19_object);
		int var_29_int;
		func_1429(var_29_int);
		float var_27_float;
		float var_28_float;
		func_242(var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_29_int, var_26_object, var_27_float, var_28_float);
		@GetGameTime(var_28_float);
		var_24_int = 1 + (var_28_float / 24);
		@ShowCursor();
		@SetCursor("default");
		@CaptureKeyboard();
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, int var_24_int, int var_25_int, object var_26_object, int var_27_int)
	{
		@DestroyWindow();
	}

	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, int var_24_int, int var_25_int, object var_26_object, int var_27_int, string var_28_string, object var_29_object)
	{
		int var_30_int;
		int var_33_int;
		var_27_int = var_33_int;
		string var_34_string;
		var_28_string = var_34_string;
		func_1341(var_33_int, var_34_string);
		int var_31_int;
		int var_32_int = var_31_int;
		if(var_31_int != -1) {
			if(var_27_int == 0) {
				int var_57_int;
				func_1011(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_57_int, var_57_int);
			} else {
				int var_383_int;
				var_31_int = var_383_int;
				func_1077(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_383_int);
		}
			int var_477_int; int var_478_int; string var_479_string;
			var_27_int = var_478_int;
			var_28_string = var_479_string;
			func_1359(var_478_int, var_479_string);
			var_477_int = var_31_int;
			if(var_31_int != -1) {
				if(var_27_int == 0) {
					int var_492_int;
					func_1141(var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_492_int, var_492_int);
				} else {
					int var_542_int;
					var_31_int = var_542_int;
					func_1204(var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_542_int);
			}
				if(var_28_string == "cancel_button") {
					func_242(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "l_scroll_button_top") {
					var_0_int -= 2;
					func_521(var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "l_scroll_button_bottom") {
					var_0_int += 2;
					func_521(var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scroll_button_top") {
					var_1_int -= 2;
					func_604(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scroll_button_bottom") {
					func_604(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "l_scrollbar") {
					int var_716_int;
					func_485(var_31_int, var_716_int);
					var_0_int = ((var_716_int * var_27_int) / 100.0) + 0.5;
					var_0_int *= 2;
					func_521(var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "r_scrollbar") {
					int var_737_int;
					func_503(var_31_int, var_737_int);
					var_1_int = ((var_737_int * var_27_int) / 100.0) + 0.5;
					var_1_int *= 2;
					func_604(var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				if(var_28_string == "ok_button") {
					func_698(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int);
					return 2;
				}
				return 2;
			}
			return 2;
		}
	
	}

}


void func_0(object var_20_object, object var_21_object, object var_235_object)
{
	int var_239_int; object var_240_object;
	var_21_object->size(var_239_int); //@t
	int var_241_int = 0;
	
	while(var_241_int < var_239_int) {
		var_21_object->get(var_240_object, var_241_int); //@t
		bool var_243_bool; object var_244_object; object var_245_object;
		var_240_object = var_244_object;
		var_235_object = var_245_object;
		func_1580(var_243_bool, var_244_object, var_245_object);
		if(var_243_bool != 0)
			var_21_object->remove(var_241_int); //@t
		var_241_int += 1;
	}
	
	var_20_object->add(var_235_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1538(int var_82_int, int var_83_int)
{
	object var_87_object;
	@GetPlayerContainer(var_87_object);
	int var_86_int;
	var_87_object->GetItemCount(var_86_int, var_83_int);
	var_86_int = var_82_int;
}
EMIT "Stack[-1] = 0";


void func_1283(int var_0_int, object var_9_object, int var_168_int, int var_169_int)
{
	int var_172_int;
	var_9_object->size(var_172_int); //@t
	if((var_169_int + var_0_int) >= var_172_int)
		var_168_int = 0;
	int var_173_int;
	var_9_object->get(var_173_int, (var_169_int + var_0_int)); //@t
	var_173_int = var_168_int;
}


void func_521(int var_0_int, object var_7_object, int var_25_int)
{
	int var_147_int; int var_148_int; object var_150_object; int var_151_int;
	var_7_object->size(var_147_int); //@t
	if((var_0_int + 18) > var_147_int) {
		var_156_int = var_147_int % 2;
		if(var_156_int == 0)
			var_0_int -= ((var_0_int + 18) - var_147_int);
		else
			var_0_int -= (((var_0_int + 18) - var_147_int) - 1);
	}
	if(var_0_int < 0)
		var_0_int = 0;
	int var_149_int = var_0_int;
	
	for(;;) {
		if(var_149_int < (var_0_int + 18)) {
			if(var_149_int < var_147_int) {
				var_7_object->get(var_150_object, var_149_int); //@t
				var_148_int = 0;
				int var_168_int;
				func_1283(var_150_object, var_151_int, var_168_int, (var_149_int - var_0_int));
				var_168_int = var_151_int;
				if(var_151_int > 0)
					var_148_int = var_148_int | 16384;
				bool var_180_bool; object var_181_object;
				func_1602(var_180_bool, var_181_object, var_25_int, false);
				if(var_180_bool != 0)
					var_148_int = var_148_int | 131072;
				string var_212_string;
				func_1309(var_212_string, (var_149_int - var_0_int));
				@SendMessage((var_151_int | 65536), var_212_string);
				string var_224_string;
				func_1309(var_224_string, (var_149_int - var_0_int));
				@SendMessage(var_148_int, var_224_string, var_181_object);
				var_150_object = null;
			} else {
			string var_228_string;
			func_1309(var_228_string, (var_149_int - var_0_int));
			@SendMessage(32768, var_228_string);
		}

		}
		var_149_int += 1;
	}
	
}


void func_393(object var_7_object, object var_8_object, object var_9_object)
{
	int var_49_int; object var_51_object; int var_52_int;
	int var_53_int;
	func_1530(var_53_int);
	int var_48_int;
	var_53_int = var_48_int;
	
	while(0 < var_48_int) {
		int var_59_int; int var_60_int;
		var_52_int = var_60_int;
		func_1572(var_59_int, var_60_int);
		var_59_int = var_49_int;
		object var_65_object; int var_66_int;
		var_52_int = var_66_int;
		func_1563(var_65_object, var_66_int);
		var_65_object = var_51_object;
		var_7_object->add(var_51_object); //@t
		var_8_object->add(var_49_int); //@t
		var_9_object->add(0); //@t
		var_52_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1546(object var_96_object, int var_97_int, int var_98_int)
{
	object var_101_object;
	@GetPlayerContainer(var_101_object);
	object var_102_object;
	var_101_object->GetItem(var_102_object, var_98_int, var_97_int);
	var_102_object = var_96_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1677(bool var_793_bool, object var_794_object, object var_795_object, int var_796_int)
{
	bool var_798_bool;
	var_794_object->AddItem(var_798_bool, var_795_object, var_796_int, 1);
	var_798_bool = var_793_bool;
}


void func_1296(int var_1_int, object var_6_object, int var_264_int, int var_265_int)
{
	int var_268_int;
	var_6_object->size(var_268_int); //@t
	if((var_265_int + var_1_int) >= var_268_int)
		var_264_int = 0;
	int var_269_int;
	var_6_object->get(var_269_int, (var_265_int + var_1_int)); //@t
	var_269_int = var_264_int;
}


void func_914(bool var_174_bool, object var_175_object, object var_176_object, object var_177_object)
{
	int var_182_int; object var_183_object; int var_184_int; int var_185_int;
	var_176_object->size(var_182_int);
	int var_186_int; object var_187_object;
	var_175_object = var_187_object;
	func_1521(var_186_int, var_187_object);
	if(var_186_int > 1) {
		var_184_int = 0;

		for(;;) {
			if(!(var_184_int < var_182_int)) goto Label_952;
			var_176_object->get(var_183_object, var_184_int);
			var_177_object->get(var_185_int, var_184_int);
			bool var_195_bool; object var_196_object; object var_197_object;
			var_175_object = var_196_object;
			var_183_object = var_197_object;
			func_1591(var_195_bool, var_196_object, var_197_object);
			if(var_195_bool != 0) {
				int var_202_int; object var_203_object;
				var_175_object = var_203_object;
				func_1521(var_202_int, var_203_object);
				if(var_185_int < var_202_int)
					var_177_object->set(var_184_int, (var_185_int + 1));
				var_174_bool = true;
				return 8;
			}
			var_184_int += 1;
		}
	}
Label_952:
	if(var_182_int < 12) {
		var_176_object->add(var_175_object);
		var_177_object->add(1);
		var_174_bool = true;
		return 8;
	}
	var_174_bool = false;
}
EMIT "Stack[-3] = 0";


void func_1555(int var_89_int, int var_90_int, int var_91_int)
{
	object var_94_object;
	@GetPlayerContainer(var_94_object);
	int var_95_int;
	var_94_object->GetItemAmount(var_95_int, var_91_int, var_90_int);
	var_95_int = var_89_int;
}
EMIT "Stack[-2] = 0";


void func_1429(int var_29_int)
{
	object var_33_object;
	@GetContainer(var_33_object);
	bool var_34_bool;
	var_33_object->HasProperty("barter", var_34_bool);
	if(!var_34_bool) //@nz
		var_29_int = 0;
	int var_35_int;
	var_33_object->GetProperty("barter", var_35_int);
	var_35_int = var_29_int;
}
EMIT "Stack[-3] = 0";


void func_792(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, bool var_161_bool, object var_162_object)
{
	object var_166_object;
	var_162_object = var_166_object;
	int var_165_int;
	func_1511(var_165_int, var_166_object);
	int var_164_int;
	var_165_int = var_164_int;
	if(var_164_int == 0) {
		bool var_174_bool; object var_175_object;
		var_162_object = var_175_object;
		func_914(var_174_bool, var_175_object, var_10_object, var_11_object);
		var_174_bool = var_161_bool;
		return 2;
	EMIT "GOTO 0x34d";
	}
	if(var_164_int == 1) {
		bool var_213_bool; object var_214_object;
		var_162_object = var_214_object;
		func_914(var_213_bool, var_214_object, var_12_object, var_13_object);
		var_213_bool = var_161_bool;
		return 2;
	EMIT "GOTO 0x34d";
	}
	if(var_164_int == 2) {
		bool var_219_bool; object var_220_object;
		var_162_object = var_220_object;
		func_914(var_219_bool, var_220_object, var_14_object, var_15_object);
		var_219_bool = var_161_bool;
		return 2;
	EMIT "GOTO 0x34d";
	}
	if(var_164_int == 3) {
		bool var_225_bool; object var_226_object;
		var_162_object = var_226_object;
		func_914(var_225_bool, var_226_object, var_16_object, var_17_object);
		var_225_bool = var_161_bool;
		return 2;
	}
	bool var_229_bool; object var_230_object;
	var_162_object = var_230_object;
	func_914(var_229_bool, var_230_object, var_18_object, var_19_object);
	var_229_bool = var_161_bool;
}


void func_24(object var_20_object, object var_21_object, object var_455_object)
{
	int var_459_int; object var_460_object;
	var_20_object->size(var_459_int); //@t
	int var_461_int = 0;
	
	while(var_461_int < var_459_int) {
		var_20_object->get(var_460_object, var_461_int); //@t
		bool var_463_bool; object var_464_object; object var_465_object;
		var_460_object = var_464_object;
		var_455_object = var_465_object;
		func_1580(var_463_bool, var_464_object, var_465_object);
		if(var_463_bool != 0)
			var_20_object->remove(var_461_int); //@t
		var_461_int += 1;
	}
	
	var_21_object->add(var_455_object); //@t
}
EMIT "Stack[-2] = 0";


void func_1563(object var_65_object, int var_66_int)
{
	object var_69_object;
	@GetContainer(var_69_object);
	object var_70_object;
	var_69_object->GetItem(var_70_object, var_66_int);
	var_70_object = var_65_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1309(string var_212_string, int var_213_int)
{
	if((var_213_int + 1) < 10)
		var_212_string = "l_slot0" + (var_213_int + 1);
	var_212_string = "l_slot" + (var_213_int + 1);
}


void func_1572(int var_59_int, int var_60_int)
{
	object var_63_object;
	@GetContainer(var_63_object);
	int var_64_int;
	var_63_object->GetItemAmount(var_64_int, var_60_int);
	var_64_int = var_59_int;
}
EMIT "Stack[-2] = 0";


void func_1445(int var_103_int, object var_104_object, int var_105_int)
{
	bool var_110_bool; int var_111_int;
	if(var_105_int == 0) {
		int var_116_int; object var_117_object;
		var_104_object = var_117_object;
		func_1506(var_116_int, var_117_object);
		@HasInvItemProperty(var_110_bool, var_116_int, "Price");
		if(!var_110_bool) { //@nz
			int var_121_int; object var_122_object;
			var_104_object = var_122_object;
			func_1506(var_121_int, var_122_object);
			@Trace(("Item with id :" + var_121_int) + " doesn't have price");
			var_103_int = 1;
			return 8;
		}
		int var_126_int; object var_127_object;
		var_104_object = var_127_object;
		func_1506(var_126_int, var_127_object);
		@GetInvItemProperty(var_111_int, var_126_int, "Price");
		var_111_int = var_103_int;
		return 8;
	}
	int var_129_int; object var_130_object;
	var_104_object = var_130_object;
	func_1506(var_129_int, var_130_object);
	bool var_112_bool;
	@HasInvItemProperty(var_112_bool, var_129_int, ("BarterPrice" + var_105_int));
	if(!var_112_bool) //@nz
		return 8;
	int var_134_int; object var_135_object;
	var_104_object = var_135_object;
	func_1506(var_134_int, var_135_object);
	int var_113_int;
	@GetInvItemProperty(var_113_int, var_134_int, ("BarterPrice" + var_105_int));
	if(var_113_int > 0) {
		var_113_int = 0;
		return 8;
	}
	var_103_int = -var_113_int;
}


void func_424(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object)
{
	func_455(0, var_10_object, var_11_object);
	func_455(1, var_12_object, var_13_object);
	func_455(2, var_14_object, var_15_object);
	func_455(3, var_16_object, var_17_object);
	func_455(4, var_18_object, var_19_object);
}


// @pe
void func_1580(bool var_243_bool, object var_244_object, object var_245_object)
{
	object var_247_object;
	var_244_object = var_247_object;
	int var_246_int;
	func_1506(var_246_int, var_247_object);
	int var_248_int; object var_249_object;
	var_245_object = var_249_object;
	func_1506(var_248_int, var_249_object);
	var_243_bool = var_246_int == var_248_int;
}


// @pe
void func_1325(string var_284_string, int var_285_int)
{
	if((var_285_int + 1) < 10)
		var_284_string = "r_slot0" + (var_285_int + 1);
	var_284_string = "r_slot" + (var_285_int + 1);
}


void func_690(int var_2_int)
{
	@SendMessage(var_2_int, "r_money_slot");
}


void func_1204(int var_1_int, int var_2_int, object var_4_object, object var_5_object, object var_6_object, int var_24_int, int var_25_int, object var_26_object, int var_542_int)
{
	int var_543_int; object var_544_object; int var_545_int; int var_546_int; int var_547_int; int var_548_int; int var_552_int;
	var_6_object->size(var_548_int); //@t
	if((var_542_int + var_1_int) >= var_548_int)
		return 10;
	object var_549_object;
	var_4_object->get(var_549_object, (var_542_int + var_1_int)); //@t
	bool var_556_bool; object var_557_object;
	var_549_object = var_557_object;
	func_1602(var_556_bool, var_557_object, var_25_int, true);
	if(var_556_bool != 0)
		return 10;
	int var_550_int;
	var_6_object->get(var_550_int, (var_542_int + var_1_int)); //@t
	int var_551_int;
	var_5_object->get(var_551_int, (var_542_int + var_1_int)); //@t
	if(var_550_int > 0) {
		int var_564_int; object var_565_object;
		var_549_object = var_565_object;
		func_1445(var_564_int, var_565_object, var_25_int);
		float var_567_float;
		func_1377(var_567_float, var_26_object, var_24_int, var_25_int);
		var_552_int = var_564_int * var_567_float;
		if(var_552_int <= var_2_int) {
			bool var_572_bool; object var_573_object;
			func_792(var_543_int, var_544_object, var_545_int, var_546_int, var_547_int, var_548_int, var_573_object, var_550_int, var_551_int, var_552_int, var_572_bool, var_573_object);
			if(var_572_bool != 0) {
				var_550_int += -1;
				object var_575_object;
				var_549_object = var_575_object;
				func_0(var_551_int, var_552_int, var_575_object);
				var_6_object->set((var_542_int + var_1_int), var_550_int); //@t
				int var_578_int; object var_579_object;
				var_549_object = var_579_object;
				func_1445(var_578_int, var_579_object, var_25_int);
				var_581_int = -var_578_int;
				float var_582_float;
				func_1377(var_582_float, var_26_object, var_24_int, var_25_int);
				func_1001(var_551_int, var_552_int, (var_581_int * var_582_float));
			}
		}
	}
	func_521(var_550_int, var_551_int, var_552_int);
	func_604(var_549_object, var_550_int, var_551_int, var_552_int);
}
EMIT "Stack[-4] = 0";


void func_1077(int var_0_int, object var_7_object, object var_8_object, object var_9_object, int var_24_int, int var_25_int, object var_26_object, int var_383_int)
{
	int var_384_int; object var_385_object; int var_386_int; int var_387_int; int var_388_int; int var_389_int; int var_393_int;
	var_9_object->size(var_389_int); //@t
	if((var_383_int + var_0_int) >= var_389_int)
		return 10;
	object var_390_object;
	var_7_object->get(var_390_object, (var_383_int + var_0_int)); //@t
	bool var_397_bool; object var_398_object;
	var_390_object = var_398_object;
	func_1602(var_397_bool, var_398_object, var_25_int, false);
	if(var_397_bool != 0)
		return 10;
	int var_391_int;
	var_9_object->get(var_391_int, (var_383_int + var_0_int)); //@t
	int var_392_int;
	var_8_object->get(var_392_int, (var_383_int + var_0_int)); //@t
	if(var_391_int > 0) {
		bool var_405_bool; object var_406_object;
		func_853(var_384_int, var_385_object, var_386_int, var_387_int, var_388_int, var_389_int, var_406_object, var_391_int, var_392_int, var_393_int, var_405_bool, var_406_object);
		object var_455_object;
		var_390_object = var_455_object;
		func_24(var_392_int, var_393_int, var_455_object);
		var_391_int += -1;
		var_9_object->set((var_383_int + var_0_int), var_391_int); //@t
		int var_469_int; object var_470_object;
		var_390_object = var_470_object;
		func_1445(var_469_int, var_470_object, var_25_int);
		float var_472_float;
		func_1403(var_472_float, var_26_object, var_24_int, var_25_int);
		var_393_int = var_469_int * var_472_float;
		int var_476_int;
		var_393_int = var_476_int;
		func_1001(var_392_int, var_393_int, var_476_int);
	}
	func_521(var_391_int, var_392_int, var_393_int);
	func_604(var_390_object, var_391_int, var_392_int, var_393_int);
}
EMIT "Stack[-4] = 0";


void func_694(int var_3_int)
{
	@SendMessage(var_3_int, "l_money_slot");
}


// @pe
void func_1591(bool var_195_bool, object var_196_object, object var_197_object)
{
	object var_199_object;
	var_196_object = var_199_object;
	int var_198_int;
	func_1506(var_198_int, var_199_object);
	int var_200_int; object var_201_object;
	var_197_object = var_201_object;
	func_1506(var_200_int, var_201_object);
	var_195_bool = var_198_int == var_200_int;
}


void func_698(int var_2_int, int var_3_int, object var_20_object, object var_21_object, int var_25_int)
{
	bool var_766_bool; object var_767_object; object var_768_object;
	@GetContainer(var_768_object);
	object var_769_object;
	@GetPlayerContainer(var_769_object);
	int var_765_int;
	var_21_object->size(var_765_int); //@t
	int var_770_int = 0;
	
	while(var_770_int < var_765_int) {
		var_21_object->get(var_767_object, var_770_int); //@t
		bool var_773_bool; object var_774_object; object var_775_object; int var_776_int;
		var_769_object = var_774_object;
		var_767_object = var_775_object;
		int var_777_int; object var_778_object;
		var_767_object = var_778_object;
		func_1511(var_777_int, var_778_object);
		var_777_int = var_776_int;
		func_1652(var_773_bool, var_774_object, var_775_object, var_776_int);
		var_773_bool = var_766_bool;
		if(!var_766_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_793_bool; object var_794_object; object var_795_object;
		var_768_object = var_794_object;
		func_1677(var_793_bool, var_794_object, var_795_object, 0);
		var_793_bool = var_766_bool;
		if(!var_766_bool) //@nz
			@Trace("Error: failed to add item");
		var_770_int += 1;
	}
	
	var_20_object->size(var_765_int); //@t
	int var_771_int = 0;
	
	while(var_771_int < var_765_int) {
		var_20_object->get(var_795_object, var_771_int); //@t
		bool var_804_bool; object var_805_object; object var_806_object;
		var_768_object = var_805_object;
		var_767_object = var_806_object;
		func_1652(var_804_bool, var_805_object, var_806_object, 0);
		var_804_bool = var_766_bool;
		if(!var_766_bool) //@nz
			@Trace("Error: failed to remove item");
		bool var_810_bool; object var_811_object; object var_812_object; int var_813_int;
		var_769_object = var_811_object;
		var_767_object = var_812_object;
		int var_814_int; object var_815_object;
		var_767_object = var_815_object;
		func_1511(var_814_int, var_815_object);
		var_814_int = var_813_int;
		func_1677(var_810_bool, var_811_object, var_812_object, var_813_int);
		var_810_bool = var_766_bool;
		if(!var_766_bool) //@nz
			@Trace("Error: failed to add item");
		var_771_int += 1;
	}
	
	if(var_25_int == 0)
		@SetPlayerMoneyCount(var_2_int);
	var_3_int = 0;
	int var_758_int;
	bool var_759_bool;
	object var_760_object;
	object var_761_object;
	object var_762_object;
	int var_763_int;
	int var_764_int;
	func_242(var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_758_int, var_759_bool, var_760_object, var_761_object, var_762_object, var_763_int, var_764_int, var_765_int, var_766_bool, var_767_object, var_768_object, var_769_object, var_770_int, var_771_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1341(int var_32_int, string var_34_string)
{
	int var_36_int;
	
	while(0 < 18) {
		string var_39_string; int var_40_int;
		var_36_int = var_40_int;
		func_1309(var_39_string, var_40_int);
		if(var_34_string == var_39_string)
			var_36_int = var_32_int;
		var_36_int += 1;
	}
	
	var_32_int = -1;
}


void func_1602(bool var_180_bool, object var_181_object, int var_182_int, bool var_183_bool)
{
	if(var_182_int == 0) {
		var_180_bool = false;
		return 4;
	}
	int var_190_int; object var_191_object;
	var_181_object = var_191_object;
	func_1506(var_190_int, var_191_object);
	bool var_186_bool;
	@HasInvItemProperty(var_186_bool, var_190_int, ("BarterPrice" + var_182_int));
	if(!var_186_bool) { //@nz
		var_180_bool = true;
		return 4;
	}
	int var_197_int; object var_198_object;
	var_181_object = var_198_object;
	func_1506(var_197_int, var_198_object);
	int var_187_int;
	@GetInvItemProperty(var_187_int, var_197_int, ("BarterPrice" + var_182_int));
	bool var_201_bool = false;
	if(var_183_bool != 0) {
		if(var_187_int > 0)
			var_201_bool = true;
	}
	if(var_201_bool != 0) {
		var_180_bool = false;
		return 4;
	}
	bool var_205_bool = false;
	if(!var_183_bool) { //@nz
		if(var_187_int < 0)
			var_205_bool = true;
	}
	if(var_205_bool != 0) {
		var_180_bool = false;
		return 4;
	}
	var_180_bool = true;
}


void func_965(bool var_413_bool, object var_414_object, object var_415_object, object var_416_object)
{
	int var_421_int; object var_422_object; int var_424_int;
	var_415_object->size(var_421_int);
	int var_423_int = 0;
	
	for(;;) {
		if(!(var_423_int < var_421_int)) goto Label_998;
		var_415_object->get(var_422_object, var_423_int);
		var_416_object->get(var_424_int, var_423_int);
		bool var_426_bool; object var_427_object; object var_428_object;
		var_414_object = var_427_object;
		var_422_object = var_428_object;
		func_1591(var_426_bool, var_427_object, var_428_object);
		if(var_426_bool != 0) {
			var_424_int += -1;
			if(var_424_int == 0) {
				var_415_object->remove(var_423_int);
				var_416_object->remove(var_423_int);
				break;
			}
			var_416_object->set(var_423_int, var_424_int);
		}
		var_423_int += 1;
	}
	var_413_bool = true;
	
Label_998:
	var_413_bool = false;
}
EMIT "Stack[-3] = 0";


void func_455(int var_109_int, object var_110_object, object var_111_object)
{
	object var_116_object; int var_118_int; int var_119_int;
	int var_121_int;
	var_109_int = var_121_int;
	int var_120_int;
	func_1538(var_120_int, var_121_int);
	int var_117_int;
	var_120_int = var_117_int;
	
	while(0 < var_117_int) {
		int var_123_int; int var_124_int; int var_125_int;
		var_109_int = var_124_int;
		var_119_int = var_125_int;
		func_1555(var_123_int, var_124_int, var_125_int);
		var_123_int = var_118_int;
		object var_126_object; int var_127_int; int var_128_int;
		var_109_int = var_127_int;
		var_119_int = var_128_int;
		func_1546(var_126_object, var_127_int, var_128_int);
		var_126_object = var_116_object;
		var_110_object->add(var_116_object);
		var_111_object->add(var_118_int);
		var_119_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_1359(int var_477_int, string var_479_string)
{
	int var_481_int;
	
	while(0 < 18) {
		string var_484_string; int var_485_int;
		var_481_int = var_485_int;
		func_1325(var_484_string, var_485_int);
		if(var_479_string == var_484_string)
			var_481_int = var_477_int;
		var_481_int += 1;
	}
	
	var_477_int = -1;
}


void func_339(void)
{
	func_360(var_28_float, var_39_int, var_40_int, 0);
	func_360(var_28_float, var_39_int, var_40_int, 1);
	func_360(var_28_float, var_39_int, var_40_int, 2);
	func_360(var_28_float, var_39_int, var_40_int, 3);
	func_360(var_28_float, var_39_int, var_40_int, 4);
}


void func_853(object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, bool var_405_bool, object var_406_object)
{
	object var_410_object;
	var_406_object = var_410_object;
	int var_409_int;
	func_1511(var_409_int, var_410_object);
	int var_408_int;
	var_409_int = var_408_int;
	if(var_408_int == 0) {
		bool var_413_bool; object var_414_object;
		var_406_object = var_414_object;
		func_965(var_413_bool, var_414_object, var_10_object, var_11_object);
		var_413_bool = var_405_bool;
		return 2;
	EMIT "GOTO 0x38a";
	}
	if(var_408_int == 1) {
		bool var_435_bool; object var_436_object;
		var_406_object = var_436_object;
		func_965(var_435_bool, var_436_object, var_12_object, var_13_object);
		var_435_bool = var_405_bool;
		return 2;
	EMIT "GOTO 0x38a";
	}
	if(var_408_int == 2) {
		bool var_441_bool; object var_442_object;
		var_406_object = var_442_object;
		func_965(var_441_bool, var_442_object, var_14_object, var_15_object);
		var_441_bool = var_405_bool;
		return 2;
	EMIT "GOTO 0x38a";
	}
	if(var_408_int == 3) {
		bool var_447_bool; object var_448_object;
		var_406_object = var_448_object;
		func_965(var_447_bool, var_448_object, var_16_object, var_17_object);
		var_447_bool = var_405_bool;
		return 2;
	}
	bool var_451_bool; object var_452_object;
	var_406_object = var_452_object;
	func_965(var_451_bool, var_452_object, var_18_object, var_19_object);
	var_451_bool = var_405_bool;
}


void func_604(int var_1_int, object var_4_object, object var_5_object, int var_25_int)
{
	int var_242_int; object var_243_object; int var_244_int; int var_245_int; int var_247_int;
	var_4_object->size(var_242_int); //@t
	if((var_1_int + 18) > var_242_int) {
		var_252_int = var_242_int % 2;
		if(var_252_int == 0)
			var_1_int -= ((var_1_int + 18) - var_242_int);
		else
			var_1_int -= (((var_1_int + 18) - var_242_int) - 1);
	}
	if(var_1_int < 0)
		var_1_int = 0;
	int var_246_int = var_1_int;
	
	for(;;) {
		if(var_246_int < (var_1_int + 18)) {
			if(var_246_int < var_242_int) {
				var_4_object->get(var_243_object, var_246_int); //@t
				var_5_object->get(var_245_int, var_246_int); //@t
				var_244_int = 0;
				int var_264_int;
				func_1296(var_246_int, var_247_int, var_264_int, (var_246_int - var_1_int));
				var_264_int = var_247_int;
				if(var_247_int > 0)
					var_244_int = var_244_int | 16384;
				bool var_276_bool; object var_277_object;
				func_1602(var_276_bool, var_277_object, var_25_int, true);
				if(var_276_bool != 0)
					var_244_int = var_244_int | 131072;
				string var_284_string;
				func_1325(var_284_string, (var_246_int - var_1_int));
				@SendMessage(((var_245_int - var_247_int) | 65536), var_284_string);
				string var_296_string;
				func_1325(var_296_string, (var_246_int - var_1_int));
				@SendMessage(var_244_int, var_296_string, var_277_object);
			} else {
			string var_300_string;
			func_1325(var_300_string, (var_246_int - var_1_int));
			@SendMessage(32768, var_300_string);
		}

		}
		var_246_int += 1;
	}
	
}
EMIT "Stack[-5] = 0";


void func_1377(float var_521_float, object var_522_object, int var_523_int, int var_524_int)
{
	bool var_530_bool;
	if(var_524_int != 0)
		var_521_float = 1;
	float var_528_float = 1;
	int var_529_int = 1;
	
	while(var_529_int <= var_523_int) {
		var_522_object->HasProperty(("sellf" + var_529_int), var_530_bool);
		if(var_530_bool != 0)
			var_522_object->GetProperty(("sellf" + var_529_int), var_528_float);
		var_529_int += 1;
	}
	
	var_521_float = var_528_float / 100;
}


void func_1506(int var_190_int, object var_191_object)
{
	int var_193_int;
	var_191_object->GetItemID(var_193_int);
	var_193_int = var_190_int;
}


void func_485(object var_7_object, int var_716_int)
{
	int var_719_int;
	var_7_object->size(var_719_int); //@t
	if(((((var_719_int + 2) - 1) / 2) - 9) < 0)
		var_716_int = 0;
	int var_720_int = var_716_int;
}


void func_1511(int var_165_int, object var_166_object)
{
	object var_170_object;
	var_166_object = var_170_object;
	int var_169_int;
	func_1506(var_169_int, var_170_object);
	int var_168_int;
	@GetInvItemProperty(var_168_int, var_169_int, "Category");
	var_168_int = var_165_int;
}


void func_360(object var_4_object, object var_5_object, object var_6_object, int var_73_int)
{
	object var_78_object; int var_80_int; int var_81_int;
	int var_83_int;
	var_73_int = var_83_int;
	int var_82_int;
	func_1538(var_82_int, var_83_int);
	int var_79_int;
	var_82_int = var_79_int;
	
	while(0 < var_79_int) {
		int var_89_int; int var_90_int; int var_91_int;
		var_73_int = var_90_int;
		var_81_int = var_91_int;
		func_1555(var_89_int, var_90_int, var_91_int);
		var_89_int = var_80_int;
		object var_96_object; int var_97_int; int var_98_int;
		var_73_int = var_97_int;
		var_81_int = var_98_int;
		func_1546(var_96_object, var_97_int, var_98_int);
		var_96_object = var_78_object;
		var_4_object->add(var_78_object); //@t
		var_5_object->add(var_80_int); //@t
		var_6_object->add(0); //@t
		var_81_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_1001(int var_2_int, int var_3_int, int var_251_int)
{
	var_2_int += var_251_int;
	var_3_int -= var_251_int;
	func_690(var_251_int);
	func_694(var_251_int);
}


void func_1521(int var_186_int, object var_187_object)
{
	object var_191_object;
	var_187_object = var_191_object;
	int var_190_int;
	func_1506(var_190_int, var_191_object);
	int var_189_int;
	@GetItemMaxStackSize(var_190_int, var_189_int);
	var_189_int = var_186_int;
}


void func_242(int var_0_int, int var_1_int, int var_2_int, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, int var_25_int)
{
	var_0_int = 0;
	var_1_int = 0;
	var_3_int = 0;
	if(var_25_int == 0)
		@GetPlayerMoneyCount(var_2_int);
	else
		var_2_int = 0;
	var_20_object->clear(); //@t
	var_21_object->clear(); //@t
	var_4_object->clear(); //@t
	var_5_object->clear(); //@t
	var_6_object->clear(); //@t
	var_7_object->clear(); //@t
	var_8_object->clear(); //@t
	var_9_object->clear(); //@t
	var_10_object->clear(); //@t
	var_11_object->clear(); //@t
	var_12_object->clear(); //@t
	var_13_object->clear(); //@t
	var_14_object->clear(); //@t
	var_15_object->clear(); //@t
	var_16_object->clear(); //@t
	var_17_object->clear(); //@t
	var_18_object->clear(); //@t
	var_19_object->clear(); //@t
	int var_39_int;
	int var_40_int;
	func_393(var_28_float, var_39_int, var_40_int);
	func_339();
	func_424(var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_float, var_28_float, var_39_int, var_40_int);
	func_521(var_28_float, var_39_int, var_40_int);
	func_694(var_40_int);
	func_604(var_27_float, var_28_float, var_39_int, var_40_int);
	func_690(var_40_int);
	var_7_object->size(var_40_int); //@t
	if(var_40_int <= 18)
		@SendMessage(16384, "l_scrollbar");
	else
		@SendMessage(0, "l_scrollbar");

	var_4_object->size(var_40_int); //@t
	if(var_40_int <= 18)
		@SendMessage(16384, "r_scrollbar");
	else
		@SendMessage(0, "r_scrollbar");

	
}


void func_1011(int var_0_int, int var_2_int, object var_7_object, object var_8_object, object var_9_object, int var_24_int, int var_25_int, object var_26_object, int var_57_int)
{
	int var_58_int; object var_59_object; int var_60_int; int var_61_int; int var_62_int; int var_63_int; int var_67_int;
	var_9_object->size(var_63_int); //@t
	if((var_57_int + var_0_int) >= var_63_int)
		return 10;
	object var_64_object;
	var_7_object->get(var_64_object, (var_57_int + var_0_int)); //@t
	bool var_71_bool; object var_72_object;
	var_64_object = var_72_object;
	func_1602(var_71_bool, var_72_object, var_25_int, false);
	if(var_71_bool != 0)
		return 10;
	int var_65_int;
	var_9_object->get(var_65_int, (var_57_int + var_0_int)); //@t
	int var_66_int;
	var_8_object->get(var_66_int, (var_57_int + var_0_int)); //@t
	if(var_65_int < var_66_int) {
		int var_103_int; object var_104_object;
		var_64_object = var_104_object;
		func_1445(var_103_int, var_104_object, var_25_int);
		float var_140_float;
		func_1403(var_140_float, var_26_object, var_24_int, var_25_int);
		var_67_int = var_103_int * var_140_float;
		if(var_67_int <= var_2_int) {
			bool var_161_bool; object var_162_object;
			func_792(var_58_int, var_59_object, var_60_int, var_61_int, var_62_int, var_63_int, var_162_object, var_65_int, var_66_int, var_67_int, var_161_bool, var_162_object);
			if(var_161_bool != 0) {
				var_65_int += 1;
				var_9_object->set((var_57_int + var_0_int), var_65_int); //@t
				object var_235_object;
				var_64_object = var_235_object;
				func_0(var_66_int, var_67_int, var_235_object);
				int var_251_int = -var_67_int;
				func_1001(var_66_int, var_67_int, var_251_int);
			}
		}
	}
	func_521(var_65_int, var_66_int, var_67_int);
	func_604(var_64_object, var_65_int, var_66_int, var_67_int);
}
EMIT "Stack[-4] = 0";


void func_1652(bool var_773_bool, object var_774_object, object var_775_object, int var_776_int)
{
	int var_782_int; object var_783_object;
	var_774_object->GetItemCount(var_782_int, var_776_int);
	int var_784_int = 0;
	
	while(var_784_int < var_782_int) {
		var_774_object->GetItem(var_783_object, var_784_int, var_776_int);
		bool var_786_bool; object var_787_object; object var_788_object;
		var_775_object = var_787_object;
		var_783_object = var_788_object;
		func_1580(var_786_bool, var_787_object, var_788_object);
		if(var_786_bool != 0) {
			var_774_object->RemoveItem(var_784_int, 1, var_776_int);
			var_773_bool = true;
		}
		var_784_int += 1;
	}
	
	var_773_bool = false;
}
EMIT "Stack[-2] = 0";


void func_1141(int var_1_int, object var_4_object, object var_5_object, object var_6_object, int var_24_int, int var_25_int, object var_26_object, int var_492_int)
{
	int var_493_int; object var_494_object; int var_495_int; int var_496_int; int var_497_int; int var_498_int; int var_502_int;
	var_6_object->size(var_498_int); //@t
	if((var_492_int + var_1_int) >= var_498_int)
		return 10;
	object var_499_object;
	var_4_object->get(var_499_object, (var_492_int + var_1_int)); //@t
	bool var_506_bool; object var_507_object;
	var_499_object = var_507_object;
	func_1602(var_506_bool, var_507_object, var_25_int, true);
	if(var_506_bool != 0)
		return 10;
	int var_500_int;
	var_6_object->get(var_500_int, (var_492_int + var_1_int)); //@t
	int var_501_int;
	var_5_object->get(var_501_int, (var_492_int + var_1_int)); //@t
	if(var_500_int < var_501_int) {
		bool var_513_bool; object var_514_object;
		func_853(var_493_int, var_494_object, var_495_int, var_496_int, var_497_int, var_498_int, var_514_object, var_500_int, var_501_int, var_502_int, var_513_bool, var_514_object);
		object var_515_object;
		var_499_object = var_515_object;
		func_24(var_501_int, var_502_int, var_515_object);
		var_500_int += 1;
		var_6_object->set((var_492_int + var_1_int), var_500_int); //@t
		int var_518_int; object var_519_object;
		var_499_object = var_519_object;
		func_1445(var_518_int, var_519_object, var_25_int);
		float var_521_float;
		func_1377(var_521_float, var_26_object, var_24_int, var_25_int);
		var_502_int = var_518_int * var_521_float;
		int var_541_int;
		var_502_int = var_541_int;
		func_1001(var_501_int, var_502_int, var_541_int);
	}
	func_521(var_500_int, var_501_int, var_502_int);
	func_604(var_499_object, var_500_int, var_501_int, var_502_int);
}
EMIT "Stack[-4] = 0";


void func_503(object var_4_object, int var_737_int)
{
	int var_740_int;
	var_4_object->size(var_740_int); //@t
	if(((((var_740_int + 2) - 1) / 2) - 9) < 0)
		var_737_int = 0;
	int var_741_int = var_737_int;
}


void func_1530(int var_53_int)
{
	object var_57_object;
	@GetContainer(var_57_object);
	int var_56_int;
	var_57_object->GetItemCount(var_56_int);
	var_56_int = var_53_int;
}
EMIT "Stack[-1] = 0";


void func_1403(float var_140_float, object var_141_object, int var_142_int, int var_143_int)
{
	bool var_149_bool;
	if(var_143_int != 0)
		var_140_float = 1;
	float var_147_float = 1;
	int var_148_int = 1;
	
	while(var_148_int <= var_142_int) {
		var_141_object->HasProperty(("buyf" + var_148_int), var_149_bool);
		if(var_149_bool != 0)
			var_141_object->GetProperty(("buyf" + var_148_int), var_147_float);
		var_148_int += 1;
	}
	
	var_140_float = var_147_float / 100;
}


