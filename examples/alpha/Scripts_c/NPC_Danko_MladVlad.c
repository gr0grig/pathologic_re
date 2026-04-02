// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		func_8865();
		bool var_41_bool;
		func_7060(var_41_bool);
		if(!var_41_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_7125("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_41_object;
		var_40_bool = var_41_object;
		func_8869(var_41_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_42_object;
		var_40_bool = var_42_object;
		bool var_41_bool;
		func_7048(var_41_bool, var_42_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_40_string == 484) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7723();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7296();
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(416); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(417, 487, 485); //@t
				var_0_object->AddReply(418, 9271, 486); //@t
				return 0;
			}
			if(var_40_string == 487) {
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(420, 9271, 488); //@t
				var_0_object->AddReply(421, 9271, 489); //@t
				var_0_object->AddReply(422, 9271, 490); //@t
				return 0;
			}
			if(var_40_string == 9271) {
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(8445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8446, -1, 9275); //@t
				var_0_object->AddReply(8447, -1, 9276); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_7232(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_bool == 6555) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7830();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7252();
				object var_103_object = var_1_object;
				func_7348(var_0_object);
			}
			if(var_41_bool == 6567) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_7830();
			}
			if(var_41_bool == 6552) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_7830();
			}
			if(var_41_bool == 6553) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_7830();
			}
			if(var_41_bool == 6523) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_7824();
			}
			if(var_41_bool == 6710) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_7246();
				object var_153_object = var_1_object;
				func_7279(var_0_object);
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_7290();
			}
			if(var_41_bool == 6711) {
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_7246();
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_7290();
				object var_172_object = var_1_object;
				func_7279(var_0_object);
			}
			if(var_41_bool == 6712) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_7246();
			}
			if(var_41_bool == 16488) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_7252();
				object var_182_object = var_1_object;
				func_7348(var_0_object);
			}
			if(var_41_bool == 9043) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_7234();
			}
			if(var_41_bool == 9046) {
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_7836();
			}
			if(var_41_bool == 9049) {
				object var_198_object; object var_199_object;
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_7729();
			}
			if(var_41_bool == 9052) {
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_7735();
			}
			if(var_41_bool == 9054) {
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_7741();
			}
			if(var_41_bool == 9057) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_7747();
			}
			if(var_41_bool == 9058) {
				object var_222_object; object var_223_object;
				var_222_object = var_1_object;
				var_223_object = var_0_object;
				func_7753();
			}
			if(var_41_bool == 9061) {
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_object;
				func_7759();
			}
			if(var_41_bool == 9064) {
				object var_234_object; object var_235_object;
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_7765();
			}
			if(var_40_string == 6276) {
				bool var_240_bool = false;
				bool var_241_bool;
				func_8541(var_1_object);
				if(var_241_bool != 0) {
					bool var_249_bool;
					func_7866(var_1_object);
					if(var_249_bool != 0)
						var_240_bool = true;
				}
				if(var_240_bool != 0) {
					func_693(var_41_bool, "Neutral");
					var_0_object->SetMessage(5694); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5695, 6518, 6277); //@t
					var_0_object->AddReply(5698, -1, 6280); //@t
					var_0_object->AddReply(5930, 6526, 6525); //@t
					return 0;
				}
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5699); //@t
				var_0_object->ClearReplies(); //@t
				bool var_282_bool = false;
				bool var_283_bool = false;
				bool var_284_bool;
				func_7842(var_1_object);
				if(var_284_bool != 0) {
					bool var_290_bool;
					func_7878(var_1_object);
					if(var_290_bool != 0)
						var_283_bool = true;
				}
				if(var_283_bool != 0) {
					bool var_296_bool;
					func_7890(var_1_object);
					if(!var_296_bool) //@nz
						var_282_bool = true;
				}
				if(var_282_bool != 0)
					var_0_object->AddReply(5697, 6705, 6279); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_7866(var_1_object);
				if(var_307_bool != 0) {
					bool var_309_bool;
					func_8541(var_1_object);
					if(!var_309_bool) //@nz
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(5700, 16487, 6282); //@t
				bool var_315_bool = false;
				bool var_316_bool;
				func_8565(var_1_object);
				if(var_316_bool != 0) {
					bool var_322_bool;
					func_7854(var_1_object);
					if(var_322_bool != 0)
						var_315_bool = true;
				}
				if(var_315_bool != 0)
					var_0_object->AddReply(8220, 6283, 9043); //@t
				bool var_331_bool = false;
				bool var_332_bool;
				func_8505(var_1_object);
				if(var_332_bool != 0) {
					bool var_338_bool;
					func_8553(var_1_object);
					if(var_338_bool != 0)
						var_331_bool = true;
				}
				if(var_331_bool != 0)
					var_0_object->AddReply(8223, 6294, 9046); //@t
				bool var_347_bool = false;
				bool var_348_bool;
				func_8361(var_1_object);
				if(var_348_bool != 0) {
					bool var_354_bool;
					func_8373(var_1_object);
					if(var_354_bool != 0)
						var_347_bool = true;
				}
				if(var_347_bool != 0)
					var_0_object->AddReply(8226, 9070, 9049); //@t
				bool var_363_bool = false;
				bool var_364_bool;
				func_8481(var_1_object);
				if(var_364_bool != 0) {
					bool var_370_bool;
					func_8385(var_1_object);
					if(var_370_bool != 0)
						var_363_bool = true;
				}
				if(var_363_bool != 0)
					var_0_object->AddReply(8229, 9071, 9052); //@t
				bool var_379_bool = false;
				bool var_380_bool;
				func_8349(var_1_object);
				if(var_380_bool != 0) {
					bool var_386_bool;
					func_8397(var_1_object);
					if(var_386_bool != 0)
						var_379_bool = true;
				}
				if(var_379_bool != 0)
					var_0_object->AddReply(8231, 9072, 9054); //@t
				bool var_395_bool = false;
				bool var_396_bool;
				func_8325(var_1_object);
				if(var_396_bool != 0) {
					bool var_402_bool;
					func_8409(var_1_object);
					if(var_402_bool != 0)
						var_395_bool = true;
				}
				if(var_395_bool != 0)
					var_0_object->AddReply(8234, 9073, 9057); //@t
				bool var_411_bool = false;
				bool var_412_bool;
				func_7984(var_1_object);
				if(var_412_bool != 0) {
					bool var_418_bool;
					func_8421(var_1_object);
					if(var_418_bool != 0)
						var_411_bool = true;
				}
				if(var_411_bool != 0)
					var_0_object->AddReply(8235, 9074, 9058); //@t
				bool var_427_bool = false;
				bool var_428_bool;
				func_8337(var_1_object);
				if(var_428_bool != 0) {
					bool var_434_bool;
					func_8433(var_1_object);
					if(var_434_bool != 0)
						var_427_bool = true;
				}
				if(var_427_bool != 0)
					var_0_object->AddReply(8238, 9075, 9061); //@t
				bool var_443_bool = false;
				bool var_444_bool;
				func_8493(var_1_object);
				if(var_444_bool != 0) {
					bool var_450_bool;
					func_8445(var_1_object);
					if(var_450_bool != 0)
						var_443_bool = true;
				}
				if(var_443_bool != 0)
					var_0_object->AddReply(8241, 9076, 9064); //@t
				bool var_459_bool = false;
				bool var_460_bool;
				func_8469(var_1_object);
				if(var_460_bool != 0) {
					bool var_466_bool;
					func_8457(var_1_object);
					if(var_466_bool != 0)
						var_459_bool = true;
				}
				if(var_459_bool != 0)
					var_0_object->AddReply(8246, 9077, 9069); //@t
				var_0_object->AddReply(6265, -1, 6932); //@t
				return 0;
			}
			if(var_40_string == 9077) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8254); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15212, -1, 16489); //@t
				return 0;
			}
			if(var_40_string == 9076) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15213, -1, 16490); //@t
				return 0;
			}
			if(var_40_string == 9075) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15214, -1, 16491); //@t
				return 0;
			}
			if(var_40_string == 9074) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15215, -1, 16492); //@t
				return 0;
			}
			if(var_40_string == 9073) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15216, -1, 16493); //@t
				return 0;
			}
			if(var_40_string == 9072) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15217, -1, 16494); //@t
				return 0;
			}
			if(var_40_string == 9071) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15218, -1, 16495); //@t
				return 0;
			}
			if(var_40_string == 9070) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(8247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15219, -1, 16496); //@t
				return 0;
			}
			if(var_40_string == 6294) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5711); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5712, 6296, 6295); //@t
				var_0_object->AddReply(5717, 6296, 6300); //@t
				var_0_object->AddReply(5718, -1, 6302); //@t
				return 0;
			}
			if(var_40_string == 6296) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5713); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5714, 6298, 6297); //@t
				var_0_object->AddReply(5716, -1, 6299); //@t
				return 0;
			}
			if(var_40_string == 6298) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5715); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5719, -1, 6303); //@t
				return 0;
			}
			if(var_40_string == 6283) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5702, 6285, 6284); //@t
				return 0;
			}
			if(var_40_string == 6285) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5704, 6287, 6286); //@t
				var_0_object->AddReply(5710, 6287, 6292); //@t
				return 0;
			}
			if(var_40_string == 6287) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5706, 6289, 6288); //@t
				return 0;
			}
			if(var_40_string == 6289) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5708, -1, 6290); //@t
				var_0_object->AddReply(5709, -1, 6291); //@t
				return 0;
			}
			if(var_40_string == 16487) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(15210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15211, -1, 16488); //@t
				return 0;
			}
			if(var_40_string == 6705) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(6076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6077, 6708, 6706); //@t
				var_0_object->AddReply(6078, 6708, 6707); //@t
				return 0;
			}
			if(var_40_string == 6708) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(6079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6080, -1, 6710); //@t
				var_0_object->AddReply(6081, -1, 6711); //@t
				var_0_object->AddReply(6082, -1, 6712); //@t
				return 0;
			}
			if(var_40_string == 6526) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5932, 6518, 6527); //@t
				var_0_object->AddReply(5933, -1, 6528); //@t
				return 0;
			}
			if(var_40_string == 6518) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5923); //@t
				var_0_object->ClearReplies(); //@t
				bool var_642_bool;
				func_8517(var_1_object);
				if(var_642_bool != 0)
					var_0_object->AddReply(5924, 6530, 6519); //@t
				var_0_object->AddReply(5925, 6522, 6520); //@t
				var_0_object->AddReply(5926, 6522, 6521); //@t
				return 0;
			}
			if(var_40_string == 6522) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5929, 6530, 6524); //@t
				bool var_664_bool;
				func_8529(var_1_object);
				if(!var_664_bool) //@nz
					var_0_object->AddReply(5928, 6934, 6523); //@t
				return 0;
			}
			if(var_40_string == 6934) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(6266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6267, 6530, 6935); //@t
				return 0;
			}
			if(var_40_string == 6530) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5937, 6535, 6534); //@t
				var_0_object->AddReply(5935, 6533, 6532); //@t
				return 0;
			}
			if(var_40_string == 6533) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5936); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5939, 6535, 6536); //@t
				return 0;
			}
			if(var_40_string == 6535) {
				object var_700_object; object var_701_object;
				var_700_object = var_1_object;
				var_701_object = var_0_object;
				func_7240();
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5938); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5940, 6539, 6538); //@t
				var_0_object->AddReply(5965, 6569, 6568); //@t
				return 0;
			}
			if(var_40_string == 6569) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5967, 6539, 6570); //@t
				return 0;
			}
			if(var_40_string == 6539) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5945, 6544, 6543); //@t
				var_0_object->AddReply(5942, 6541, 6540); //@t
				return 0;
			}
			if(var_40_string == 6541) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5944, 6544, 6542); //@t
				var_0_object->AddReply(5957, 6557, 6556); //@t
				return 0;
			}
			if(var_40_string == 6557) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5959, 6544, 6558); //@t
				var_0_object->AddReply(5960, 6544, 6559); //@t
				return 0;
			}
			if(var_40_string == 6544) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5947, 6546, 6545); //@t
				var_0_object->AddReply(5949, 6562, 6548); //@t
				return 0;
			}
			if(var_40_string == 6562) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5962, 6546, 6563); //@t
				var_0_object->AddReply(5963, 6554, 6564); //@t
				return 0;
			}
			if(var_40_string == 6546) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5950, 6554, 6549); //@t
				var_0_object->AddReply(5951, 6551, 6550); //@t
				return 0;
			}
			if(var_40_string == 6551) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5969, 6554, 6573); //@t
				var_0_object->AddReply(5953, -1, 6552); //@t
				var_0_object->AddReply(5954, -1, 6553); //@t
				return 0;
			}
			if(var_40_string == 6554) {
				func_693(var_41_bool, "Neutral");
				var_0_object->SetMessage(5955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5956, -1, 6555); //@t
				var_0_object->AddReply(5964, -1, 6567); //@t
				return 0;
			}
			var_3_string = true;
			bool var_802_bool;
			func_7232(var_802_bool);
			if(var_802_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2c6";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_bool == 8567) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7302();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7326();
			}
			if(var_41_bool == 8569) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_7302();
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_7326();
			}
			if(var_41_bool == 8566) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_7302();
			}
			if(var_41_bool == 8574) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_7302();
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_7326();
			}
			if(var_41_bool == 8576) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7326();
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_7302();
			}
			if(var_41_bool == 8572) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_7326();
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_7302();
			}
			if(var_41_bool == 8297) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_7308();
				object var_88_object = var_1_object;
				func_7279(var_0_object);
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_7290();
			}
			if(var_41_bool == 8298) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_7308();
				object var_105_object = var_1_object;
				func_7279(var_0_object);
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_7290();
			}
			if(var_41_bool == 8553) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_7308();
				object var_113_object = var_1_object;
				func_7279(var_0_object);
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_7290();
			}
			if(var_41_bool == 8549) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_7314();
			}
			if(var_41_bool == 8552) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_7314();
			}
			if(var_41_bool == 8560) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_7320();
			}
			if(var_40_string == 7641) {
				bool var_135_bool = false;
				bool var_136_bool;
				func_7924(var_1_object);
				if(var_136_bool != 0) {
					bool var_144_bool;
					func_7912(var_1_object);
					if(!var_144_bool) //@nz
						var_135_bool = true;
				}
				if(var_135_bool != 0) {
					func_2166(var_41_bool, "Neutral");
					var_0_object->SetMessage(6935); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(7509, 8291, 8290); //@t
					var_0_object->AddReply(7518, 8300, 8299); //@t
					return 0;
				}
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(6929); //@t
				var_0_object->ClearReplies(); //@t
				bool var_175_bool = false;
				bool var_176_bool;
				func_7936(var_1_object);
				if(var_176_bool != 0) {
					bool var_182_bool;
					func_7912(var_1_object);
					if(var_182_bool != 0)
						var_175_bool = true;
				}
				if(var_175_bool != 0)
					var_0_object->AddReply(6930, 7637, 7636); //@t
				bool var_187_bool;
				func_7948(var_1_object);
				if(var_187_bool != 0)
					var_0_object->AddReply(6938, 7645, 7644); //@t
				bool var_196_bool;
				func_7960(var_1_object);
				if(var_196_bool != 0)
					var_0_object->AddReply(6940, 7647, 7646); //@t
				bool var_205_bool;
				func_7972(var_1_object);
				if(var_205_bool != 0)
					var_0_object->AddReply(7776, 8568, 8577); //@t
				var_0_object->AddReply(7746, -1, 8547); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x876";
			EMIT "Pop(1)";
			EMIT "Push((int) 9500)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9501)";
			EMIT "Push((int) 10445)";
			EMIT "Push((int) 10444)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9514)";
			EMIT "Push((int) 10458)";
			EMIT "Push((int) 10457)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_40_string == 10458) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(9515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9516, -1, 10459); //@t
				return 0;
			}
			if(var_40_string == 10445) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(9502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9503, 10447, 10446); //@t
				var_0_object->AddReply(9510, -1, 10453); //@t
				var_0_object->AddReply(9511, 10455, 10454); //@t
				return 0;
			}
			if(var_40_string == 10455) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(9512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9513, -1, 10456); //@t
				return 0;
			}
			if(var_40_string == 10447) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(9504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9505, 10449, 10448); //@t
				var_0_object->AddReply(9509, -1, 10452); //@t
				return 0;
			}
			if(var_40_string == 10449) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(9506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9507, -1, 10450); //@t
				var_0_object->AddReply(9508, -1, 10451); //@t
				return 0;
			}
			if(var_40_string == 7647) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(6941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7755, 8557, 8556); //@t
				return 0;
			}
			if(var_40_string == 8557) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7756); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7757, 8559, 8558); //@t
				return 0;
			}
			if(var_40_string == 8559) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7758); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7759, -1, 8560); //@t
				return 0;
			}
			if(var_40_string == 7645) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(6939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7748, -1, 8549); //@t
				var_0_object->AddReply(7749, 8551, 8550); //@t
				return 0;
			}
			if(var_40_string == 8551) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7751, -1, 8552); //@t
				return 0;
			}
			if(var_40_string == 7637) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(6931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6932, 7639, 7638); //@t
				var_0_object->AddReply(7752, -1, 8553); //@t
				return 0;
			}
			if(var_40_string == 7639) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(6933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7753, 8555, 8554); //@t
				return 0;
			}
			if(var_40_string == 8555) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7754); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6934, 8296, 7640); //@t
				return 0;
			}
			if(var_40_string == 8296) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7516, -1, 8297); //@t
				var_0_object->AddReply(7517, -1, 8298); //@t
				return 0;
			}
			if(var_40_string == 8300) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7520, 8295, 8301); //@t
				return 0;
			}
			if(var_40_string == 8291) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7511, 8293, 8292); //@t
				return 0;
			}
			if(var_40_string == 8293) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7513, 8295, 8294); //@t
				return 0;
			}
			if(var_40_string == 8295) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7760, 8562, 8561); //@t
				return 0;
			}
			if(var_40_string == 8562) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7762, 8565, 8563); //@t
				var_0_object->AddReply(7763, 8568, 8564); //@t
				return 0;
			}
			if(var_40_string == 8568) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7769, 8571, 8570); //@t
				var_0_object->AddReply(7772, 8575, 8573); //@t
				bool var_384_bool;
				func_7924(var_1_object);
				if(var_384_bool != 0)
					var_0_object->AddReply(7771, -1, 8572); //@t
				return 0;
			}
			if(var_40_string == 8575) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7774); //@t
				var_0_object->ClearReplies(); //@t
				bool var_393_bool;
				func_7924(var_1_object);
				if(var_393_bool != 0)
					var_0_object->AddReply(7775, -1, 8576); //@t
				return 0;
			}
			if(var_40_string == 8571) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7770); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7773, -1, 8574); //@t
				return 0;
			}
			if(var_40_string == 8565) {
				func_2166(var_41_bool, "Neutral");
				var_0_object->SetMessage(7764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7766, -1, 8567); //@t
				var_0_object->AddReply(7768, -1, 8569); //@t
				var_0_object->AddReply(7765, -1, 8566); //@t
				return 0;
			}
			var_3_string = true;
			bool var_418_bool;
			func_7232(var_418_bool);
			if(var_418_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x887";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_bool == 11379) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7380();
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_7382();
				object var_93_object = var_1_object;
				func_7364(var_0_object);
			}
			if(var_41_bool == 11380) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_7380();
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_7382();
				object var_125_object = var_1_object;
				func_7364(var_0_object);
			}
			if(var_41_bool == 11383) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_7382();
				object var_131_object = var_1_object;
				func_7364(var_0_object);
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_7380();
			}
			if(var_40_string == 11258) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10212); //@t
				var_0_object->ClearReplies(); //@t
				bool var_153_bool = false;
				bool var_154_bool;
				func_7996(var_1_object);
				if(var_154_bool != 0) {
					bool var_162_bool;
					func_8008(var_1_object);
					if(var_162_bool != 0)
						var_153_bool = true;
				}
				if(var_153_bool != 0)
					var_0_object->AddReply(10213, 11260, 11259); //@t
				var_0_object->AddReply(10302, 11359, 11358); //@t
				var_0_object->AddReply(10334, 11395, 11394); //@t
				return 0;
			}
			if(var_40_string == 11395) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10336, 11399, 11396); //@t
				var_0_object->AddReply(10337, 11398, 11397); //@t
				return 0;
			}
			if(var_40_string == 11398) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10341, 11402, 11401); //@t
				return 0;
			}
			if(var_40_string == 11399) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10339); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10340, 11402, 11400); //@t
				return 0;
			}
			if(var_40_string == 11402) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10342); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10343, -1, 11404); //@t
				var_0_object->AddReply(10344, 11406, 11405); //@t
				return 0;
			}
			if(var_40_string == 11406) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10346, -1, 11407); //@t
				return 0;
			}
			if(var_40_string == 11359) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10304, 11039, 11360); //@t
				return 0;
			}
			if(var_40_string == 11039) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10018, 11041, 11040); //@t
				var_0_object->AddReply(10028, -1, 11050); //@t
				return 0;
			}
			if(var_40_string == 11041) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10020, 11043, 11042); //@t
				var_0_object->AddReply(10027, -1, 11049); //@t
				return 0;
			}
			if(var_40_string == 11043) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10022, 11045, 11044); //@t
				var_0_object->AddReply(10026, -1, 11048); //@t
				return 0;
			}
			if(var_40_string == 11045) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10024, -1, 11046); //@t
				var_0_object->AddReply(10025, -1, 11047); //@t
				return 0;
			}
			if(var_40_string == 11260) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10305, 11364, 11361); //@t
				var_0_object->AddReply(10306, 11363, 11362); //@t
				return 0;
			}
			if(var_40_string == 11363) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10307); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_40_string == 11364) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10309, 11370, 11365); //@t
				var_0_object->AddReply(10311, 11366, 11367); //@t
				return 0;
			}
			if(var_40_string == 11366) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10310); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10312, 11371, 11369); //@t
				return 0;
			}
			if(var_40_string == 11370) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10315, 11371, 11372); //@t
				var_0_object->AddReply(10316, -1, 11373); //@t
				return 0;
			}
			if(var_40_string == 11371) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10317, 11376, 11375); //@t
				var_0_object->AddReply(10323, 11376, 11381); //@t
				return 0;
			}
			if(var_40_string == 11376) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10319, 11378, 11377); //@t
				var_0_object->AddReply(10324, -1, 11383); //@t
				return 0;
			}
			if(var_40_string == 11378) {
				func_3098(var_41_bool, "Neutral");
				var_0_object->SetMessage(10320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10321, -1, 11379); //@t
				var_0_object->AddReply(10322, -1, 11380); //@t
				return 0;
			}
			var_3_string = true;
			bool var_332_bool;
			func_7232(var_332_bool);
			if(var_332_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc2b";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_bool == 12610) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7463();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7469();
				object var_125_object = var_1_object;
				func_7332(var_0_object);
			}
			if(var_41_bool == 12613) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_7463();
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_7469();
				object var_157_object = var_1_object;
				func_7332(var_0_object);
			}
			if(var_41_bool == 12243) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_7405();
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_7411();
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_7443();
				object var_203_object = var_1_object;
				func_7364(var_0_object);
			}
			if(var_41_bool == 12244) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_7405();
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_7411();
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_7443();
				object var_218_object = var_1_object;
				func_7364(var_0_object);
			}
			if(var_41_bool == 13077) {
				object var_222_object; object var_223_object;
				var_222_object = var_1_object;
				var_223_object = var_0_object;
				func_7522();
			}
			if(var_40_string == 12592) {
				bool var_228_bool = false;
				bool var_229_bool;
				func_8037(var_1_object);
				if(var_229_bool != 0) {
					bool var_237_bool;
					func_8013(var_1_object);
					if(!var_237_bool) //@nz
						var_228_bool = true;
				}
				if(var_228_bool != 0) {
					func_3802(var_41_bool, "Neutral");
					var_0_object->SetMessage(11395); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11396, 12594, 12593); //@t
					return 0;
				}
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(10814); //@t
				var_0_object->ClearReplies(); //@t
				bool var_265_bool = false;
				bool var_266_bool;
				func_8025(var_1_object);
				if(var_266_bool != 0) {
					bool var_272_bool;
					func_8013(var_1_object);
					if(var_272_bool != 0)
						var_265_bool = true;
				}
				if(var_265_bool != 0)
					var_0_object->AddReply(10815, 11956, 11955); //@t
				bool var_277_bool;
				func_7902(var_277_bool, var_1_object);
				if(var_277_bool != 0)
					var_0_object->AddReply(11403, 12601, 12600); //@t
				bool var_284_bool = false;
				bool var_285_bool;
				func_8061(var_1_object);
				if(var_285_bool != 0) {
					bool var_291_bool;
					func_8049(var_1_object);
					if(var_291_bool != 0)
						var_284_bool = true;
				}
				if(var_284_bool != 0)
					var_0_object->AddReply(11862, 13076, 13075); //@t
				var_0_object->AddReply(11408, -1, 12605); //@t
				return 0;
			}
			if(var_40_string == 13076) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11864, -1, 13077); //@t
				return 0;
			}
			if(var_40_string == 12601) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11405, 12603, 12602); //@t
				return 0;
			}
			if(var_40_string == 12603) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11406); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11407, -1, 12604); //@t
				return 0;
			}
			if(var_40_string == 11956) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(10816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10817, 11958, 11957); //@t
				var_0_object->AddReply(11019, 12191, 12190); //@t
				return 0;
			}
			if(var_40_string == 12191) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11020); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11021, 12193, 12192); //@t
				return 0;
			}
			if(var_40_string == 12193) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11023, 12202, 12194); //@t
				var_0_object->AddReply(11024, 12196, 12195); //@t
				return 0;
			}
			if(var_40_string == 12196) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11026, 12198, 12197); //@t
				var_0_object->AddReply(11028, 12198, 12199); //@t
				return 0;
			}
			if(var_40_string == 12198) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11029, 12202, 12201); //@t
				return 0;
			}
			if(var_40_string == 12202) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11031, 12205, 12203); //@t
				var_0_object->AddReply(11032, 12205, 12204); //@t
				return 0;
			}
			if(var_40_string == 12205) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11034, 12208, 12207); //@t
				var_0_object->AddReply(11037, 12211, 12210); //@t
				return 0;
			}
			if(var_40_string == 12211) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11039, 12213, 12212); //@t
				var_0_object->AddReply(11054, 12222, 12231); //@t
				return 0;
			}
			if(var_40_string == 12213) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11041, 12215, 12214); //@t
				return 0;
			}
			if(var_40_string == 12215) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11043, 12222, 12216); //@t
				return 0;
			}
			if(var_40_string == 12208) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11035); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11036, 12217, 12209); //@t
				return 0;
			}
			if(var_40_string == 12217) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11045, 12222, 12218); //@t
				var_0_object->AddReply(11046, 12220, 12219); //@t
				return 0;
			}
			if(var_40_string == 12220) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11048, 12222, 12221); //@t
				return 0;
			}
			if(var_40_string == 11958) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(10818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10819, 12222, 11959); //@t
				var_0_object->AddReply(10830, 11971, 11970); //@t
				return 0;
			}
			if(var_40_string == 11971) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(10831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10832, 12222, 11972); //@t
				var_0_object->AddReply(10833, 12227, 11974); //@t
				return 0;
			}
			if(var_40_string == 12227) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11052); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11053, 12198, 12228); //@t
				return 0;
			}
			if(var_40_string == 12222) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11050, 12233, 12223); //@t
				var_0_object->AddReply(11051, 12233, 12224); //@t
				var_0_object->AddReply(11059, 12240, 12239); //@t
				return 0;
			}
			if(var_40_string == 12240) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11061, 12233, 12241); //@t
				return 0;
			}
			if(var_40_string == 12233) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11055); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11056, 12237, 12235); //@t
				var_0_object->AddReply(11057, 12237, 12236); //@t
				return 0;
			}
			if(var_40_string == 12237) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11062, -1, 12243); //@t
				var_0_object->AddReply(11063, -1, 12244); //@t
				return 0;
			}
			if(var_40_string == 12594) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11398, 12596, 12595); //@t
				return 0;
			}
			if(var_40_string == 12596) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11399); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11400, 12598, 12597); //@t
				return 0;
			}
			if(var_40_string == 12598) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11409, 12607, 12606); //@t
				return 0;
			}
			if(var_40_string == 12607) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11411, 12609, 12608); //@t
				return 0;
			}
			if(var_40_string == 12609) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11412); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11413, -1, 12610); //@t
				var_0_object->AddReply(11414, 12612, 12611); //@t
				return 0;
			}
			if(var_40_string == 12612) {
				func_3802(var_41_bool, "Neutral");
				var_0_object->SetMessage(11415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11416, -1, 12613); //@t
				return 0;
			}
			var_3_string = true;
			bool var_548_bool;
			func_7232(var_548_bool);
			if(var_548_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xeeb";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_bool == 12969) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7640();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7771();
			}
			if(var_41_bool == 12970) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_7640();
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_7771();
			}
			if(var_41_bool == 13745) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_7626();
				object var_132_object = var_1_object;
				func_7613(var_0_object);
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_7290();
			}
			if(var_41_bool == 13748) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_7632();
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_7624();
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_7638();
			}
			if(var_40_string == 12947) {
				bool var_157_bool = false;
				bool var_158_bool = false;
				bool var_159_bool;
				func_8193(var_1_object);
				if(var_159_bool != 0) {
					bool var_165_bool;
					func_8133(var_1_object);
					if(!var_165_bool) //@nz
						var_158_bool = true;
				}
				if(var_158_bool != 0) {
					bool var_172_bool;
					func_8145(var_1_object);
					if(!var_172_bool) //@nz
						var_157_bool = true;
				}
				if(var_157_bool != 0) {
					func_4825(var_41_bool, "Neutral");
					var_0_object->SetMessage(11741); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11743, 12951, 12949); //@t
					var_0_object->AddReply(11742, 12950, 12948); //@t
					bool var_201_bool;
					func_8073(var_1_object);
					if(!var_201_bool) //@nz
						var_0_object->AddReply(12586, 13766, 13753); //@t
					return 0;
				}
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(12573); //@t
				var_0_object->ClearReplies(); //@t
				bool var_213_bool = false;
				bool var_214_bool;
				func_8157(var_1_object);
				if(var_214_bool != 0) {
					bool var_220_bool;
					func_8169(var_1_object);
					if(var_220_bool != 0)
						var_213_bool = true;
				}
				if(var_213_bool != 0)
					var_0_object->AddReply(12574, 13744, 13743); //@t
				bool var_229_bool = false;
				bool var_230_bool;
				func_8133(var_1_object);
				if(var_230_bool != 0) {
					bool var_232_bool;
					func_8181(var_1_object);
					if(var_232_bool != 0)
						var_229_bool = true;
				}
				if(var_229_bool != 0)
					var_0_object->AddReply(12577, 13747, 13746); //@t
				var_0_object->AddReply(12580, -1, 13749); //@t
				return 0;
			}
			if(var_40_string == 13747) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(12578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12598, 13770, 13769); //@t
				var_0_object->AddReply(12603, 13772, 13775); //@t
				return 0;
			}
			if(var_40_string == 13770) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(12599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12600, 13772, 13771); //@t
				var_0_object->AddReply(12602, 13772, 13773); //@t
				return 0;
			}
			if(var_40_string == 13772) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(12601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12579, -1, 13748); //@t
				return 0;
			}
			if(var_40_string == 13744) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(12575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12576, -1, 13745); //@t
				return 0;
			}
			if(var_40_string == 13766) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(12596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12597, 12960, 13767); //@t
				return 0;
			}
			if(var_40_string == 12950) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(11744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11746, 12954, 12952); //@t
				return 0;
			}
			if(var_40_string == 12954) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(11748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11749, 12951, 12955); //@t
				return 0;
			}
			if(var_40_string == 12951) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(11745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11747, 12957, 12953); //@t
				return 0;
			}
			if(var_40_string == 12957) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(11750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11751, 12960, 12958); //@t
				var_0_object->AddReply(11752, 12960, 12959); //@t
				return 0;
			}
			if(var_40_string == 12960) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(11753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11754, 12964, 12962); //@t
				return 0;
			}
			if(var_40_string == 12964) {
				func_4825(var_41_bool, "Neutral");
				var_0_object->SetMessage(11756); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11761, -1, 12969); //@t
				var_0_object->AddReply(11762, -1, 12970); //@t
				return 0;
			}
			var_3_string = true;
			bool var_333_bool;
			func_7232(var_333_bool);
			if(var_333_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x12ea";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_bool == 13670) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7579();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7539();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_7591();
			}
			if(var_41_bool == 13671) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_7579();
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_7591();
			}
			if(var_41_bool == 13692) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_7539();
			}
			if(var_41_bool == 13689) {
				object var_137_object = var_1_object;
				func_7528(var_0_object);
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_7290();
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_7585();
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_7646();
			}
			if(var_41_bool == 13698) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_7597();
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_7603();
			}
			if(var_40_string == 13330) {
				bool var_200_bool;
				func_8097(var_1_object);
				if(var_200_bool != 0) {
					func_5451(var_41_bool, "Neutral");
					var_0_object->SetMessage(12104); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12105, 13334, 13331); //@t
					var_0_object->AddReply(12106, 13333, 13332); //@t
					return 0;
				}
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12515); //@t
				var_0_object->ClearReplies(); //@t
				bool var_232_bool;
				func_8085(var_1_object);
				if(var_232_bool != 0)
					var_0_object->AddReply(12520, 13691, 13690); //@t
				bool var_241_bool = false;
				bool var_242_bool;
				func_8109(var_1_object);
				if(var_242_bool != 0) {
					bool var_248_bool;
					func_8205(var_1_object);
					if(var_248_bool != 0)
						var_241_bool = true;
				}
				if(var_241_bool != 0)
					var_0_object->AddReply(12516, 13688, 13686); //@t
				bool var_257_bool = false;
				bool var_258_bool = false;
				bool var_259_bool;
				func_8121(var_1_object);
				if(var_259_bool != 0) {
					bool var_265_bool;
					func_8217(var_1_object);
					if(var_265_bool != 0)
						var_258_bool = true;
				}
				if(var_258_bool != 0) {
					bool var_271_bool;
					func_8205(var_1_object);
					if(!var_271_bool) //@nz
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(12526, 13697, 13696); //@t
				var_0_object->AddReply(12517, -1, 13687); //@t
				return 0;
			}
			if(var_40_string == 13697) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12527); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12528, -1, 13698); //@t
				return 0;
			}
			if(var_40_string == 13688) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12519, -1, 13689); //@t
				return 0;
			}
			if(var_40_string == 13691) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12522, -1, 13692); //@t
				return 0;
			}
			if(var_40_string == 13333) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12107); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12493, 13334, 13662); //@t
				return 0;
			}
			if(var_40_string == 13334) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12109, 13336, 13335); //@t
				return 0;
			}
			if(var_40_string == 13336) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12110); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12111, 13338, 13337); //@t
				return 0;
			}
			if(var_40_string == 13338) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12494, 13665, 13664); //@t
				return 0;
			}
			if(var_40_string == 13665) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12496, 13667, 13666); //@t
				return 0;
			}
			if(var_40_string == 13667) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12497); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12498, 13669, 13668); //@t
				return 0;
			}
			if(var_40_string == 13669) {
				func_5451(var_41_bool, "Neutral");
				var_0_object->SetMessage(12499); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12500, -1, 13670); //@t
				var_0_object->AddReply(12501, -1, 13671); //@t
				return 0;
			}
			var_3_string = true;
			bool var_353_bool;
			func_7232(var_353_bool);
			if(var_353_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x155c";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int)
	{
		if(1 != 0) {
			func_7143();
			if(var_41_int == 14856) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7685();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7819();
			}
			if(var_41_int == 14857) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_7685();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_7819();
			}
			if(var_41_int == 14858) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_7685();
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_7819();
			}
			if(var_41_int == 14839) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_7691();
			}
			if(var_41_int == 14860) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_7697();
			}
			if(var_41_int == 14862) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_7699();
			}
			if(var_41_int == 14894) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_7705();
			}
			if(var_41_int == 14873) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_7717();
			}
			if(var_41_int == 14867) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_7711();
			}
			if(var_40_int == 13574) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12410); //@t
				var_0_object->ClearReplies(); //@t
				bool var_141_bool = false;
				bool var_142_bool = false;
				bool var_143_bool;
				func_8229(var_1_object);
				if(var_143_bool != 0) {
					bool var_151_bool;
					func_8253(var_1_object);
					if(var_151_bool != 0)
						var_142_bool = true;
				}
				if(var_142_bool != 0) {
					bool var_157_bool;
					func_8241(var_1_object);
					if(!var_157_bool) //@nz
						var_141_bool = true;
				}
				if(var_141_bool != 0)
					var_0_object->AddReply(12412, 13577, 13576); //@t
				bool var_167_bool = false;
				bool var_168_bool;
				func_8241(var_1_object);
				if(var_168_bool != 0) {
					bool var_170_bool;
					func_8265(var_1_object);
					if(var_170_bool != 0)
						var_167_bool = true;
				}
				if(var_167_bool != 0)
					var_0_object->AddReply(13588, 14840, 14839); //@t
				bool var_179_bool = false;
				bool var_180_bool = false;
				bool var_181_bool;
				func_8277(var_1_object);
				if(var_181_bool != 0) {
					bool var_187_bool;
					func_8241(var_1_object);
					if(var_187_bool != 0)
						var_180_bool = true;
				}
				if(var_180_bool != 0) {
					bool var_189_bool;
					func_8289(var_1_object);
					if(var_189_bool != 0)
						var_179_bool = true;
				}
				if(var_179_bool != 0)
					var_0_object->AddReply(13607, 14868, 14862); //@t
				bool var_198_bool = false;
				bool var_199_bool;
				func_8277(var_1_object);
				if(var_199_bool != 0) {
					bool var_201_bool;
					func_8313(var_1_object);
					if(var_201_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_object->AddReply(13618, 14874, 14873); //@t
				bool var_210_bool = false;
				bool var_211_bool = false;
				bool var_212_bool;
				func_8241(var_1_object);
				if(!var_212_bool) { //@nz
					bool var_215_bool;
					func_8229(var_1_object);
					if(var_215_bool != 0)
						var_211_bool = true;
				}
				if(var_211_bool != 0) {
					bool var_217_bool;
					func_8301(var_1_object);
					if(var_217_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_object->AddReply(13612, 14863, 14867); //@t
				var_0_object->AddReply(12411, -1, 13575); //@t
				return 0;
			}
			if(var_40_int == 14863) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13609, 14865, 14864); //@t
				return 0;
			}
			if(var_40_int == 14865) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13611, 14869, 14866); //@t
				return 0;
			}
			if(var_40_int == 14869) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13615, 14871, 14870); //@t
				return 0;
			}
			if(var_40_int == 14871) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13616); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13617, -1, 14872); //@t
				return 0;
			}
			if(var_40_int == 14874) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13620, 14876, 14875); //@t
				return 0;
			}
			if(var_40_int == 14876) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13623, 14879, 14878); //@t
				var_0_object->AddReply(13622, -1, 14877); //@t
				return 0;
			}
			if(var_40_int == 14879) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13626, 14882, 14881); //@t
				var_0_object->AddReply(13625, -1, 14880); //@t
				return 0;
			}
			if(var_40_int == 14882) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13627); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13628, -1, 14883); //@t
				return 0;
			}
			if(var_40_int == 14868) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13629, 14885, 14884); //@t
				return 0;
			}
			if(var_40_int == 14885) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13630); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13631, 14889, 14886); //@t
				var_0_object->AddReply(13632, 14888, 14887); //@t
				return 0;
			}
			if(var_40_int == 14888) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13633); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13636, 14889, 14891); //@t
				return 0;
			}
			if(var_40_int == 14889) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13635, 14893, 14890); //@t
				return 0;
			}
			if(var_40_int == 14893) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13637); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13638, -1, 14894); //@t
				return 0;
			}
			if(var_40_int == 14840) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13591, 14843, 14842); //@t
				var_0_object->AddReply(13590, 14845, 14841); //@t
				return 0;
			}
			if(var_40_int == 14845) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13594); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13595, 14847, 14846); //@t
				return 0;
			}
			if(var_40_int == 14847) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13597, 14843, 14848); //@t
				return 0;
			}
			if(var_40_int == 14843) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13592); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13598, 14824, 14850); //@t
				var_0_object->AddReply(13593, 13583, 14844); //@t
				return 0;
			}
			if(var_40_int == 13583) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12423, 13588, 13587); //@t
				return 0;
			}
			if(var_40_int == 13588) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12425, 13594, 13590); //@t
				var_0_object->AddReply(12426, 13592, 13591); //@t
				return 0;
			}
			if(var_40_int == 13592) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12430, 13594, 13596); //@t
				return 0;
			}
			if(var_40_int == 13594) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12429, 13599, 13595); //@t
				return 0;
			}
			if(var_40_int == 13599) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12433, 13601, 13600); //@t
				return 0;
			}
			if(var_40_int == 13601) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13581, 14826, 14830); //@t
				var_0_object->AddReply(12435, 14833, 13602); //@t
				return 0;
			}
			if(var_40_int == 14824) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13576, 14826, 14825); //@t
				return 0;
			}
			if(var_40_int == 14826) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13578, 14828, 14827); //@t
				return 0;
			}
			if(var_40_int == 14828) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13580, 14833, 14829); //@t
				return 0;
			}
			if(var_40_int == 14833) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13582); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13583, 14835, 14834); //@t
				return 0;
			}
			if(var_40_int == 14835) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13585, 14837, 14836); //@t
				return 0;
			}
			if(var_40_int == 14837) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13587, -1, 14838); //@t
				var_0_object->AddReply(13606, -1, 14860); //@t
				return 0;
			}
			if(var_40_int == 13577) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12420, 13585, 13584); //@t
				var_0_object->AddReply(12414, 13579, 13578); //@t
				return 0;
			}
			if(var_40_int == 13579) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12416, 13581, 13580); //@t
				return 0;
			}
			if(var_40_int == 13581) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12418, 14853, 13582); //@t
				return 0;
			}
			if(var_40_int == 13585) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(12421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13574, 14851, 14823); //@t
				var_0_object->AddReply(13602, 14853, 14854); //@t
				return 0;
			}
			if(var_40_int == 14851) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13600, 14853, 14852); //@t
				return 0;
			}
			if(var_40_int == 14853) {
				func_6087(var_41_int, "Neutral");
				var_0_object->SetMessage(13601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13603, -1, 14856); //@t
				var_0_object->AddReply(13604, -1, 14857); //@t
				var_0_object->AddReply(13605, -1, 14858); //@t
				return 0;
			}
			var_3_string = true;
			bool var_510_bool;
			func_7232(var_510_bool);
			if(var_510_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x17d8";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_8193(bool var_159_bool)
{
	int var_161_int;
	func_7160(var_161_int, "ood5MladVlad3");
	if(var_161_int == 0) {
		var_159_bool = true;
		return 0;
	}
	var_159_bool = false;
}


void func_8705(void)
{
	@Trace("Adding diary entry");
	object var_69_object;
	@CreateDiaryEntry(var_69_object, 78, 2, 12160);
	bool var_74_bool; object var_75_object;
	var_69_object = var_75_object;
	func_8593(var_74_bool, var_75_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7685(void)
{
	@SetVariable("ood8MladVlad1", 1);
}


void func_4615(object var_0_object, int var_696_int, object var_697_object)
{
	var_0_object = var_697_object;
	bool var_707_bool; object var_708_object;
	var_697_object = var_708_object;
	func_7065(var_707_bool, var_708_object);
	if(!var_707_bool) { //@nz
		var_696_int = -2;
		return 8;
	}
	object var_703_object;
	@CreateDialog(var_703_object);
	int var_710_int;
	func_7228(var_710_int);
	var_703_object->SetNPCName(var_710_int);
	string var_711_string;
	func_7230(var_711_string);
	var_703_object->SetPhoto(var_711_string);
	int var_712_int;
	func_8672(var_712_int);
	var_703_object->SetPlayerName(var_712_int);
	bool var_704_bool;
	@IsOverrideActive(var_704_bool);
	if(var_704_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	@DoDialog(var_703_object);
	object var_714_object; object var_715_object;
	var_697_object = var_714_object;
	var_703_object = var_715_object;
	TaskCall(13);
	func_4678(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object);
	TaskReturn();
	bool var_706_bool;
	var_703_object->IsDialogEnd(var_706_bool);
	
	for(;;) {
		var_806_bool = !var_706_bool; //@nz
		if(var_806_bool == 0) goto Label_4667;
		@sync();
		var_703_object->IsDialogEnd(var_706_bool);
	}
	
Label_4667:
	object var_807_object;
	var_697_object = var_807_object;
	func_7121();
	@StopDialog(var_703_object);
	var_703_object->GetReturnValue(-1);
	int var_705_int = var_696_int;
}
EMIT "Stack[-4] = 0";


void func_7176(object var_117_object, string var_118_string)
{
	object var_121_object;
	@GetMainOutdoorScene(var_121_object);
	object var_122_object;
	@AddBlankActorFromXml(var_122_object, var_121_object, var_118_string, (var_118_string + ".xml"));
	var_122_object = var_117_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7691(void)
{
	@SetVariable("ood8MladVlad2", 1);
}


// @pe
void func_8205(bool var_248_bool)
{
	int var_250_int;
	func_7160(var_250_int, "d6q02GorbunDeath");
	if(var_250_int != 0) {
		var_248_bool = true;
		return 0;
	}
	var_248_bool = false;
}


// @pe
void func_7697(void)
{
}


void func_8721(void)
{
	@Trace("Adding diary entry");
	object var_183_object;
	@CreateDiaryEntry(var_183_object, 137, 1, 15323);
	bool var_188_bool; object var_189_object;
	var_183_object = var_189_object;
	func_8593(var_188_bool, var_189_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7699(void)
{
	@SetVariable("ood8MladVlad3", 1);
}


void func_7187(bool var_115_bool, string var_116_string, string var_117_string)
{
	object var_119_object;
	@FindActor(var_119_object, var_116_string);
	if(var_119_object == null)
		var_115_bool = false;
	@Trigger(var_119_object, var_117_string);
	var_115_bool = true;
}
EMIT "Stack[-1] = 0";


void func_3608(object var_0_object, int var_596_int, object var_597_object)
{
	var_0_object = var_597_object;
	bool var_607_bool; object var_608_object;
	var_597_object = var_608_object;
	func_7065(var_607_bool, var_608_object);
	if(!var_607_bool) { //@nz
		var_596_int = -2;
		return 8;
	}
	object var_603_object;
	@CreateDialog(var_603_object);
	int var_610_int;
	func_7228(var_610_int);
	var_603_object->SetNPCName(var_610_int);
	string var_611_string;
	func_7230(var_611_string);
	var_603_object->SetPhoto(var_611_string);
	int var_612_int;
	func_8672(var_612_int);
	var_603_object->SetPlayerName(var_612_int);
	bool var_604_bool;
	@IsOverrideActive(var_604_bool);
	if(var_604_bool != 0) {
		var_596_int = -2;
		return 8;
	}
	@DoDialog(var_603_object);
	object var_614_object; object var_615_object;
	var_597_object = var_614_object;
	var_603_object = var_615_object;
	TaskCall(11);
	func_3671(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object);
	TaskReturn();
	bool var_606_bool;
	var_603_object->IsDialogEnd(var_606_bool);
	
	for(;;) {
		var_692_bool = !var_606_bool; //@nz
		if(var_692_bool == 0) goto Label_3660;
		@sync();
		var_603_object->IsDialogEnd(var_606_bool);
	}
	
Label_3660:
	object var_693_object;
	var_597_object = var_693_object;
	func_7121();
	@StopDialog(var_603_object);
	var_603_object->GetReturnValue(-1);
	int var_605_int = var_596_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7705(void)
{
	@SetVariable("d8q01MladVladIsVictim", 1);
}


// @pe
void func_8217(bool var_265_bool)
{
	int var_267_int;
	func_7160(var_267_int, "d6q02Trigger");
	if(var_267_int != 0) {
		var_265_bool = true;
		return 0;
	}
	var_265_bool = false;
}


// @pe
void func_3098(object var_2_object, string var_137_string)
{
	bool var_138_bool;
	func_7232(var_138_bool);
	if(!var_138_bool) //@nz
		return 0;
	if(var_137_string == var_2_object)
		return 0;
	string var_141_string;
	func_7125(var_141_string);
	var_2_object = var_141_string;
}


void func_7199(float var_65_float)
{
	float var_67_float;
	@GetGameTime(var_67_float);
	var_67_float = var_65_float;
}


// @pe
void func_7711(void)
{
	@SetVariable("ood8MladVlad4", 1);
}


void func_8737(void)
{
	@Trace("Adding diary entry");
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 21, 2, 3361);
	bool var_89_bool; object var_90_object;
	var_84_object = var_90_object;
	func_8593(var_89_bool, var_90_object, -1);
}
EMIT "Stack[-1] = 0";


void func_7204(int var_157_int)
{
	float var_159_float;
	@GetGameTime(var_159_float);
	var_157_int = 1 + (var_159_float / 24);
}


// @pe
void func_8229(bool var_143_bool)
{
	int var_145_int;
	func_7160(var_145_int, "d8q01");
	if(var_145_int == 1)
		var_143_bool = true;
	var_143_bool = false;
}


// @pe
void func_7717(void)
{
	@SetVariable("ood8MladVlad5", 1);
}


// @pe
void func_7723(void)
{
	@SetVariable("KnowMladVlad", 1);
}


// @pe
void func_7213(bool var_155_bool, int var_156_int)
{
	int var_157_int;
	func_7204(var_157_int);
	var_155_bool = var_157_int == var_156_int;
}


// @pe
void func_7729(void)
{
	@SetVariable("ood1MladVlad5", 1);
}


// @pe
void func_8241(bool var_157_bool)
{
	int var_159_int;
	func_7160(var_159_int, "d8q01MladVladIsBad");
	if(var_159_int == 1)
		var_157_bool = true;
	var_157_bool = false;
}


void func_8753(void)
{
	@Trace("Adding diary entry");
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 92, 2, 12174);
	bool var_114_bool; object var_115_object;
	var_109_object = var_115_object;
	func_8593(var_114_bool, var_115_object, 21);
}
EMIT "Stack[-1] = 0";


void func_49(object var_0_object, int var_44_int, object var_45_object)
{
	var_0_object = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_7065(var_55_bool, var_56_object);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_96_int;
	func_7228(var_96_int);
	var_51_object->SetNPCName(var_96_int);
	string var_97_string;
	func_7230(var_97_string);
	var_51_object->SetPhoto(var_97_string);
	int var_98_int;
	func_8672(var_98_int);
	var_51_object->SetPlayerName(var_98_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_107_object; object var_108_object;
	var_45_object = var_107_object;
	var_51_object = var_108_object;
	TaskCall(3);
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_152_bool = !var_54_bool; //@nz
		if(var_152_bool == 0) goto Label_101;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_101:
	object var_153_object;
	var_45_object = var_153_object;
	func_7121();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


void func_7219(bool var_1042_bool)
{
	func_7125("No");
	bool var_1044_bool;
	@lshWaitForAnimEnd(var_1044_bool);
	var_1044_bool = var_1042_bool;
}


// @pe
void func_7735(void)
{
	@SetVariable("ood1MladVlad6", 1);
}


void func_7228(int var_96_int)
{
	var_96_int = 2872;
}


// @pe
void func_7741(void)
{
	@SetVariable("ood1MladVlad7", 1);
}


void func_7230(string var_97_string)
{
	var_97_string = "ui/NPC_MladVlad.png";
}


// @pe
void func_8253(bool var_151_bool)
{
	int var_153_int;
	func_7160(var_153_int, "ood8MladVlad1");
	if(var_153_int == 0) {
		var_151_bool = true;
		return 0;
	}
	var_151_bool = false;
}


void func_7232(bool var_43_bool)
{
	var_43_bool = true;
}


void func_8769(void)
{
	@Trace("Adding diary entry");
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 148, 2, 15354);
	bool var_87_bool; object var_88_object;
	var_82_object = var_88_object;
	func_8593(var_87_bool, var_88_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7234(void)
{
	@SetVariable("ood1MladVlad3", 1);
}


// @pe
void func_7747(void)
{
	@SetVariable("ood1MladVlad8", 1);
}


// @pe
void func_4678(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_714_object, object var_715_object)
{
	var_0_object = var_715_object;
	var_1_object = var_714_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_721_bool = false;
		bool var_722_bool = false;
		bool var_723_bool;
		func_8193(var_1_object);
		if(var_723_bool != 0) {
			bool var_729_bool;
			func_8133(var_1_object);
			if(!var_729_bool) //@nz
				var_722_bool = true;
		}
		if(var_722_bool != 0) {
			bool var_736_bool;
			func_8145(var_1_object);
			if(!var_736_bool) //@nz
				var_721_bool = true;
		}
		if(var_721_bool != 0) {
			func_4825(var_715_object, "Neutral");
			var_0_object->SetMessage(11741); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11743, 12951, 12949); //@t
			var_0_object->AddReply(11742, 12950, 12948); //@t
			bool var_755_bool;
			func_8073(var_1_object);
			if(!var_755_bool) //@nz
				var_0_object->AddReply(12586, 13766, 13753); //@t
		} else {
					func_4825(var_715_object, "Neutral");
					var_0_object->SetMessage(12573); //@t
					var_0_object->ClearReplies(); //@t
					bool var_775_bool = false;
					bool var_776_bool;
					func_8157(var_1_object);
					if(var_776_bool != 0) {
						bool var_782_bool;
						func_8169(var_1_object);
						if(var_782_bool != 0)
							var_775_bool = true;
					}
					if(var_775_bool != 0)
						var_0_object->AddReply(12574, 13744, 13743); //@t
					bool var_791_bool = false;
					bool var_792_bool;
					func_8133(var_1_object);
					if(var_792_bool != 0) {
						bool var_794_bool;
						func_8181(var_1_object);
						if(var_794_bool != 0)
							var_791_bool = true;
					}
					if(var_791_bool != 0)
						var_0_object->AddReply(12577, 13747, 13746); //@t
					var_0_object->AddReply(12580, -1, 13749); //@t
		}
	}
	for(;;) {
		bool var_765_bool;
		func_7232(var_765_bool);
		if(var_765_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7125(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4824;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4824:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x124a";


// @pe
void func_7240(void)
{
	@SetVariable("KnowUklad", 1);
}


// @pe
void func_7753(void)
{
	@SetVariable("ood1MladVlad9", 1);
}


// @pe
void func_8265(bool var_170_bool)
{
	int var_172_int;
	func_7160(var_172_int, "ood8MladVlad2");
	if(var_172_int == 0) {
		var_170_bool = true;
		return 0;
	}
	var_170_bool = false;
}


// @pe
void func_7246(void)
{
	@SetVariable("ood1MladVlad4", 1);
}


// @pe
void func_7759(void)
{
	@SetVariable("ood1MladVlad10", 1);
}


void func_8785(void)
{
	@Trace("Adding diary entry");
	object var_74_object;
	@CreateDiaryEntry(var_74_object, 102, 2, 13725);
	bool var_79_bool; object var_80_object;
	var_74_object = var_80_object;
	func_8593(var_79_bool, var_80_object, -1);
}
EMIT "Stack[-1] = 0";


void func_7252(void)
{
	@SetVariable("d1q03IsKapella", 0);
	object var_56_object;
	func_8622(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	float var_67_float;
	func_7199(var_67_float);
	var_53_object->AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", 0, 8642, var_67_float);
	func_8689();
	object var_95_object;
	func_7165(var_95_object, "quest_d1_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_7765(void)
{
	@SetVariable("ood1MladVlad11", 1);
}


// @pe
void func_8277(bool var_181_bool)
{
	int var_183_int;
	func_7160(var_183_int, "d8q01BringBadBoy");
	if(var_183_int == 1)
		var_181_bool = true;
	var_181_bool = false;
}


// @pe
void func_3671(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_614_object, object var_615_object)
{
	var_0_object = var_615_object;
	var_1_object = var_614_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_621_bool = false;
		bool var_622_bool;
		func_8037(var_1_object);
		if(var_622_bool != 0) {
			bool var_628_bool;
			func_8013(var_1_object);
			if(!var_628_bool) //@nz
				var_621_bool = true;
		}
		if(var_621_bool != 0) {
			func_3802(var_615_object, "Neutral");
			var_0_object->SetMessage(11395); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11396, 12594, 12593); //@t
		} else {
					func_3802(var_615_object, "Neutral");
					var_0_object->SetMessage(10814); //@t
					var_0_object->ClearReplies(); //@t
					bool var_654_bool = false;
					bool var_655_bool;
					func_8025(var_1_object);
					if(var_655_bool != 0) {
						bool var_661_bool;
						func_8013(var_1_object);
						if(var_661_bool != 0)
							var_654_bool = true;
					}
					if(var_654_bool != 0)
						var_0_object->AddReply(10815, 11956, 11955); //@t
					bool var_666_bool;
					func_7902(var_666_bool, var_1_object);
					if(var_666_bool != 0)
						var_0_object->AddReply(11403, 12601, 12600); //@t
					bool var_673_bool = false;
					bool var_674_bool;
					func_8061(var_1_object);
					if(var_674_bool != 0) {
						bool var_680_bool;
						func_8049(var_1_object);
						if(var_680_bool != 0)
							var_673_bool = true;
					}
					if(var_673_bool != 0)
						var_0_object->AddReply(11862, 13076, 13075); //@t
					var_0_object->AddReply(11408, -1, 12605); //@t
		}
	}
	for(;;) {
		bool var_644_bool;
		func_7232(var_644_bool);
		if(var_644_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7125(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3801;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3801:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe5b";


void func_7771(void)
{
	object var_53_object;
	int var_54_int;
	func_7160(var_54_int, "d5q03");
	if(var_54_int == 0) {
		@SetVariable("d5q03", 1);
		object var_62_object;
		func_8622(var_62_object);
		var_62_object = var_53_object;
		float var_73_float;
		func_7199(var_73_float);
		var_53_object->AddMark("d5q03MladVladSavePrisonersSelf", "pt_map_mladvlad", 0, 15369, var_73_float);
		float var_80_float;
		func_7199(var_80_float);
		var_53_object->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 15370, var_80_float);
		func_8769();
		object var_106_object;
		func_7165(var_106_object, "quest_d5_03");
		bool var_114_bool;
		func_7187(var_114_bool, "quest_d5_03", "place_prisoners");
		var_53_object = null;
	}
}


// @pe
void func_8289(bool var_189_bool)
{
	int var_191_int;
	func_7160(var_191_int, "ood8MladVlad3");
	if(var_191_int == 0) {
		var_189_bool = true;
		return 0;
	}
	var_189_bool = false;
}


void func_8801(void)
{
	@Trace("Adding diary entry");
	object var_170_object;
	@CreateDiaryEntry(var_170_object, 104, 2, 13727);
	bool var_175_bool; object var_176_object;
	var_170_object = var_176_object;
	func_8593(var_175_bool, var_176_object, 102);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8301(bool var_217_bool)
{
	int var_219_int;
	func_7160(var_219_int, "ood8MladVlad4");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


// @pe
void func_7279(object var_88_object)
{
	@Trace("money500 is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_7041(var_91_object, "money", 500);
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_107_object, object var_108_object)
{
	var_0_object = var_108_object;
	var_1_object = var_107_object;
	var_3_object = false;
	if(1 != 0) {
		object var_114_object; object var_115_object;
		var_114_object = var_1_object;
		var_115_object = var_0_object;
		func_7723();
		object var_118_object; object var_119_object;
		var_118_object = var_1_object;
		var_119_object = var_0_object;
		func_7296();
		func_180(var_108_object, "Neutral");
		var_0_object->SetMessage(416); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(417, 487, 485); //@t
		var_0_object->AddReply(418, 9271, 486); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_144_bool;
	func_7232(var_144_bool);
	if(var_144_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7125(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


void func_8817(void)
{
	@Trace("Adding diary entry");
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 106, 2, 13729);
	bool var_104_bool; object var_105_object;
	var_99_object = var_105_object;
	func_8593(var_104_bool, var_105_object, 102);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2166(object var_2_object, string var_151_string)
{
	bool var_152_bool;
	func_7232(var_152_bool);
	if(!var_152_bool) //@nz
		return 0;
	if(var_151_string == var_2_object)
		return 0;
	string var_155_string;
	func_7125(var_155_string);
	var_2_object = var_155_string;
}


// @pe
void func_8313(bool var_201_bool)
{
	int var_203_int;
	func_7160(var_203_int, "ood8MladVlad5");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


// @pe
void func_7290(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_7296(void)
{
	@SetVariable("KnowPochka", 1);
}


void func_8833(void)
{
	@Trace("Adding diary entry");
	object var_187_object;
	@CreateDiaryEntry(var_187_object, 110, 2, 13733);
	bool var_192_bool; object var_193_object;
	var_187_object = var_193_object;
	func_8593(var_192_bool, var_193_object, 107);
}
EMIT "Stack[-1] = 0";


void func_5252(object var_0_object, int var_810_int, object var_811_object)
{
	var_0_object = var_811_object;
	bool var_821_bool; object var_822_object;
	var_811_object = var_822_object;
	func_7065(var_821_bool, var_822_object);
	if(!var_821_bool) { //@nz
		var_810_int = -2;
		return 8;
	}
	object var_817_object;
	@CreateDialog(var_817_object);
	int var_824_int;
	func_7228(var_824_int);
	var_817_object->SetNPCName(var_824_int);
	string var_825_string;
	func_7230(var_825_string);
	var_817_object->SetPhoto(var_825_string);
	int var_826_int;
	func_8672(var_826_int);
	var_817_object->SetPlayerName(var_826_int);
	bool var_818_bool;
	@IsOverrideActive(var_818_bool);
	if(var_818_bool != 0) {
		var_810_int = -2;
		return 8;
	}
	@DoDialog(var_817_object);
	object var_828_object; object var_829_object;
	var_811_object = var_828_object;
	var_817_object = var_829_object;
	TaskCall(15);
	func_5315(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object);
	TaskReturn();
	bool var_820_bool;
	var_817_object->IsDialogEnd(var_820_bool);
	
	for(;;) {
		var_911_bool = !var_820_bool; //@nz
		if(var_911_bool == 0) goto Label_5304;
		@sync();
		var_817_object->IsDialogEnd(var_820_bool);
	}
	
Label_5304:
	object var_912_object;
	var_811_object = var_912_object;
	func_7121();
	@StopDialog(var_817_object);
	var_817_object->GetReturnValue(-1);
	int var_819_int = var_810_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8325(bool var_396_bool)
{
	int var_398_int;
	func_7160(var_398_int, "KnowBigVlad");
	if(var_398_int == 1)
		var_396_bool = true;
	var_396_bool = false;
}


// @pe
void func_7302(void)
{
	@SetVariable("ood2MladVlad1", 1);
}


// @pe
void func_7819(void)
{
	func_8849();
}


// @pe
void func_7308(void)
{
	@SetVariable("ood2MladVlad2", 1);
}


// @pe
void func_7824(void)
{
	@SetVariable("KnowTaurusProject", 1);
}


// @pe
void func_8337(bool var_428_bool)
{
	int var_430_int;
	func_7160(var_430_int, "KnowGrif");
	if(var_430_int == 1)
		var_428_bool = true;
	var_428_bool = false;
}


// @pe
void func_7314(void)
{
	@SetVariable("ood2MladVlad3", 1);
}


void func_8849(void)
{
	@Trace("Adding diary entry");
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 177, 1, 15436);
	bool var_58_bool; object var_59_object;
	var_53_object = var_59_object;
	func_8593(var_58_bool, var_59_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7830(void)
{
	@SetVariable("ood1MladVlad1", 1);
}


// @pe
void func_7320(void)
{
	@SetVariable("ood2MladVlad4", 1);
}


// @pe
void func_7836(void)
{
	@SetVariable("ood1MladVlad2", 1);
}


// @pe
void func_8349(bool var_380_bool)
{
	int var_382_int;
	func_7160(var_382_int, "KnowKaterina");
	if(var_382_int == 1)
		var_380_bool = true;
	var_380_bool = false;
}


// @pe
void func_7326(void)
{
	@SetVariable("d2q04", 1);
}


void func_8865(void)
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_7842(bool var_284_bool)
{
	int var_286_int;
	func_7160(var_286_int, "ood1MladVlad4");
	if(var_286_int == 0) {
		var_284_bool = true;
		return 0;
	}
	var_284_bool = false;
}


// @pe
void func_7332(object var_126_object)
{
	object var_130_object;
	func_8622(var_130_object);
	object var_127_object;
	var_130_object = var_127_object;
	func_8639(var_127_object, "pt_map_anna", (float)2);
	object var_150_object;
	func_8622(var_150_object);
	var_126_object->ShowMap(var_150_object);
}


// @pe
void func_8869(object var_41_object)
{
	var_42_bool = GlobalVars[1];
	if(!var_42_bool) { //@nz
		int var_44_int; object var_45_object;
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_154_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_155_bool;
	func_7213(var_155_bool, 1);
	if(var_155_bool != 0) {
		int var_163_int; object var_164_object;
		var_41_object = var_164_object;
		TaskCall(4);
		func_299(var_165_object, var_163_int, var_164_object);
		TaskReturn();
		return 0;
	}
	bool var_426_bool;
	func_7213(var_426_bool, 2);
	if(var_426_bool != 0) {
		int var_428_int; object var_429_object;
		var_41_object = var_429_object;
		TaskCall(6);
		func_1946(var_430_object, var_428_int, var_429_object);
		TaskReturn();
		return 0;
	}
	bool var_533_bool;
	func_7213(var_533_bool, 3);
	if(var_533_bool != 0) {
		int var_535_int; object var_536_object;
		var_41_object = var_536_object;
		TaskCall(8);
		func_2958(var_537_object, var_535_int, var_536_object);
		TaskReturn();
		return 0;
	}
	bool var_594_bool;
	func_7213(var_594_bool, 4);
	if(var_594_bool != 0) {
		int var_596_int; object var_597_object;
		var_41_object = var_597_object;
		TaskCall(10);
		func_3608(var_598_object, var_596_int, var_597_object);
		TaskReturn();
		return 0;
	}
	bool var_694_bool;
	func_7213(var_694_bool, 5);
	if(var_694_bool != 0) {
		int var_696_int; object var_697_object;
		var_41_object = var_697_object;
		TaskCall(12);
		func_4615(var_698_object, var_696_int, var_697_object);
		TaskReturn();
		return 0;
	}
	bool var_808_bool;
	func_7213(var_808_bool, 6);
	if(var_808_bool != 0) {
		int var_810_int; object var_811_object;
		var_41_object = var_811_object;
		TaskCall(14);
		func_5252(var_812_object, var_810_int, var_811_object);
		TaskReturn();
		return 0;
	}
	bool var_913_bool;
	func_7213(var_913_bool, 8);
	if(var_913_bool != 0) {
		int var_915_int; object var_916_object;
		var_41_object = var_916_object;
		TaskCall(16);
		func_5847(var_917_object, var_915_int, var_916_object);
		TaskReturn();
		return 0;
	}
	bool var_1042_bool;
	func_7219(var_1042_bool);
}


// @pe
void func_8361(bool var_348_bool)
{
	int var_350_int;
	func_7160(var_350_int, "KnowLara");
	if(var_350_int == 1)
		var_348_bool = true;
	var_348_bool = false;
}


// @pe
void func_7854(bool var_322_bool)
{
	int var_324_int;
	func_7160(var_324_int, "d1q01FirstGeorgVisit");
	if(var_324_int == 1)
		var_322_bool = true;
	var_322_bool = false;
}


// @pe
void func_180(object var_2_object, string var_54_string)
{
	bool var_55_bool;
	func_7232(var_55_bool);
	if(!var_55_bool) //@nz
		return 0;
	if(var_54_string == var_2_object)
		return 0;
	string var_58_string;
	func_7125(var_58_string);
	var_2_object = var_58_string;
}


// @pe
void func_693(object var_2_object, string var_255_string)
{
	bool var_256_bool;
	func_7232(var_256_bool);
	if(!var_256_bool) //@nz
		return 0;
	if(var_255_string == var_2_object)
		return 0;
	string var_259_string;
	func_7125(var_259_string);
	var_2_object = var_259_string;
}


// @pe
void func_8373(bool var_354_bool)
{
	int var_356_int;
	func_7160(var_356_int, "ood1MladVlad5");
	if(var_356_int == 0) {
		var_354_bool = true;
		return 0;
	}
	var_354_bool = false;
}


// @pe
void func_7348(object var_104_object)
{
	object var_108_object;
	func_8622(var_108_object);
	object var_105_object;
	var_108_object = var_105_object;
	func_8639(var_105_object, "pt_map_ospina", (float)2);
	object var_128_object;
	func_8622(var_128_object);
	var_104_object->ShowMap(var_128_object);
}


// @pe
void func_7866(bool var_249_bool)
{
	int var_251_int;
	func_7160(var_251_int, "d1q03");
	if(var_251_int == 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


// @pe
void func_8385(bool var_370_bool)
{
	int var_372_int;
	func_7160(var_372_int, "ood1MladVlad6");
	if(var_372_int == 0) {
		var_370_bool = true;
		return 0;
	}
	var_370_bool = false;
}


// @pe
void func_5315(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_828_object, object var_829_object)
{
	var_0_object = var_829_object;
	var_1_object = var_828_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_835_bool;
		func_8097(var_1_object);
		if(var_835_bool != 0) {
			func_5451(var_829_object, "Neutral");
			var_0_object->SetMessage(12104); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12105, 13334, 13331); //@t
			var_0_object->AddReply(12106, 13333, 13332); //@t
		} else {
					func_5451(var_829_object, "Neutral");
					var_0_object->SetMessage(12515); //@t
					var_0_object->ClearReplies(); //@t
					bool var_863_bool;
					func_8085(var_1_object);
					if(var_863_bool != 0)
						var_0_object->AddReply(12520, 13691, 13690); //@t
					bool var_872_bool = false;
					bool var_873_bool;
					func_8109(var_1_object);
					if(var_873_bool != 0) {
						bool var_879_bool;
						func_8205(var_1_object);
						if(var_879_bool != 0)
							var_872_bool = true;
					}
					if(var_872_bool != 0)
						var_0_object->AddReply(12516, 13688, 13686); //@t
					bool var_888_bool = false;
					bool var_889_bool = false;
					bool var_890_bool;
					func_8121(var_1_object);
					if(var_890_bool != 0) {
						bool var_896_bool;
						func_8217(var_1_object);
						if(var_896_bool != 0)
							var_889_bool = true;
					}
					if(var_889_bool != 0) {
						bool var_902_bool;
						func_8205(var_1_object);
						if(!var_902_bool) //@nz
							var_888_bool = true;
					}
					if(var_888_bool != 0)
						var_0_object->AddReply(12526, 13697, 13696); //@t
					var_0_object->AddReply(12517, -1, 13687); //@t
		}
	}
	for(;;) {
		bool var_853_bool;
		func_7232(var_853_bool);
		if(var_853_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7125(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5450;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5450:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x14c7";


// @pe
void func_7364(object var_204_object)
{
	object var_208_object;
	func_8622(var_208_object);
	object var_205_object;
	var_208_object = var_205_object;
	func_8639(var_205_object, "pt_map_bigvlad", (float)2);
	object var_209_object;
	func_8622(var_209_object);
	var_204_object->ShowMap(var_209_object);
}


// @pe
void func_7878(bool var_290_bool)
{
	int var_292_int;
	func_7160(var_292_int, "d1q03");
	if(var_292_int == 1000)
		var_290_bool = true;
	var_290_bool = false;
}


// @pe
void func_8397(bool var_386_bool)
{
	int var_388_int;
	func_7160(var_388_int, "ood1MladVlad7");
	if(var_388_int == 0) {
		var_386_bool = true;
		return 0;
	}
	var_386_bool = false;
}


// @pe
void func_7890(bool var_296_bool)
{
	int var_298_int;
	func_7160(var_298_int, "d1q03IsKapella");
	if(var_298_int == 1)
		var_296_bool = true;
	var_296_bool = false;
}


// @pe
void func_7380(void)
{
}


void func_7382(void)
{
	@SetVariable("d3q02", 2);
	object var_54_object;
	func_8622(var_54_object);
	object var_51_object;
	var_54_object = var_51_object;
	float var_65_float;
	func_7199(var_65_float);
	var_51_object->AddMark("d3q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 11384, var_65_float);
	func_8705();
}
EMIT "Stack[-1] = 0";


void func_5847(object var_0_object, int var_915_int, object var_916_object)
{
	var_0_object = var_916_object;
	bool var_926_bool; object var_927_object;
	var_916_object = var_927_object;
	func_7065(var_926_bool, var_927_object);
	if(!var_926_bool) { //@nz
		var_915_int = -2;
		return 8;
	}
	object var_922_object;
	@CreateDialog(var_922_object);
	int var_929_int;
	func_7228(var_929_int);
	var_922_object->SetNPCName(var_929_int);
	string var_930_string;
	func_7230(var_930_string);
	var_922_object->SetPhoto(var_930_string);
	int var_931_int;
	func_8672(var_931_int);
	var_922_object->SetPlayerName(var_931_int);
	bool var_923_bool;
	@IsOverrideActive(var_923_bool);
	if(var_923_bool != 0) {
		var_915_int = -2;
		return 8;
	}
	@DoDialog(var_922_object);
	object var_933_object; object var_934_object;
	var_916_object = var_933_object;
	var_922_object = var_934_object;
	TaskCall(17);
	func_5910(var_935_object, var_936_object, var_937_string, var_938_bool, var_933_object, var_934_object);
	TaskReturn();
	bool var_925_bool;
	var_922_object->IsDialogEnd(var_925_bool);
	
	for(;;) {
		var_1040_bool = !var_925_bool; //@nz
		if(var_1040_bool == 0) goto Label_5899;
		@sync();
		var_922_object->IsDialogEnd(var_925_bool);
	}
	
Label_5899:
	object var_1041_object;
	var_916_object = var_1041_object;
	func_7121();
	@StopDialog(var_922_object);
	var_922_object->GetReturnValue(-1);
	int var_924_int = var_915_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8409(bool var_402_bool)
{
	int var_404_int;
	func_7160(var_404_int, "ood1MladVlad8");
	if(var_404_int == 0) {
		var_402_bool = true;
		return 0;
	}
	var_402_bool = false;
}


// @pe
void func_3802(object var_2_object, string var_244_string)
{
	bool var_245_bool;
	func_7232(var_245_bool);
	if(!var_245_bool) //@nz
		return 0;
	if(var_244_string == var_2_object)
		return 0;
	string var_248_string;
	func_7125(var_248_string);
	var_2_object = var_248_string;
}


// @pe
void func_4825(object var_2_object, string var_179_string)
{
	bool var_180_bool;
	func_7232(var_180_bool);
	if(!var_180_bool) //@nz
		return 0;
	if(var_179_string == var_2_object)
		return 0;
	string var_183_string;
	func_7125(var_183_string);
	var_2_object = var_183_string;
}


// @pe
void func_7902(bool var_277_bool, object var_278_object)
{
	object var_280_object;
	var_278_object = var_280_object;
	func_8577(var_280_object);
	bool var_279_bool;
	if(var_279_bool != 0) {
		var_277_bool = true;
		return 0;
	}
	var_277_bool = false;
}


// @pe
void func_8421(bool var_418_bool)
{
	int var_420_int;
	func_7160(var_420_int, "ood1MladVlad9");
	if(var_420_int == 0) {
		var_418_bool = true;
		return 0;
	}
	var_418_bool = false;
}


// @pe
void func_7912(bool var_144_bool)
{
	int var_146_int;
	func_7160(var_146_int, "d2q03");
	if(var_146_int == 1)
		var_144_bool = true;
	var_144_bool = false;
}


// @pe
void func_7405(void)
{
	@SetVariable("ood4MladVlad1", 1);
}


// @pe
void func_8433(bool var_434_bool)
{
	int var_436_int;
	func_7160(var_436_int, "ood1MladVlad10");
	if(var_436_int == 0) {
		var_434_bool = true;
		return 0;
	}
	var_434_bool = false;
}


void func_7411(void)
{
	@SetVariable("d4q01", 3);
	object var_171_object;
	func_8622(var_171_object);
	object var_168_object;
	var_171_object = var_168_object;
	float var_176_float;
	func_7199(var_176_float);
	var_168_object->AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 11507, var_176_float);
	float var_181_float;
	func_7199(var_181_float);
	var_168_object->AddMark("d4q01MladVladGotoBigVladSelf", "pt_map_mladvlad", 1, 15322, var_181_float);
	func_8721();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7924(bool var_136_bool)
{
	int var_138_int;
	func_7160(var_138_int, "ood2MladVlad1");
	if(var_138_int == 0) {
		var_136_bool = true;
		return 0;
	}
	var_136_bool = false;
}


// @pe
void func_8445(bool var_450_bool)
{
	int var_452_int;
	func_7160(var_452_int, "ood1MladVlad11");
	if(var_452_int == 0) {
		var_450_bool = true;
		return 0;
	}
	var_450_bool = false;
}


// @pe
void func_7936(bool var_176_bool)
{
	int var_178_int;
	func_7160(var_178_int, "ood2MladVlad2");
	if(var_178_int == 0) {
		var_176_bool = true;
		return 0;
	}
	var_176_bool = false;
}


// @pe
void func_8457(bool var_466_bool)
{
	int var_468_int;
	func_7160(var_468_int, "ood1MladVlad12");
	if(var_468_int == 0) {
		var_466_bool = true;
		return 0;
	}
	var_466_bool = false;
}


// @pe
void func_7948(bool var_187_bool)
{
	int var_189_int;
	func_7160(var_189_int, "ood2MladVlad3");
	if(var_189_int == 0) {
		var_187_bool = true;
		return 0;
	}
	var_187_bool = false;
}


void func_7443(void)
{
	@SetVariable("d4q01_subquest", 1);
	object var_197_object;
	func_8622(var_197_object);
	object var_194_object;
	var_197_object = var_194_object;
	float var_202_float;
	func_7199(var_202_float);
	var_194_object->AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", 1, 11503, var_202_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8469(bool var_460_bool)
{
	int var_462_int;
	func_7160(var_462_int, "KnowMaria");
	if(var_462_int == 1)
		var_460_bool = true;
	var_460_bool = false;
}


// @pe
void func_5910(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_933_object, object var_934_object)
{
	var_0_object = var_934_object;
	var_1_object = var_933_object;
	var_3_object = false;
	if(1 != 0) {
		func_6087(var_934_object, "Neutral");
		var_0_object->SetMessage(12410); //@t
		var_0_object->ClearReplies(); //@t
		bool var_946_bool = false;
		bool var_947_bool = false;
		bool var_948_bool;
		func_8229(var_1_object);
		if(var_948_bool != 0) {
			bool var_954_bool;
			func_8253(var_1_object);
			if(var_954_bool != 0)
				var_947_bool = true;
		}
		if(var_947_bool != 0) {
			bool var_960_bool;
			func_8241(var_1_object);
			if(!var_960_bool) //@nz
				var_946_bool = true;
		}
		if(var_946_bool != 0)
			var_0_object->AddReply(12412, 13577, 13576); //@t
		bool var_970_bool = false;
		bool var_971_bool;
		func_8241(var_1_object);
		if(var_971_bool != 0) {
			bool var_973_bool;
			func_8265(var_1_object);
			if(var_973_bool != 0)
				var_970_bool = true;
		}
		if(var_970_bool != 0)
			var_0_object->AddReply(13588, 14840, 14839); //@t
		bool var_982_bool = false;
		bool var_983_bool = false;
		bool var_984_bool;
		func_8277(var_1_object);
		if(var_984_bool != 0) {
			bool var_990_bool;
			func_8241(var_1_object);
			if(var_990_bool != 0)
				var_983_bool = true;
		}
		if(var_983_bool != 0) {
			bool var_992_bool;
			func_8289(var_1_object);
			if(var_992_bool != 0)
				var_982_bool = true;
		}
		if(var_982_bool != 0)
			var_0_object->AddReply(13607, 14868, 14862); //@t
		bool var_1001_bool = false;
		bool var_1002_bool;
		func_8277(var_1_object);
		if(var_1002_bool != 0) {
			bool var_1004_bool;
			func_8313(var_1_object);
			if(var_1004_bool != 0)
				var_1001_bool = true;
		}
		if(var_1001_bool != 0)
			var_0_object->AddReply(13618, 14874, 14873); //@t
		bool var_1013_bool = false;
		bool var_1014_bool = false;
		bool var_1015_bool;
		func_8241(var_1_object);
		if(!var_1015_bool) { //@nz
			bool var_1018_bool;
			func_8229(var_1_object);
			if(var_1018_bool != 0)
				var_1014_bool = true;
		}
		if(var_1014_bool != 0) {
			bool var_1020_bool;
			func_8301(var_1_object);
			if(var_1020_bool != 0)
				var_1013_bool = true;
		}
		if(var_1013_bool != 0)
			var_0_object->AddReply(13612, 14863, 14867); //@t
		var_0_object->AddReply(12411, -1, 13575); //@t
		goto Label_6057;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x171a";
	}
Label_6057:
	bool var_1032_bool;
	func_7232(var_1032_bool);
	if(var_1032_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7125(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_6086;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6086:
		return 0;

	}
	
}


// @pe
void func_7960(bool var_196_bool)
{
	int var_198_int;
	func_7160(var_198_int, "ood2MladVlad4");
	if(var_198_int == 0) {
		var_196_bool = true;
		return 0;
	}
	var_196_bool = false;
}


// @pe
void func_8481(bool var_364_bool)
{
	int var_366_int;
	func_7160(var_366_int, "KnowOspina");
	if(var_366_int == 1)
		var_364_bool = true;
	var_364_bool = false;
}


// @pe
void func_7972(bool var_205_bool)
{
	int var_207_int;
	func_7160(var_207_int, "d2q04");
	if(var_207_int == 0) {
		var_205_bool = true;
		return 0;
	}
	var_205_bool = false;
}


// @pe
void func_7463(void)
{
	@SetVariable("ood4MladVlad2", 1);
}


void func_299(object var_0_object, int var_163_int, object var_164_object)
{
	var_0_object = var_164_object;
	bool var_174_bool; object var_175_object;
	var_164_object = var_175_object;
	func_7065(var_174_bool, var_175_object);
	if(!var_174_bool) { //@nz
		var_163_int = -2;
		return 8;
	}
	object var_170_object;
	@CreateDialog(var_170_object);
	int var_177_int;
	func_7228(var_177_int);
	var_170_object->SetNPCName(var_177_int);
	string var_178_string;
	func_7230(var_178_string);
	var_170_object->SetPhoto(var_178_string);
	int var_179_int;
	func_8672(var_179_int);
	var_170_object->SetPlayerName(var_179_int);
	bool var_171_bool;
	@IsOverrideActive(var_171_bool);
	if(var_171_bool != 0) {
		var_163_int = -2;
		return 8;
	}
	@DoDialog(var_170_object);
	object var_181_object; object var_182_object;
	var_164_object = var_181_object;
	var_170_object = var_182_object;
	TaskCall(5);
	func_362(var_183_object, var_184_object, var_185_string, var_186_bool, var_181_object, var_182_object);
	TaskReturn();
	bool var_173_bool;
	var_170_object->IsDialogEnd(var_173_bool);
	
	for(;;) {
		var_424_bool = !var_173_bool; //@nz
		if(var_424_bool == 0) goto Label_351;
		@sync();
		var_170_object->IsDialogEnd(var_173_bool);
	}
	
Label_351:
	object var_425_object;
	var_164_object = var_425_object;
	func_7121();
	@StopDialog(var_170_object);
	var_170_object->GetReturnValue(-1);
	int var_172_int = var_163_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8493(bool var_444_bool)
{
	int var_446_int;
	func_7160(var_446_int, "KnowKapella");
	if(var_446_int == 1)
		var_444_bool = true;
	var_444_bool = false;
}


void func_7469(void)
{
	object var_54_object;
	func_8622(var_54_object);
	object var_53_object;
	var_54_object = var_53_object;
	float var_65_float;
	func_7199(var_65_float);
	var_53_object->AddMark("d4q02MladVladGotoAnna", "pt_map_anna", 0, 11526, var_65_float);
	float var_72_float;
	func_7199(var_72_float);
	var_53_object->AddMark("d4q02MladVladGotoJulia", "pt_map_julia", 0, 11524, var_72_float);
	float var_77_float;
	func_7199(var_77_float);
	var_53_object->AddMark("d4q02MladVladGotoLara", "pt_map_lara", 0, 11525, var_77_float);
	float var_82_float;
	func_7199(var_82_float);
	var_53_object->AddMark("d4q02MladVladGotoAJLSelf", "pt_map_mladvlad", 0, 15328, var_82_float);
	func_8737();
	func_8753();
	object var_117_object;
	func_7176(var_117_object, "quest_d4_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_7984(bool var_412_bool)
{
	int var_414_int;
	func_7160(var_414_int, "KnowViktor");
	if(var_414_int == 1)
		var_412_bool = true;
	var_412_bool = false;
}


// @pe
void func_8505(bool var_332_bool)
{
	int var_334_int;
	func_7160(var_334_int, "KnowMyth");
	if(var_334_int == 1)
		var_332_bool = true;
	var_332_bool = false;
}


// @pe
void func_7996(bool var_154_bool)
{
	int var_156_int;
	func_7160(var_156_int, "d3q02");
	if(var_156_int == 1)
		var_154_bool = true;
	var_154_bool = false;
}


// @pe
void func_8517(bool var_642_bool)
{
	int var_644_int;
	func_7160(var_644_int, "KnowTermitnik");
	if(var_644_int == 1)
		var_642_bool = true;
	var_642_bool = false;
}


// @pe
void func_8008(bool var_162_bool)
{
	var_162_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_5451(object var_2_object, string var_208_string)
{
	bool var_209_bool;
	func_7232(var_209_bool);
	if(!var_209_bool) //@nz
		return 0;
	if(var_208_string == var_2_object)
		return 0;
	string var_212_string;
	func_7125(var_212_string);
	var_2_object = var_212_string;
}


// @pe
void func_8013(bool var_237_bool)
{
	int var_239_int;
	func_7160(var_239_int, "d4q01");
	if(var_239_int == 2)
		var_237_bool = true;
	var_237_bool = false;
}


// @pe
void func_8529(bool var_664_bool)
{
	int var_666_int;
	func_7160(var_666_int, "KnowTaurusProject");
	if(var_666_int == 1)
		var_664_bool = true;
	var_664_bool = false;
}


// @pe
void func_8025(bool var_266_bool)
{
	int var_268_int;
	func_7160(var_268_int, "ood4MladVlad1");
	if(var_268_int == 0) {
		var_266_bool = true;
		return 0;
	}
	var_266_bool = false;
}


// @pe
void func_8541(bool var_241_bool)
{
	int var_243_int;
	func_7160(var_243_int, "ood1MladVlad1");
	if(var_243_int == 0) {
		var_241_bool = true;
		return 0;
	}
	var_241_bool = false;
}


// @pe
void func_7522(void)
{
	@SetVariable("ood4MladVlad3", 1);
}


// @pe
void func_8037(bool var_229_bool)
{
	int var_231_int;
	func_7160(var_231_int, "ood4MladVlad2");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


// @pe
void func_7528(object var_137_object)
{
	@Trace("money 50000 is given");
	object var_140_object;
	var_137_object = var_140_object;
	func_7041(var_140_object, "money", 50000);
}


// @pe
void func_8553(bool var_338_bool)
{
	int var_340_int;
	func_7160(var_340_int, "ood1MladVlad2");
	if(var_340_int == 0) {
		var_338_bool = true;
		return 0;
	}
	var_338_bool = false;
}


// @pe
void func_362(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_181_object, object var_182_object)
{
	var_0_object = var_182_object;
	var_1_object = var_181_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_188_bool = false;
		bool var_189_bool;
		func_8541(var_1_object);
		if(var_189_bool != 0) {
			bool var_197_bool;
			func_7866(var_1_object);
			if(var_197_bool != 0)
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			func_693(var_182_object, "Neutral");
			var_0_object->SetMessage(5694); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5695, 6518, 6277); //@t
			var_0_object->AddReply(5698, -1, 6280); //@t
			var_0_object->AddReply(5930, 6526, 6525); //@t
		} else {
					func_693(var_182_object, "Neutral");
					var_0_object->SetMessage(5699); //@t
					var_0_object->ClearReplies(); //@t
					bool var_228_bool = false;
					bool var_229_bool = false;
					bool var_230_bool;
					func_7842(var_1_object);
					if(var_230_bool != 0) {
						bool var_236_bool;
						func_7878(var_1_object);
						if(var_236_bool != 0)
							var_229_bool = true;
					}
					if(var_229_bool != 0) {
						bool var_242_bool;
						func_7890(var_1_object);
						if(!var_242_bool) //@nz
							var_228_bool = true;
					}
					if(var_228_bool != 0)
						var_0_object->AddReply(5697, 6705, 6279); //@t
					bool var_252_bool = false;
					bool var_253_bool;
					func_7866(var_1_object);
					if(var_253_bool != 0) {
						bool var_255_bool;
						func_8541(var_1_object);
						if(!var_255_bool) //@nz
							var_252_bool = true;
					}
					if(var_252_bool != 0)
						var_0_object->AddReply(5700, 16487, 6282); //@t
					bool var_261_bool = false;
					bool var_262_bool;
					func_8565(var_1_object);
					if(var_262_bool != 0) {
						bool var_268_bool;
						func_7854(var_1_object);
						if(var_268_bool != 0)
							var_261_bool = true;
					}
					if(var_261_bool != 0)
						var_0_object->AddReply(8220, 6283, 9043); //@t
					bool var_277_bool = false;
					bool var_278_bool;
					func_8505(var_1_object);
					if(var_278_bool != 0) {
						bool var_284_bool;
						func_8553(var_1_object);
						if(var_284_bool != 0)
							var_277_bool = true;
					}
					if(var_277_bool != 0)
						var_0_object->AddReply(8223, 6294, 9046); //@t
					bool var_293_bool = false;
					bool var_294_bool;
					func_8361(var_1_object);
					if(var_294_bool != 0) {
						bool var_300_bool;
						func_8373(var_1_object);
						if(var_300_bool != 0)
							var_293_bool = true;
					}
					if(var_293_bool != 0)
						var_0_object->AddReply(8226, 9070, 9049); //@t
					bool var_309_bool = false;
					bool var_310_bool;
					func_8481(var_1_object);
					if(var_310_bool != 0) {
						bool var_316_bool;
						func_8385(var_1_object);
						if(var_316_bool != 0)
							var_309_bool = true;
					}
					if(var_309_bool != 0)
						var_0_object->AddReply(8229, 9071, 9052); //@t
					bool var_325_bool = false;
					bool var_326_bool;
					func_8349(var_1_object);
					if(var_326_bool != 0) {
						bool var_332_bool;
						func_8397(var_1_object);
						if(var_332_bool != 0)
							var_325_bool = true;
					}
					if(var_325_bool != 0)
						var_0_object->AddReply(8231, 9072, 9054); //@t
					bool var_341_bool = false;
					bool var_342_bool;
					func_8325(var_1_object);
					if(var_342_bool != 0) {
						bool var_348_bool;
						func_8409(var_1_object);
						if(var_348_bool != 0)
							var_341_bool = true;
					}
					if(var_341_bool != 0)
						var_0_object->AddReply(8234, 9073, 9057); //@t
					bool var_357_bool = false;
					bool var_358_bool;
					func_7984(var_1_object);
					if(var_358_bool != 0) {
						bool var_364_bool;
						func_8421(var_1_object);
						if(var_364_bool != 0)
							var_357_bool = true;
					}
					if(var_357_bool != 0)
						var_0_object->AddReply(8235, 9074, 9058); //@t
					bool var_373_bool = false;
					bool var_374_bool;
					func_8337(var_1_object);
					if(var_374_bool != 0) {
						bool var_380_bool;
						func_8433(var_1_object);
						if(var_380_bool != 0)
							var_373_bool = true;
					}
					if(var_373_bool != 0)
						var_0_object->AddReply(8238, 9075, 9061); //@t
					bool var_389_bool = false;
					bool var_390_bool;
					func_8493(var_1_object);
					if(var_390_bool != 0) {
						bool var_396_bool;
						func_8445(var_1_object);
						if(var_396_bool != 0)
							var_389_bool = true;
					}
					if(var_389_bool != 0)
						var_0_object->AddReply(8241, 9076, 9064); //@t
					bool var_405_bool = false;
					bool var_406_bool;
					func_8469(var_1_object);
					if(var_406_bool != 0) {
						bool var_412_bool;
						func_8457(var_1_object);
						if(var_412_bool != 0)
							var_405_bool = true;
					}
					if(var_405_bool != 0)
						var_0_object->AddReply(8246, 9077, 9069); //@t
					var_0_object->AddReply(6265, -1, 6932); //@t
		}
	}
	for(;;) {
		bool var_218_bool;
		func_7232(var_218_bool);
		if(var_218_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7125(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_692;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_692:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16e";


// @pe
void func_8049(bool var_291_bool)
{
	int var_293_int;
	func_7160(var_293_int, "d4q02");
	if(var_293_int == 1000)
		var_291_bool = true;
	var_291_bool = false;
}


void func_7539(void)
{
	object var_54_object;
	func_8622(var_54_object);
	object var_53_object;
	var_54_object = var_53_object;
	float var_65_float;
	func_7199(var_65_float);
	var_53_object->AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 15378, var_65_float);
	float var_72_float;
	func_7199(var_72_float);
	var_53_object->AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", 0, 15379, var_72_float);
	func_8785();
	func_8817();
	object var_107_object;
	func_7165(var_107_object, "quest_d6_02");
	bool var_115_bool;
	func_7187(var_115_bool, "quest_d6_02", "place_trigger");
}
EMIT "Stack[-1] = 0";


// @pe
void func_8565(bool var_316_bool)
{
	int var_318_int;
	func_7160(var_318_int, "ood1MladVlad3");
	if(var_318_int == 0) {
		var_316_bool = true;
		return 0;
	}
	var_316_bool = false;
}


// @pe
void func_8061(bool var_285_bool)
{
	int var_287_int;
	func_7160(var_287_int, "ood4MladVlad3");
	if(var_287_int == 0) {
		var_285_bool = true;
		return 0;
	}
	var_285_bool = false;
}


void func_7041(object var_140_object, string var_141_string, int var_142_int)
{
	int var_144_int;
	var_140_object->GetProperty(var_141_string, var_144_int);
	var_140_object->SetProperty(var_141_string, (var_144_int + var_142_int));
}


// @pe
void func_8577(bool var_279_bool)
{
	var_279_bool = false;
}


void func_8580(object var_67_object)
{
	object var_69_object;
	@GetDiaryRoot(var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_67_object = false;
	}
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_7048(bool var_41_bool, object var_42_object)
{
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_48_cvector;
	var_51_float = GetByIndex(var_49_cvector, 0);
	var_52_float = GetByIndex(var_49_cvector, 2);
	bool var_50_bool;
	@Rotate(var_51_float, var_52_float, var_50_bool);
	var_50_bool = var_41_bool;
}


// @pe
void func_8073(bool var_201_bool)
{
	int var_203_int;
	func_7160(var_203_int, "d5q02");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


void func_2958(object var_0_object, int var_535_int, object var_536_object)
{
	var_0_object = var_536_object;
	bool var_546_bool; object var_547_object;
	var_536_object = var_547_object;
	func_7065(var_546_bool, var_547_object);
	if(!var_546_bool) { //@nz
		var_535_int = -2;
		return 8;
	}
	object var_542_object;
	@CreateDialog(var_542_object);
	int var_549_int;
	func_7228(var_549_int);
	var_542_object->SetNPCName(var_549_int);
	string var_550_string;
	func_7230(var_550_string);
	var_542_object->SetPhoto(var_550_string);
	int var_551_int;
	func_8672(var_551_int);
	var_542_object->SetPlayerName(var_551_int);
	bool var_543_bool;
	@IsOverrideActive(var_543_bool);
	if(var_543_bool != 0) {
		var_535_int = -2;
		return 8;
	}
	@DoDialog(var_542_object);
	object var_553_object; object var_554_object;
	var_536_object = var_553_object;
	var_542_object = var_554_object;
	TaskCall(9);
	func_3021(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object);
	TaskReturn();
	bool var_545_bool;
	var_542_object->IsDialogEnd(var_545_bool);
	
	for(;;) {
		var_592_bool = !var_545_bool; //@nz
		if(var_592_bool == 0) goto Label_3010;
		@sync();
		var_542_object->IsDialogEnd(var_545_bool);
	}
	
Label_3010:
	object var_593_object;
	var_536_object = var_593_object;
	func_7121();
	@StopDialog(var_542_object);
	var_542_object->GetReturnValue(-1);
	int var_544_int = var_535_int;
}
EMIT "Stack[-4] = 0";


void func_8593(bool var_58_bool, object var_59_object, int var_60_int)
{
	object var_67_object;
	func_8580(var_67_object);
	object var_64_object;
	var_67_object = var_64_object;
	object var_65_object;
	var_64_object->Find(var_60_int, var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_60_int);
		var_58_bool = false;
	}
	var_65_object->AddChild(var_59_object);
	@SetVariable("player_diary", 1);
	int var_66_int;
	var_59_object->GetCategory(var_66_int);
	@SetDiarySection(var_66_int);
	var_58_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_7060(bool var_41_bool)
{
	bool var_43_bool;
	@IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
}


// @pe
void func_8085(bool var_232_bool)
{
	int var_234_int;
	func_7160(var_234_int, "d6q02");
	if(var_234_int == 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


void func_7065(bool var_55_bool, object var_56_object)
{
	cvector var_66_cvector;
	var_56_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_56_object->GetEyesHeight(var_65_float);
	var_73_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_73_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_74_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_77_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_7150(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * 70) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
}


void func_1946(object var_0_object, int var_428_int, object var_429_object)
{
	var_0_object = var_429_object;
	bool var_439_bool; object var_440_object;
	var_429_object = var_440_object;
	func_7065(var_439_bool, var_440_object);
	if(!var_439_bool) { //@nz
		var_428_int = -2;
		return 8;
	}
	object var_435_object;
	@CreateDialog(var_435_object);
	int var_442_int;
	func_7228(var_442_int);
	var_435_object->SetNPCName(var_442_int);
	string var_443_string;
	func_7230(var_443_string);
	var_435_object->SetPhoto(var_443_string);
	int var_444_int;
	func_8672(var_444_int);
	var_435_object->SetPlayerName(var_444_int);
	bool var_436_bool;
	@IsOverrideActive(var_436_bool);
	if(var_436_bool != 0) {
		var_428_int = -2;
		return 8;
	}
	@DoDialog(var_435_object);
	object var_446_object; object var_447_object;
	var_429_object = var_446_object;
	var_435_object = var_447_object;
	TaskCall(7);
	func_2009(var_448_object, var_449_object, var_450_string, var_451_bool, var_446_object, var_447_object);
	TaskReturn();
	bool var_438_bool;
	var_435_object->IsDialogEnd(var_438_bool);
	
	for(;;) {
		var_531_bool = !var_438_bool; //@nz
		if(var_531_bool == 0) goto Label_1998;
		@sync();
		var_435_object->IsDialogEnd(var_438_bool);
	}
	
Label_1998:
	object var_532_object;
	var_429_object = var_532_object;
	func_7121();
	@StopDialog(var_435_object);
	var_435_object->GetReturnValue(-1);
	int var_437_int = var_428_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7579(void)
{
	@SetVariable("ood6MladVlad1", 1);
}


// @pe
void func_8097(bool var_200_bool)
{
	int var_202_int;
	func_7160(var_202_int, "ood6MladVlad1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


// @pe
void func_7585(void)
{
	@SetVariable("ood6MladVlad2", 1);
}


// @pe
void func_7591(void)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}


// @pe
void func_8109(bool var_242_bool)
{
	int var_244_int;
	func_7160(var_244_int, "ood6MladVlad2");
	if(var_244_int == 0) {
		var_242_bool = true;
		return 0;
	}
	var_242_bool = false;
}


// @pe
void func_7597(void)
{
	@SetVariable("ood6MladVlad3", 1);
}


void func_8622(object var_54_object)
{
	object var_57_object; object var_58_object;
	@GetMainOutdoorScene(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find main outdoor scene");
		var_58_object = null;
		var_58_object = var_54_object;
	}
	var_57_object->GetMap(var_58_object);
	var_58_object = var_54_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7603(void)
{
	func_8833();
	bool var_195_bool;
	func_7187(var_195_bool, "quest_d6_03", "failed");
}


// @pe
void func_8121(bool var_259_bool)
{
	int var_261_int;
	func_7160(var_261_int, "ood6MladVlad3");
	if(var_261_int == 0) {
		var_259_bool = true;
		return 0;
	}
	var_259_bool = false;
}


// @pe
void func_7613(object var_132_object)
{
	@Trace("money30000 is given");
	object var_135_object;
	var_132_object = var_135_object;
	func_7041(var_135_object, "money", 30000);
}


void func_8639(object var_127_object, string var_128_string, float var_129_float)
{
	object var_137_object;
	@GetMainOutdoorScene(var_137_object);
	if(var_137_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_135_cvector;
	cvector var_136_cvector;
	bool var_138_bool;
	var_137_object->GetLocator(var_128_string, var_138_bool, var_135_cvector, var_136_cvector);
	if(!var_138_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_128_string) + " doesnt exist");
	var_137_object->GetMap(var_127_object);
	if(var_127_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_148_float = GetByIndex(var_135_cvector, 0);
	var_149_float = GetByIndex(var_135_cvector, 2);
	var_127_object->SetMapParams(var_148_float, var_149_float, var_129_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_8133(bool var_165_bool)
{
	int var_167_int;
	func_7160(var_167_int, "d5q03");
	if(var_167_int == 1000)
		var_165_bool = true;
	var_165_bool = false;
}


// @pe
void func_6087(object var_2_object, string var_125_string)
{
	bool var_126_bool;
	func_7232(var_126_bool);
	if(!var_126_bool) //@nz
		return 0;
	if(var_125_string == var_2_object)
		return 0;
	string var_129_string;
	func_7125(var_129_string);
	var_2_object = var_129_string;
}


// @pe
void func_7624(void)
{
}


// @pe
void func_7626(void)
{
	@SetVariable("ood5MladVlad1", 1);
}


// @pe
void func_3021(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_553_object, object var_554_object)
{
	var_0_object = var_554_object;
	var_1_object = var_553_object;
	var_3_object = false;
	if(1 != 0) {
		func_3098(var_554_object, "Neutral");
		var_0_object->SetMessage(10212); //@t
		var_0_object->ClearReplies(); //@t
		bool var_566_bool = false;
		bool var_567_bool;
		func_7996(var_1_object);
		if(var_567_bool != 0) {
			bool var_573_bool;
			func_8008(var_1_object);
			if(var_573_bool != 0)
				var_566_bool = true;
		}
		if(var_566_bool != 0)
			var_0_object->AddReply(10213, 11260, 11259); //@t
		var_0_object->AddReply(10302, 11359, 11358); //@t
		var_0_object->AddReply(10334, 11395, 11394); //@t
		goto Label_3068;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbd1";
	}
Label_3068:
	bool var_584_bool;
	func_7232(var_584_bool);
	if(var_584_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7125(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3097;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3097:
		return 0;

	}
	
}


// @pe
void func_7632(void)
{
	@SetVariable("ood5MladVlad2", 1);
}


// @pe
void func_7121(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_8145(bool var_172_bool)
{
	int var_174_int;
	func_7160(var_174_int, "d5q03");
	if(var_174_int == -1)
		var_172_bool = true;
	var_172_bool = false;
}


void func_7125(string var_45_string)
{
	@Trace("playing " + var_45_string);
	float var_48_float;
	float var_49_float;
	@lshGetAnimTimes(var_45_string, var_48_float, var_49_float);
	@lshPlayAnimation(var_48_float, var_49_float);
	@Trace("start: " + var_48_float);
	@Trace("end: " + var_49_float);
}


// @pe
void func_7638(void)
{
}


// @pe
void func_7640(void)
{
	@SetVariable("ood5MladVlad3", 1);
}


// @pe
void func_2009(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_446_object, object var_447_object)
{
	var_0_object = var_447_object;
	var_1_object = var_446_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_453_bool = false;
		bool var_454_bool;
		func_7924(var_1_object);
		if(var_454_bool != 0) {
			bool var_460_bool;
			func_7912(var_1_object);
			if(!var_460_bool) //@nz
				var_453_bool = true;
		}
		if(var_453_bool != 0) {
			func_2166(var_447_object, "Neutral");
			var_0_object->SetMessage(6935); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(7509, 8291, 8290); //@t
			var_0_object->AddReply(7518, 8300, 8299); //@t
		} else {
					func_2166(var_447_object, "Neutral");
					var_0_object->SetMessage(6929); //@t
					var_0_object->ClearReplies(); //@t
					bool var_489_bool = false;
					bool var_490_bool;
					func_7936(var_1_object);
					if(var_490_bool != 0) {
						bool var_496_bool;
						func_7912(var_1_object);
						if(var_496_bool != 0)
							var_489_bool = true;
					}
					if(var_489_bool != 0)
						var_0_object->AddReply(6930, 7637, 7636); //@t
					bool var_501_bool;
					func_7948(var_1_object);
					if(var_501_bool != 0)
						var_0_object->AddReply(6938, 7645, 7644); //@t
					bool var_510_bool;
					func_7960(var_1_object);
					if(var_510_bool != 0)
						var_0_object->AddReply(6940, 7647, 7646); //@t
					bool var_519_bool;
					func_7972(var_1_object);
					if(var_519_bool != 0)
						var_0_object->AddReply(7776, 8568, 8577); //@t
					var_0_object->AddReply(7746, -1, 8547); //@t
		}
	}
	for(;;) {
		bool var_479_bool;
		func_7232(var_479_bool);
		if(var_479_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7125(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2165;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2165:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0x876";
EMIT "Pop(1)";
EMIT "Push((int) 9500)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9501)";
EMIT "Push((int) 10445)";
EMIT "Push((int) 10444)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9514)";
EMIT "Push((int) 10458)";
EMIT "Push((int) 10457)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x858";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x7dd";


// @pe
void func_8157(bool var_214_bool)
{
	int var_216_int;
	func_7160(var_216_int, "d5q03");
	if(var_216_int == 2)
		var_214_bool = true;
	var_214_bool = false;
}


void func_7646(void)
{
	object var_160_object;
	func_8622(var_160_object);
	object var_158_object;
	var_160_object = var_158_object;
	object var_159_object;
	var_158_object->FindMark(var_159_object, "d6q02BigVlad");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d6q02KapellaGotoMladVlad");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d6q02MladVladGotoBigVlad");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d6q02MladVladGotoBigVladSelf");
	if(var_159_object != 0)
		var_159_object->Remove();
	func_8801();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_8672(int var_98_int)
{
	int var_100_int;
	@GetVariable("player", var_100_int);
	if(var_100_int == 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x21ef";
	}
	if(var_100_int == 1) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
}


void func_7143(void)
{
	bool var_43_bool;
	func_7232(var_43_bool);
	if(var_43_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_8169(bool var_220_bool)
{
	int var_222_int;
	func_7160(var_222_int, "ood5MladVlad1");
	if(var_222_int == 0) {
		var_220_bool = true;
		return 0;
	}
	var_220_bool = false;
}


void func_7150(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


void func_8689(void)
{
	@Trace("Adding diary entry");
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 37, 2, 12119);
	bool var_76_bool; object var_77_object;
	var_71_object = var_77_object;
	func_8593(var_76_bool, var_77_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8181(bool var_232_bool)
{
	int var_234_int;
	func_7160(var_234_int, "ood5MladVlad2");
	if(var_234_int == 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


void func_7160(int var_145_int, string var_146_string)
{
	int var_148_int;
	@GetVariable(var_146_string, var_148_int);
	var_148_int = var_145_int;
}


void func_7165(object var_107_object, string var_108_string)
{
	object var_111_object;
	@GetMainOutdoorScene(var_111_object);
	object var_112_object;
	@AddBlankActor(var_112_object, var_111_object, var_108_string, (var_108_string + ".bin"));
	var_112_object = var_107_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


