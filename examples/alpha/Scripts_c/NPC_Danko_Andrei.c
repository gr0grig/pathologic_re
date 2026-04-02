// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		func_6063();
		bool var_37_bool;
		func_4856(var_37_bool);
		if(!var_37_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4921("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_36_object;
		var_35_bool = var_36_object;
		func_6068(var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_4844(var_36_bool, var_37_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4939();
			if(var_35_string == 224) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5280();
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(190, 228, 227); //@t
				var_0_object->AddReply(188, 226, 225); //@t
				return 0;
			}
			if(var_35_string == 226) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(192, 233, 229); //@t
				var_0_object->AddReply(193, -1, 230); //@t
				return 0;
			}
			if(var_35_string == 233) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(203, -1, 241); //@t
				return 0;
			}
			if(var_35_string == 228) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(197, 236, 234); //@t
				var_0_object->AddReply(198, 9260, 235); //@t
				return 0;
			}
			if(var_35_string == 9260) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(8437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8438, -1, 9261); //@t
				return 0;
			}
			if(var_35_string == 236) {
				func_175(var_36_bool, "Neutral");
				var_0_object->SetMessage(199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(200, 233, 237); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_5040(var_108_bool);
			if(var_108_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc0";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4939();
			if(var_36_bool == 6349) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5042();
			}
			if(var_36_bool == 7165) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5042();
			}
			if(var_36_bool == 6353) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_5042();
			}
			if(var_36_bool == 7159) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_5048();
			}
			if(var_36_bool == 7160) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_5048();
			}
			if(var_36_bool == 7156) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_5048();
			}
			if(var_36_bool == 7157) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_5048();
			}
			if(var_36_bool == 6343) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_5048();
			}
			if(var_36_bool == 7171) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_5077();
			}
			if(var_36_bool == 7180) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_5077();
			}
			if(var_36_bool == 7178) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_5077();
			}
			if(var_36_bool == 7190) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_5083();
			}
			if(var_36_bool == 7205) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_5089();
			}
			if(var_36_bool == 7203) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_5089();
			}
			if(var_36_bool == 7200) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_5325();
			}
			if(var_36_bool == 7198) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_5089();
			}
			if(var_36_bool == 7213) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_5095();
			}
			if(var_36_bool == 7214) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_5095();
			}
			if(var_36_bool == 7237) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_5101();
			}
			if(var_36_bool == 7238) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_5101();
			}
			if(var_36_bool == 7229) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_5101();
			}
			if(var_36_bool == 7230) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_5101();
			}
			if(var_36_bool == 7244) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_5359();
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_5119();
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_5113();
			}
			if(var_36_bool == 7249) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_5113();
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_5119();
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_5359();
			}
			if(var_36_bool == 7250) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_5113();
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_5359();
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_5119();
			}
			if(var_35_string == 7128) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6465); //@t
				var_0_object->ClearReplies(); //@t
				bool var_191_bool = false;
				bool var_192_bool;
				func_5377(var_1_object);
				if(var_192_bool != 0) {
					bool var_200_bool;
					func_5401(var_1_object);
					if(var_200_bool != 0)
						var_191_bool = true;
				}
				if(var_191_bool != 0)
					var_0_object->AddReply(6466, 6344, 7129); //@t
				bool var_209_bool = false;
				bool var_210_bool;
				func_5641(var_210_bool, var_1_object);
				if(var_210_bool != 0) {
					bool var_221_bool;
					func_5389(var_1_object);
					if(var_221_bool != 0)
						var_209_bool = true;
				}
				if(var_209_bool != 0)
					var_0_object->AddReply(6467, 6336, 7130); //@t
				bool var_230_bool = false;
				bool var_231_bool;
				func_5855(var_1_object);
				if(var_231_bool != 0) {
					bool var_237_bool;
					func_5413(var_1_object);
					if(var_237_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(6470, 7167, 7133); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_5699(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_5425(var_1_object);
					if(var_253_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(6471, 7181, 7134); //@t
				bool var_262_bool = false;
				bool var_263_bool;
				func_5687(var_1_object);
				if(var_263_bool != 0) {
					bool var_269_bool;
					func_5437(var_1_object);
					if(var_269_bool != 0)
						var_262_bool = true;
				}
				if(var_262_bool != 0)
					var_0_object->AddReply(6474, 7191, 7137); //@t
				bool var_278_bool = false;
				bool var_279_bool;
				func_5795(var_1_object);
				if(var_279_bool != 0) {
					bool var_285_bool;
					func_5449(var_1_object);
					if(var_285_bool != 0)
						var_278_bool = true;
				}
				if(var_278_bool != 0)
					var_0_object->AddReply(6476, 7206, 7139); //@t
				bool var_294_bool = false;
				bool var_295_bool;
				func_5617(var_1_object);
				if(var_295_bool != 0) {
					bool var_301_bool;
					func_5461(var_1_object);
					if(var_301_bool != 0)
						var_294_bool = true;
				}
				if(var_294_bool != 0)
					var_0_object->AddReply(6481, 7220, 7144); //@t
				bool var_310_bool = false;
				bool var_311_bool;
				func_5783(var_1_object);
				if(var_311_bool != 0) {
					bool var_317_bool;
					func_5473(var_1_object);
					if(var_317_bool != 0)
						var_310_bool = true;
				}
				if(var_310_bool != 0)
					var_0_object->AddReply(6488, 7241, 7151); //@t
				var_0_object->AddReply(6502, -1, 7166); //@t
				return 0;
			}
			if(var_35_string == 7241) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6573, 7243, 7242); //@t
				return 0;
			}
			if(var_35_string == 7243) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6575, -1, 7244); //@t
				bool var_343_bool;
				func_5485(var_1_object);
				if(!var_343_bool) //@nz
					var_0_object->AddReply(6576, 7248, 7245); //@t
				bool var_353_bool;
				func_5867(var_1_object);
				if(!var_353_bool) //@nz
					var_0_object->AddReply(6577, 7247, 7246); //@t
				return 0;
			}
			if(var_35_string == 7247) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6581, -1, 7250); //@t
				return 0;
			}
			if(var_35_string == 7248) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6580, -1, 7249); //@t
				return 0;
			}
			if(var_35_string == 7220) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6554, 7222, 7221); //@t
				var_0_object->AddReply(6557, 7225, 7224); //@t
				return 0;
			}
			if(var_35_string == 7225) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6559, 7231, 7226); //@t
				var_0_object->AddReply(6560, 7228, 7227); //@t
				return 0;
			}
			if(var_35_string == 7228) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6562, -1, 7229); //@t
				var_0_object->AddReply(6563, -1, 7230); //@t
				return 0;
			}
			if(var_35_string == 7231) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6564); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6565, 7234, 7232); //@t
				var_0_object->AddReply(6566, 7234, 7233); //@t
				return 0;
			}
			if(var_35_string == 7222) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6556, 7234, 7223); //@t
				return 0;
			}
			if(var_35_string == 7234) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6568, 7236, 7235); //@t
				return 0;
			}
			if(var_35_string == 7236) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6570, -1, 7237); //@t
				var_0_object->AddReply(6571, -1, 7238); //@t
				return 0;
			}
			if(var_35_string == 7206) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6542, 7208, 7207); //@t
				var_0_object->AddReply(6551, 7208, 7216); //@t
				return 0;
			}
			if(var_35_string == 7208) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6544, 7210, 7209); //@t
				var_0_object->AddReply(6552, 7212, 7218); //@t
				return 0;
			}
			if(var_35_string == 7210) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6546, 7212, 7211); //@t
				return 0;
			}
			if(var_35_string == 7212) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6547); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6548, -1, 7213); //@t
				var_0_object->AddReply(6549, -1, 7214); //@t
				return 0;
			}
			if(var_35_string == 7191) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6527, 7193, 7192); //@t
				return 0;
			}
			if(var_35_string == 7193) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6529, 7195, 7194); //@t
				var_0_object->AddReply(6531, 7197, 7196); //@t
				return 0;
			}
			if(var_35_string == 7197) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6533, -1, 7198); //@t
				return 0;
			}
			if(var_35_string == 7195) {
				object var_504_object; object var_505_object;
				var_504_object = var_1_object;
				var_505_object = var_0_object;
				func_5325();
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6530); //@t
				var_0_object->ClearReplies(); //@t
				bool var_508_bool;
				func_5651(var_1_object);
				if(!var_508_bool) //@nz
					var_0_object->AddReply(6534, 7201, 7199); //@t
				var_0_object->AddReply(6535, -1, 7200); //@t
				return 0;
			}
			if(var_35_string == 7201) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6536); //@t
				var_0_object->ClearReplies(); //@t
				bool var_525_bool;
				func_5365(var_1_object);
				if(!var_525_bool) //@nz
					var_0_object->AddReply(6537, 7204, 7202); //@t
				var_0_object->AddReply(6538, -1, 7203); //@t
				return 0;
			}
			if(var_35_string == 7204) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6540, -1, 7205); //@t
				return 0;
			}
			if(var_35_string == 7181) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6518, 7183, 7182); //@t
				return 0;
			}
			if(var_35_string == 7183) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6520, 7185, 7184); //@t
				var_0_object->AddReply(6522, 7187, 7186); //@t
				return 0;
			}
			if(var_35_string == 7187) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6525, -1, 7190); //@t
				return 0;
			}
			if(var_35_string == 7185) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6524, 7187, 7188); //@t
				return 0;
			}
			if(var_35_string == 7167) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6503); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6504, 7170, 7168); //@t
				var_0_object->AddReply(6505, 7173, 7169); //@t
				return 0;
			}
			if(var_35_string == 7173) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6510, 7175, 7174); //@t
				return 0;
			}
			if(var_35_string == 7175) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6511); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6512, 7177, 7176); //@t
				return 0;
			}
			if(var_35_string == 7177) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6513); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6514, -1, 7178); //@t
				return 0;
			}
			if(var_35_string == 7170) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6507, -1, 7171); //@t
				var_0_object->AddReply(6508, 7179, 7172); //@t
				return 0;
			}
			if(var_35_string == 7179) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6516, -1, 7180); //@t
				return 0;
			}
			if(var_35_string == 6336) {
				object var_626_object; object var_627_object;
				var_626_object = var_1_object;
				var_627_object = var_0_object;
				func_5286();
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(5751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5752, 6338, 6337); //@t
				var_0_object->AddReply(5756, 6342, 6341); //@t
				return 0;
			}
			if(var_35_string == 6342) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(5757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5758, -1, 6343); //@t
				return 0;
			}
			if(var_35_string == 6338) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(5753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5754, 7158, 6339); //@t
				var_0_object->AddReply(5755, 7155, 6340); //@t
				return 0;
			}
			if(var_35_string == 7155) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6493, -1, 7156); //@t
				var_0_object->AddReply(6494, -1, 7157); //@t
				return 0;
			}
			if(var_35_string == 7158) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6496, -1, 7159); //@t
				var_0_object->AddReply(6497, -1, 7160); //@t
				return 0;
			}
			if(var_35_string == 6344) {
				bool var_677_bool;
				func_5389(var_1_object);
				if(var_677_bool != 0) {
					object var_679_object; object var_680_object;
					var_679_object = var_1_object;
					var_680_object = var_0_object;
					func_5107();
					func_606(var_36_bool, "Neutral");
					var_0_object->SetMessage(5759); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5760, 6346, 6345); //@t
					var_0_object->AddReply(5769, 7161, 6354); //@t
					return 0;
				}
			}
			if(var_35_string == 7161) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6499, 6346, 7162); //@t
				return 0;
			}
			if(var_35_string == 6346) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(5761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5762, 6348, 6347); //@t
				var_0_object->AddReply(5765, 6351, 6350); //@t
				return 0;
			}
			if(var_35_string == 6351) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(5766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5767, 7164, 6352); //@t
				var_0_object->AddReply(5768, -1, 6353); //@t
				return 0;
			}
			if(var_35_string == 7164) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(6500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6501, -1, 7165); //@t
				return 0;
			}
			if(var_35_string == 6348) {
				func_606(var_36_bool, "Neutral");
				var_0_object->SetMessage(5763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5764, -1, 6349); //@t
				return 0;
			}
			var_3_string = true;
			bool var_732_bool;
			func_5040(var_732_bool);
			if(var_732_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x26f";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4939();
			if(var_36_bool == 7899) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5125();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5161();
				object var_95_object = var_1_object;
				func_5331(var_0_object);
			}
			if(var_36_bool == 7900) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_5125();
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_5161();
			}
			if(var_36_bool == 7913) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_5125();
			}
			if(var_36_bool == 7909) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_5125();
			}
			if(var_36_bool == 7918) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_5131();
			}
			if(var_36_bool == 7919) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_5131();
			}
			if(var_36_bool == 7942) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_5137();
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_5193();
				object var_177_object = var_1_object;
				func_5253(var_0_object);
				object var_184_object = var_1_object;
				func_5054(var_0_object);
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_object;
				func_5065();
			}
			if(var_36_bool == 7947) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_object;
				func_5137();
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_5193();
				object var_203_object = var_1_object;
				func_5253(var_0_object);
				object var_205_object = var_1_object;
				func_5054(var_0_object);
				object var_207_object; object var_208_object;
				var_207_object = var_1_object;
				var_208_object = var_0_object;
				func_5065();
			}
			if(var_36_bool == 7948) {
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_5143();
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_5225();
			}
			if(var_36_bool == 7949) {
				object var_244_object; object var_245_object;
				var_244_object = var_1_object;
				var_245_object = var_0_object;
				func_5143();
				object var_246_object; object var_247_object;
				var_246_object = var_1_object;
				var_247_object = var_0_object;
				func_5225();
			}
			if(var_36_bool == 7950) {
				object var_250_object; object var_251_object;
				var_250_object = var_1_object;
				var_251_object = var_0_object;
				func_5149();
			}
			if(var_35_string == 7570) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(6864); //@t
				var_0_object->ClearReplies(); //@t
				bool var_272_bool = false;
				bool var_273_bool;
				func_5497(var_1_object);
				if(var_273_bool != 0) {
					bool var_281_bool;
					func_5569(var_1_object);
					if(var_281_bool != 0)
						var_272_bool = true;
				}
				if(var_272_bool != 0)
					var_0_object->AddReply(6865, 7572, 7571); //@t
				bool var_290_bool = false;
				bool var_291_bool;
				func_5509(var_1_object);
				if(var_291_bool != 0) {
					bool var_297_bool;
					func_5581(var_1_object);
					if(var_297_bool != 0)
						var_290_bool = true;
				}
				if(var_290_bool != 0)
					var_0_object->AddReply(6868, 7575, 7574); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_5521(var_1_object);
				if(var_307_bool != 0) {
					bool var_313_bool;
					func_5593(var_1_object);
					if(var_313_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(6870, 7577, 7576); //@t
				bool var_322_bool = false;
				bool var_323_bool;
				func_5533(var_1_object);
				if(var_323_bool != 0) {
					bool var_329_bool;
					func_5605(var_1_object);
					if(var_329_bool != 0)
						var_322_bool = true;
				}
				if(var_322_bool != 0)
					var_0_object->AddReply(6874, 7581, 7580); //@t
				bool var_338_bool = false;
				bool var_339_bool;
				func_5545(var_1_object);
				if(var_339_bool != 0) {
					bool var_345_bool;
					func_5557(var_1_object);
					if(var_345_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(6872, 7579, 7578); //@t
				var_0_object->AddReply(7531, -1, 8313); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x88b";
			EMIT "Pop(1)";
			EMIT "Push((int) 9203)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9204)";
			EMIT "Push((int) 10097)";
			EMIT "Push((int) 10096)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9216)";
			EMIT "Push((int) 10111)";
			EMIT "Push((int) 10110)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_35_string == 10111) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(9217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9218, 10097, 10112); //@t
				return 0;
			}
			if(var_35_string == 10097) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(9205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9206, 10099, 10098); //@t
				var_0_object->AddReply(9210, 10103, 10102); //@t
				return 0;
			}
			if(var_35_string == 10103) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(9211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9212, 10105, 10104); //@t
				var_0_object->AddReply(9215, 10099, 10108); //@t
				return 0;
			}
			if(var_35_string == 10105) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(9213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9214, 10099, 10106); //@t
				return 0;
			}
			if(var_35_string == 10099) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(9207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9208, -1, 10100); //@t
				var_0_object->AddReply(9209, -1, 10101); //@t
				return 0;
			}
			if(var_35_string == 7579) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(6873); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7214, -1, 7950); //@t
				return 0;
			}
			if(var_35_string == 7581) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(6875); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7212, -1, 7948); //@t
				var_0_object->AddReply(7213, -1, 7949); //@t
				return 0;
			}
			if(var_35_string == 7577) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(6871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7192, 7926, 7924); //@t
				var_0_object->AddReply(7193, 7926, 7925); //@t
				var_0_object->AddReply(7195, 7928, 7927); //@t
				return 0;
			}
			if(var_35_string == 7928) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7197, 7926, 7929); //@t
				return 0;
			}
			if(var_35_string == 7926) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7194); //@t
				var_0_object->ClearReplies(); //@t
				bool var_442_bool;
				func_5711(var_1_object);
				if(var_442_bool != 0)
					var_0_object->AddReply(7198, 7932, 7931); //@t
				bool var_451_bool;
				func_5711(var_1_object);
				if(!var_451_bool) //@nz
					var_0_object->AddReply(7200, 7935, 7934); //@t
				return 0;
			}
			if(var_35_string == 7935) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7201); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7202, 7932, 7936); //@t
				return 0;
			}
			if(var_35_string == 7932) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7203, 7939, 7938); //@t
				var_0_object->AddReply(7208, 7944, 7943); //@t
				return 0;
			}
			if(var_35_string == 7944) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7210, 7939, 7945); //@t
				return 0;
			}
			if(var_35_string == 7939) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7204); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7205, 7941, 7940); //@t
				var_0_object->AddReply(7211, -1, 7947); //@t
				return 0;
			}
			if(var_35_string == 7941) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7207, -1, 7942); //@t
				return 0;
			}
			if(var_35_string == 7575) {
				object var_500_object; object var_501_object;
				var_500_object = var_1_object;
				var_501_object = var_0_object;
				func_5155();
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(6869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7183, 7915, 7914); //@t
				return 0;
			}
			if(var_35_string == 7915) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7185, 7917, 7916); //@t
				var_0_object->AddReply(7189, 7921, 7920); //@t
				return 0;
			}
			if(var_35_string == 7921) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7191, 7917, 7922); //@t
				return 0;
			}
			if(var_35_string == 7917) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7187, -1, 7918); //@t
				var_0_object->AddReply(7188, -1, 7919); //@t
				return 0;
			}
			if(var_35_string == 7572) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(6866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6867, 7894, 7573); //@t
				var_0_object->AddReply(7164, 7901, 7893); //@t
				return 0;
			}
			if(var_35_string == 7901) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7173, 7903, 7902); //@t
				return 0;
			}
			if(var_35_string == 7903) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7174); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7175, 7896, 7904); //@t
				return 0;
			}
			if(var_35_string == 7894) {
				object var_562_object; object var_563_object;
				var_562_object = var_1_object;
				var_563_object = var_0_object;
				func_5155();
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7166, 7896, 7895); //@t
				var_0_object->AddReply(7176, 7907, 7906); //@t
				return 0;
			}
			if(var_35_string == 7907) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7178, 7910, 7908); //@t
				var_0_object->AddReply(7179, -1, 7909); //@t
				return 0;
			}
			if(var_35_string == 7910) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7181, 7896, 7911); //@t
				var_0_object->AddReply(7182, -1, 7913); //@t
				return 0;
			}
			if(var_35_string == 7896) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7168, 7898, 7897); //@t
				return 0;
			}
			if(var_35_string == 7898) {
				func_2187(var_36_bool, "Neutral");
				var_0_object->SetMessage(7169); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7170, -1, 7899); //@t
				var_0_object->AddReply(7171, -1, 7900); //@t
				return 0;
			}
			var_3_string = true;
			bool var_609_bool;
			func_5040(var_609_bool);
			if(var_609_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x89c";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4939();
			if(var_36_bool == 10740) {
				object var_41_object = var_1_object;
				func_5269(var_0_object);
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_5071();
			}
			if(var_35_string == 10752) {
				bool var_66_bool = false;
				bool var_67_bool;
				func_5807(var_1_object);
				if(var_67_bool != 0) {
					bool var_75_bool;
					func_5629(var_1_object);
					if(!var_75_bool) //@nz
						var_66_bool = true;
				}
				if(var_66_bool != 0) {
					object var_82_object; object var_83_object;
					var_82_object = var_1_object;
					var_83_object = var_0_object;
					func_5347();
					func_3251(var_36_bool, "Neutral");
					var_0_object->SetMessage(9762); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9763, 10732, 10753); //@t
					var_0_object->AddReply(9770, 10754, 10761); //@t
					return 0;
				}
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(15310); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15311, -1, 16549); //@t
				return 0;
			}
			if(var_35_string == 10754) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9765, 10756, 10755); //@t
				var_0_object->AddReply(9769, 10756, 10759); //@t
				return 0;
			}
			if(var_35_string == 10756) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9767, -1, 10757); //@t
				var_0_object->AddReply(9768, -1, 10758); //@t
				return 0;
			}
			if(var_35_string == 10732) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9747, 10734, 10733); //@t
				var_0_object->AddReply(9757, 10734, 10744); //@t
				var_0_object->AddReply(9758, 10747, 10746); //@t
				return 0;
			}
			if(var_35_string == 10747) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9760, 10734, 10748); //@t
				var_0_object->AddReply(9761, 10734, 10750); //@t
				return 0;
			}
			if(var_35_string == 10734) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9749, 10736, 10735); //@t
				var_0_object->AddReply(9756, -1, 10743); //@t
				return 0;
			}
			if(var_35_string == 10736) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9751, 10738, 10737); //@t
				var_0_object->AddReply(9755, 10738, 10741); //@t
				return 0;
			}
			if(var_35_string == 10738) {
				func_3251(var_36_bool, "Neutral");
				var_0_object->SetMessage(9752); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9753, -1, 10739); //@t
				var_0_object->AddReply(9754, -1, 10740); //@t
				return 0;
			}
			var_3_string = true;
			bool var_186_bool;
			func_5040(var_186_bool);
			if(var_186_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcc4";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4939();
			if(var_36_bool == 14987) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5292();
			}
			if(var_35_string == 14986) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(13720); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool;
				func_5675(var_1_object);
				if(var_63_bool != 0)
					var_0_object->AddReply(13721, 13787, 14987); //@t
				var_0_object->AddReply(13722, -1, 14988); //@t
				return 0;
			}
			if(var_35_string == 13787) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12613); //@t
				var_0_object->ClearReplies(); //@t
				bool var_81_bool;
				func_5663(var_1_object);
				if(var_81_bool != 0)
					var_0_object->AddReply(12614, 13789, 13788); //@t
				var_0_object->AddReply(12632, 13812, 13811); //@t
				bool var_93_bool;
				func_5663(var_1_object);
				if(!var_93_bool) //@nz
					var_0_object->AddReply(12631, 13789, 13809); //@t
				return 0;
			}
			if(var_35_string == 13812) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12633); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12634, 13791, 13813); //@t
				return 0;
			}
			if(var_35_string == 13789) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12616, 13791, 13790); //@t
				var_0_object->AddReply(12623, 13800, 13799); //@t
				return 0;
			}
			if(var_35_string == 13800) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12625, 13802, 13801); //@t
				var_0_object->AddReply(12629, 13802, 13805); //@t
				return 0;
			}
			if(var_35_string == 13802) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12627, -1, 13803); //@t
				var_0_object->AddReply(12628, -1, 13804); //@t
				return 0;
			}
			if(var_35_string == 13791) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12618, 13793, 13792); //@t
				var_0_object->AddReply(12622, 13802, 13797); //@t
				return 0;
			}
			if(var_35_string == 13793) {
				func_3649(var_36_bool, "Neutral");
				var_0_object->SetMessage(12619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12621, 13802, 13795); //@t
				var_0_object->AddReply(12620, -1, 13794); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_5040(var_156_bool);
			if(var_156_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe52";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4939();
			if(var_35_string == 14165) {
				bool var_41_bool = false;
				bool var_42_bool = false;
				bool var_43_bool;
				func_5819(var_1_object);
				if(!var_43_bool) { //@nz
					bool var_52_bool;
					func_5831(var_1_object);
					if(!var_52_bool) //@nz
						var_42_bool = true;
				}
				if(var_42_bool != 0) {
					bool var_59_bool;
					func_5843(var_1_object);
					if(var_59_bool != 0)
						var_41_bool = true;
				}
				if(var_41_bool != 0) {
					object var_65_object; object var_66_object;
					var_65_object = var_1_object;
					var_66_object = var_0_object;
					func_5353();
					func_4053(var_36_bool, "Neutral");
					var_0_object->SetMessage(12960); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12961, 14167, 14166); //@t
					return 0;
				}
				func_4053(var_36_bool, "Neutral");
				var_0_object->SetMessage(12966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12967, -1, 14172); //@t
				return 0;
			}
			if(var_35_string == 14167) {
				func_4053(var_36_bool, "Neutral");
				var_0_object->SetMessage(12962); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12963, 14169, 14168); //@t
				return 0;
			}
			if(var_35_string == 14169) {
				func_4053(var_36_bool, "Neutral");
				var_0_object->SetMessage(12964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12965, -1, 14170); //@t
				return 0;
			}
			var_3_string = true;
			bool var_107_bool;
			func_5040(var_107_bool);
			if(var_107_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfe6";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int)
	{
		if(1 != 0) {
			func_4939();
			if(var_36_int == 15743) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5304();
			}
			if(var_36_int == 15478) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_5313();
			}
			if(var_36_int == 15490) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_5319();
			}
			if(var_35_int == 15459) {
				bool var_84_bool = false;
				bool var_85_bool;
				func_5723(var_1_object);
				if(var_85_bool != 0) {
					bool var_93_bool;
					func_5735(var_1_object);
					if(var_93_bool != 0)
						var_84_bool = true;
				}
				if(var_84_bool != 0) {
					object var_99_object; object var_100_object;
					var_99_object = var_1_object;
					var_100_object = var_0_object;
					func_5298();
					func_4366(var_36_int, "Neutral");
					var_0_object->SetMessage(14241); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14242, 15461, 15460); //@t
					return 0;
				}
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14258); //@t
				var_0_object->ClearReplies(); //@t
				bool var_124_bool = false;
				bool var_125_bool;
				func_5747(var_1_object);
				if(var_125_bool != 0) {
					bool var_131_bool;
					func_5759(var_1_object);
					if(var_131_bool != 0)
						var_124_bool = true;
				}
				if(var_124_bool != 0)
					var_0_object->AddReply(14259, 15479, 15478); //@t
				bool var_140_bool;
				func_5771(var_1_object);
				if(var_140_bool != 0)
					var_0_object->AddReply(14271, 15491, 15490); //@t
				var_0_object->AddReply(14278, -1, 15498); //@t
				return 0;
			}
			if(var_35_int == 15491) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14273, 15493, 15492); //@t
				return 0;
			}
			if(var_35_int == 15493) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14275, 15495, 15494); //@t
				return 0;
			}
			if(var_35_int == 15495) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14277, -1, 15496); //@t
				return 0;
			}
			if(var_35_int == 15479) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14261, 15481, 15480); //@t
				return 0;
			}
			if(var_35_int == 15481) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14263, 15483, 15482); //@t
				var_0_object->AddReply(14268, 15488, 15487); //@t
				return 0;
			}
			if(var_35_int == 15488) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14269); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14270, -1, 15489); //@t
				return 0;
			}
			if(var_35_int == 15483) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14265, 15485, 15484); //@t
				return 0;
			}
			if(var_35_int == 15485) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14267, -1, 15486); //@t
				return 0;
			}
			if(var_35_int == 15461) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14244, 15463, 15462); //@t
				return 0;
			}
			if(var_35_int == 15463) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14246, 15465, 15464); //@t
				var_0_object->AddReply(14257, 15465, 15475); //@t
				return 0;
			}
			if(var_35_int == 15465) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14248, 15467, 15466); //@t
				return 0;
			}
			if(var_35_int == 15467) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14250, 15469, 15468); //@t
				var_0_object->AddReply(14508, 15742, 15746); //@t
				return 0;
			}
			if(var_35_int == 15469) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14252, 15471, 15470); //@t
				var_0_object->AddReply(14506, 15748, 15744); //@t
				return 0;
			}
			if(var_35_int == 15748) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14511, 15751, 15750); //@t
				var_0_object->AddReply(14510, -1, 15749); //@t
				return 0;
			}
			if(var_35_int == 15751) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14513, -1, 15752); //@t
				return 0;
			}
			if(var_35_int == 15471) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14254, 15742, 15472); //@t
				return 0;
			}
			if(var_35_int == 15742) {
				func_4366(var_36_int, "Neutral");
				var_0_object->SetMessage(14504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14505, -1, 15743); //@t
				return 0;
			}
			var_3_string = true;
			bool var_286_bool;
			func_5040(var_286_bool);
			if(var_286_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x111f";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_3586(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_554_object, object var_555_object)
{
	var_0_object = var_555_object;
	var_3_object = false;
	if(1 != 0) {
		func_3649(var_555_object, "Neutral");
		var_0_object->SetMessage(13720); //@t
		var_0_object->ClearReplies(); //@t
		bool var_567_bool;
		func_5675(var_554_object);
		if(var_567_bool != 0)
			var_0_object->AddReply(13721, 13787, 14987); //@t
		var_0_object->AddReply(13722, -1, 14988); //@t
		goto Label_3619;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe06";
	}
Label_3619:
	bool var_579_bool;
	func_5040(var_579_bool);
	if(var_579_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4921(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3648;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3648:
		return 0;

	}
	
}


// @pe
void func_5125(void)
{
	@SetVariable("ood2Andrei1", 1);
}


// @pe
void func_5641(bool var_210_bool, object var_211_object)
{
	object var_213_object;
	var_211_object = var_213_object;
	func_5879(var_213_object);
	bool var_212_bool;
	if(var_212_bool != 0) {
		var_210_bool = true;
		return 0;
	}
	var_210_bool = false;
}


// @pe
void func_5131(void)
{
	@SetVariable("ood2Andrei2", 1);
}


// @pe
void func_5137(void)
{
	@SetVariable("ood2Andrei3", 1);
}


// @pe
void func_5651(bool var_508_bool)
{
	int var_510_int;
	func_4956(var_510_int, "KnowMark");
	if(var_510_int == 1)
		var_508_bool = true;
	var_508_bool = false;
}


void func_3095(object var_0_object, int var_464_int, object var_465_object)
{
	var_0_object = var_465_object;
	bool var_475_bool; object var_476_object;
	var_465_object = var_476_object;
	func_4861(var_475_bool, var_476_object);
	if(!var_475_bool) { //@nz
		var_464_int = -2;
		return 8;
	}
	object var_471_object;
	@CreateDialog(var_471_object);
	int var_478_int;
	func_5036(var_478_int);
	var_471_object->SetNPCName(var_478_int);
	string var_479_string;
	func_5038(var_479_string);
	var_471_object->SetPhoto(var_479_string);
	int var_480_int;
	func_5982(var_480_int);
	var_471_object->SetPlayerName(var_480_int);
	bool var_472_bool;
	@IsOverrideActive(var_472_bool);
	if(var_472_bool != 0) {
		var_464_int = -2;
		return 8;
	}
	@DoDialog(var_471_object);
	object var_482_object; object var_483_object;
	var_465_object = var_482_object;
	var_471_object = var_483_object;
	TaskCall(9);
	func_3158(var_484_object, var_485_object, var_486_string, var_487_bool, var_482_object, var_483_object);
	TaskReturn();
	bool var_474_bool;
	var_471_object->IsDialogEnd(var_474_bool);
	
	for(;;) {
		var_532_bool = !var_474_bool; //@nz
		if(var_532_bool == 0) goto Label_3147;
		@sync();
		var_471_object->IsDialogEnd(var_474_bool);
	}
	
Label_3147:
	object var_533_object;
	var_465_object = var_533_object;
	func_4917();
	@StopDialog(var_471_object);
	var_471_object->GetReturnValue(-1);
	int var_473_int = var_464_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5143(void)
{
	@SetVariable("ood2Andrei4", 1);
}


// @pe
void func_5149(void)
{
	@SetVariable("ood2Andrei5", 1);
}


// @pe
void func_5663(bool var_81_bool)
{
	int var_83_int;
	func_4956(var_83_int, "d5q01");
	if(var_83_int == 1000)
		var_81_bool = true;
	var_81_bool = false;
}


// @pe
void func_5155(void)
{
	@SetVariable("KnowAgo", 1);
}


void func_5161(void)
{
	@SetVariable("d2q02", 2);
	object var_51_object;
	func_5932(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_4999(var_62_float);
	var_48_object->AddMark("d2q02AndreiGotoPetr", "pt_map_petr", 0, 15273, var_62_float);
	float var_69_float;
	func_4999(var_69_float);
	var_48_object->AddMark("d2q02AndreiGotoPetrSelf", "pt_map_andrei", 0, 15279, var_69_float);
	func_6031();
}
EMIT "Stack[-1] = 0";


// @pe
void func_5675(bool var_63_bool)
{
	int var_65_int;
	func_4956(var_65_int, "ood6Andrei1");
	if(var_65_int == 0) {
		var_63_bool = true;
		return 0;
	}
	var_63_bool = false;
}


void func_49(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	var_42_object = var_53_object;
	func_4861(var_52_bool, var_53_object);
	if(!var_52_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_93_int;
	func_5036(var_93_int);
	var_48_object->SetNPCName(var_93_int);
	string var_94_string;
	func_5038(var_94_string);
	var_48_object->SetPhoto(var_94_string);
	int var_95_int;
	func_5982(var_95_int);
	var_48_object->SetPlayerName(var_95_int);
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	@DoDialog(var_48_object);
	object var_104_object; object var_105_object;
	var_42_object = var_104_object;
	var_48_object = var_105_object;
	TaskCall(3);
	func_112(var_106_object, var_107_object, var_108_string, var_109_bool, var_104_object, var_105_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_145_bool = !var_51_bool; //@nz
		if(var_145_bool == 0) goto Label_101;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_101:
	object var_146_object;
	var_42_object = var_146_object;
	func_4917();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5687(bool var_263_bool)
{
	int var_265_int;
	func_4956(var_265_int, "KnowAnna");
	if(var_265_int == 1)
		var_263_bool = true;
	var_263_bool = false;
}


// @pe
void func_3649(object var_2_object, string var_47_string)
{
	bool var_48_bool;
	func_5040(var_48_bool);
	if(!var_48_bool) //@nz
		return 0;
	if(var_47_string == var_2_object)
		return 0;
	string var_51_string;
	func_4921(var_51_string);
	var_2_object = var_51_string;
}


// @pe
void func_5699(bool var_247_bool)
{
	int var_249_int;
	func_4956(var_249_int, "KnowEva");
	if(var_249_int == 1)
		var_247_bool = true;
	var_247_bool = false;
}


void func_5193(void)
{
	@SetVariable("d2q02", 6);
	object var_157_object;
	func_5932(var_157_object);
	object var_154_object;
	var_157_object = var_154_object;
	float var_162_float;
	func_4999(var_162_float);
	var_154_object->AddMark("d2q02AndreiGotoGrif", "pt_map_grif", 0, 15277, var_162_float);
	float var_167_float;
	func_4999(var_167_float);
	var_154_object->AddMark("d2q02AndreiGotoGrifSelf", "pt_map_andrei", 0, 15282, var_167_float);
	func_6015();
}
EMIT "Stack[-1] = 0";


// @pe
void func_5711(bool var_442_bool)
{
	int var_444_int;
	func_4956(var_444_int, "KnowGrif");
	if(var_444_int == 1)
		var_442_bool = true;
	var_442_bool = false;
}


// @pe
void func_3158(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_482_object, object var_483_object)
{
	var_0_object = var_483_object;
	var_1_object = var_482_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_489_bool = false;
		bool var_490_bool;
		func_5807(var_1_object);
		if(var_490_bool != 0) {
			bool var_496_bool;
			func_5629(var_1_object);
			if(!var_496_bool) //@nz
				var_489_bool = true;
		}
		if(var_489_bool != 0) {
			object var_503_object; object var_504_object;
			var_503_object = var_1_object;
			var_504_object = var_0_object;
			func_5347();
			func_3251(var_483_object, "Neutral");
			var_0_object->SetMessage(9762); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9763, 10732, 10753); //@t
			var_0_object->AddReply(9770, 10754, 10761); //@t
		} else {
					func_3251(var_483_object, "Neutral");
					var_0_object->SetMessage(15310); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15311, -1, 16549); //@t
		}
	}
	for(;;) {
		bool var_519_bool;
		func_5040(var_519_bool);
		if(var_519_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4921(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3250;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3250:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc5a";


// @pe
void func_5723(bool var_85_bool)
{
	int var_87_int;
	func_4956(var_87_int, "d11q01");
	if(var_87_int == 3)
		var_85_bool = true;
	var_85_bool = false;
}


void func_4187(object var_0_object, int var_668_int, object var_669_object)
{
	var_0_object = var_669_object;
	bool var_679_bool; object var_680_object;
	var_669_object = var_680_object;
	func_4861(var_679_bool, var_680_object);
	if(!var_679_bool) { //@nz
		var_668_int = -2;
		return 8;
	}
	object var_675_object;
	@CreateDialog(var_675_object);
	int var_682_int;
	func_5036(var_682_int);
	var_675_object->SetNPCName(var_682_int);
	string var_683_string;
	func_5038(var_683_string);
	var_675_object->SetPhoto(var_683_string);
	int var_684_int;
	func_5982(var_684_int);
	var_675_object->SetPlayerName(var_684_int);
	bool var_676_bool;
	@IsOverrideActive(var_676_bool);
	if(var_676_bool != 0) {
		var_668_int = -2;
		return 8;
	}
	@DoDialog(var_675_object);
	object var_686_object; object var_687_object;
	var_669_object = var_686_object;
	var_675_object = var_687_object;
	TaskCall(15);
	func_4250(var_688_object, var_689_object, var_690_string, var_691_bool, var_686_object, var_687_object);
	TaskReturn();
	bool var_678_bool;
	var_675_object->IsDialogEnd(var_678_bool);
	
	for(;;) {
		var_757_bool = !var_678_bool; //@nz
		if(var_757_bool == 0) goto Label_4239;
		@sync();
		var_675_object->IsDialogEnd(var_678_bool);
	}
	
Label_4239:
	object var_758_object;
	var_669_object = var_758_object;
	func_4917();
	@StopDialog(var_675_object);
	var_675_object->GetReturnValue(-1);
	int var_677_int = var_668_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_606(object var_2_object, string var_175_string)
{
	bool var_176_bool;
	func_5040(var_176_bool);
	if(!var_176_bool) //@nz
		return 0;
	if(var_175_string == var_2_object)
		return 0;
	string var_179_string;
	func_4921(var_179_string);
	var_2_object = var_179_string;
}


// @pe
void func_5735(bool var_93_bool)
{
	int var_95_int;
	func_4956(var_95_int, "ood11Andrei1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_5225(void)
{
	@SetVariable("d2q02", 8);
	object var_221_object;
	func_5932(var_221_object);
	object var_218_object;
	var_221_object = var_218_object;
	float var_226_float;
	func_4999(var_226_float);
	var_218_object->AddMark("d2q02ReadyAndrei", "pt_map_andrei", 0, 15284, var_226_float);
	func_6047();
	bool var_236_bool;
	func_4987(var_236_bool, "quest_d2_02", "put_patrol");
}
EMIT "Stack[-1] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_104_object, object var_105_object)
{
	var_0_object = var_105_object;
	var_3_object = false;
	if(1 != 0) {
		object var_111_object; object var_112_object;
		var_111_object = var_104_object;
		var_112_object = var_0_object;
		func_5280();
		func_175(var_105_object, "Neutral");
		var_0_object->SetMessage(187); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(190, 228, 227); //@t
		var_0_object->AddReply(188, 226, 225); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_137_bool;
	func_5040(var_137_bool);
	if(var_137_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4921(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_174;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_174:
		return 0;

	}
	
}


// @pe
void func_5747(bool var_125_bool)
{
	int var_127_int;
	func_4956(var_127_int, "d11q01");
	if(var_127_int == 4)
		var_125_bool = true;
	var_125_bool = false;
}


// @pe
void func_5759(bool var_131_bool)
{
	int var_133_int;
	func_4956(var_133_int, "ood11Andrei2");
	if(var_133_int == 0) {
		var_131_bool = true;
		return 0;
	}
	var_131_bool = false;
}


// @pe
void func_5253(object var_178_object)
{
	object var_182_object;
	func_5932(var_182_object);
	object var_179_object;
	var_182_object = var_179_object;
	func_5949(var_179_object, "pt_map_grif", (float)2);
	object var_183_object;
	func_5932(var_183_object);
	var_178_object->ShowMap(var_183_object);
}


// @pe
void func_2187(object var_2_object, string var_256_string)
{
	bool var_257_bool;
	func_5040(var_257_bool);
	if(!var_257_bool) //@nz
		return 0;
	if(var_256_string == var_2_object)
		return 0;
	string var_260_string;
	func_4921(var_260_string);
	var_2_object = var_260_string;
}


// @pe
void func_5771(bool var_140_bool)
{
	int var_142_int;
	func_4956(var_142_int, "ood11Andrei3");
	if(var_142_int == 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


// @pe
void func_5269(object var_41_object)
{
	@Trace("tvirin is given");
	object var_44_object;
	var_41_object = var_44_object;
	func_4974(var_44_object, "tvirin", 1);
}


// @pe
void func_5783(bool var_311_bool)
{
	int var_313_int;
	func_4956(var_313_int, "KnowLaska");
	if(var_313_int == 1)
		var_311_bool = true;
	var_311_bool = false;
}


// @pe
void func_4250(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_686_object, object var_687_object)
{
	var_0_object = var_687_object;
	var_1_object = var_686_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_693_bool = false;
		bool var_694_bool;
		func_5723(var_1_object);
		if(var_694_bool != 0) {
			bool var_700_bool;
			func_5735(var_1_object);
			if(var_700_bool != 0)
				var_693_bool = true;
		}
		if(var_693_bool != 0) {
			object var_706_object; object var_707_object;
			var_706_object = var_1_object;
			var_707_object = var_0_object;
			func_5298();
			func_4366(var_687_object, "Neutral");
			var_0_object->SetMessage(14241); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14242, 15461, 15460); //@t
		} else {
					func_4366(var_687_object, "Neutral");
					var_0_object->SetMessage(14258); //@t
					var_0_object->ClearReplies(); //@t
					bool var_729_bool = false;
					bool var_730_bool;
					func_5747(var_1_object);
					if(var_730_bool != 0) {
						bool var_736_bool;
						func_5759(var_1_object);
						if(var_736_bool != 0)
							var_729_bool = true;
					}
					if(var_729_bool != 0)
						var_0_object->AddReply(14259, 15479, 15478); //@t
					bool var_745_bool;
					func_5771(var_1_object);
					if(var_745_bool != 0)
						var_0_object->AddReply(14271, 15491, 15490); //@t
					var_0_object->AddReply(14278, -1, 15498); //@t
		}
	}
	for(;;) {
		bool var_719_bool;
		func_5040(var_719_bool);
		if(var_719_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4921(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4365;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4365:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x109e";


// @pe
void func_5280(void)
{
	@SetVariable("KnowAndrei", 1);
}


// @pe
void func_5795(bool var_279_bool)
{
	int var_281_int;
	func_4956(var_281_int, "KnowMaria");
	if(var_281_int == 1)
		var_279_bool = true;
	var_279_bool = false;
}


// @pe
void func_5286(void)
{
	@SetVariable("KnowNina", 1);
}


// @pe
void func_5292(void)
{
	@SetVariable("ood6Andrei1", 1);
}


// @pe
void func_175(object var_2_object, string var_45_string)
{
	bool var_46_bool;
	func_5040(var_46_bool);
	if(!var_46_bool) //@nz
		return 0;
	if(var_45_string == var_2_object)
		return 0;
	string var_49_string;
	func_4921(var_49_string);
	var_2_object = var_49_string;
}


// @pe
void func_5807(bool var_67_bool)
{
	int var_69_int;
	func_4956(var_69_int, "ood3Andrei1");
	if(var_69_int == 0) {
		var_67_bool = true;
		return 0;
	}
	var_67_bool = false;
}


// @pe
void func_5298(void)
{
	@SetVariable("ood11Andrei1", 1);
}


// @pe
void func_3251(object var_2_object, string var_86_string)
{
	bool var_87_bool;
	func_5040(var_87_bool);
	if(!var_87_bool) //@nz
		return 0;
	if(var_86_string == var_2_object)
		return 0;
	string var_90_string;
	func_4921(var_90_string);
	var_2_object = var_90_string;
}


// @pe
void func_5304(void)
{
	@SetVariable("d11q01", 4);
	func_5999();
}


// @pe
void func_5819(bool var_43_bool)
{
	int var_45_int;
	func_4956(var_45_int, "d10q01");
	if(var_45_int == 0) {
		var_43_bool = true;
		return 0;
	}
	var_43_bool = false;
}


// @pe
void func_5313(void)
{
	@SetVariable("ood11Andrei2", 1);
}


// @pe
void func_5831(bool var_52_bool)
{
	int var_54_int;
	func_4956(var_54_int, "d10q01");
	if(var_54_int == 1000)
		var_52_bool = true;
	var_52_bool = false;
}


// @pe
void func_5319(void)
{
	@SetVariable("ood11Andrei3", 1);
}


// @pe
void func_5325(void)
{
	@SetVariable("KnowMark", 1);
}


// @pe
void func_5331(object var_96_object)
{
	object var_100_object;
	func_5932(var_100_object);
	object var_97_object;
	var_100_object = var_97_object;
	func_5949(var_97_object, "pt_map_petr", (float)2);
	object var_120_object;
	func_5932(var_120_object);
	var_96_object->ShowMap(var_120_object);
}


// @pe
void func_5843(bool var_59_bool)
{
	int var_61_int;
	func_4956(var_61_int, "ood10Andrei1");
	if(var_61_int == 0) {
		var_59_bool = true;
		return 0;
	}
	var_59_bool = false;
}


// @pe
void func_5855(bool var_231_bool)
{
	int var_233_int;
	func_4956(var_233_int, "KnowPredictions");
	if(var_233_int == 1)
		var_231_bool = true;
	var_231_bool = false;
}


// @pe
void func_5347(void)
{
	@SetVariable("ood3Andrei1", 1);
}


void func_4837(object var_187_object, string var_188_string, int var_189_int)
{
	int var_191_int;
	var_187_object->GetProperty(var_188_string, var_191_int);
	var_187_object->SetProperty(var_188_string, (var_191_int + var_189_int));
}


// @pe
void func_5353(void)
{
	@SetVariable("ood10Andrei1", 1);
}


// @pe
void func_5867(bool var_353_bool)
{
	int var_355_int;
	func_4956(var_355_int, "KnowTermitnik");
	if(var_355_int == 1)
		var_353_bool = true;
	var_353_bool = false;
}


void func_4844(bool var_36_bool, object var_37_object)
{
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	bool var_45_bool;
	@Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
}


// @pe
void func_5359(void)
{
	@SetVariable("KnowTermitnik", 1);
}


// @pe
void func_5365(bool var_525_bool)
{
	int var_527_int;
	func_4956(var_527_int, "KnowTheater");
	if(var_527_int == 1)
		var_525_bool = true;
	var_525_bool = false;
}


// @pe
void func_5879(bool var_212_bool)
{
	int var_214_int;
	func_5013(var_214_int);
	if(var_214_int >= 18)
		var_212_bool = true;
	var_212_bool = false;
}


void func_4856(bool var_37_bool)
{
	bool var_39_bool;
	@IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
}


void func_4861(bool var_52_bool, object var_53_object)
{
	cvector var_63_cvector;
	var_53_object->GetPosition(var_63_cvector);
	float var_62_float;
	var_53_object->GetEyesHeight(var_62_float);
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (var_70_float + var_62_float);
	cvector var_64_cvector;
	@GetPosition(var_64_cvector);
	@GetEyesHeight(var_62_float);
	var_71_float = GetByIndex(var_64_cvector, 1);
	SetByIndex(var_64_cvector, 1) = (var_71_float + var_62_float);
	cvector var_65_cvector = var_63_cvector - var_64_cvector;
	var_72_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (float)0;
	var_74_float = sqrt(var_65_cvector | var_65_cvector);
	var_65_cvector /= var_74_float;
	cvector var_66_cvector = -var_65_cvector;
	cvector var_77_cvector;
	func_4946(var_77_cvector, (var_66_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_67_cvector = ((var_65_cvector * 70) + (var_77_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_69_bool;
	@IsOverrideActive(var_69_bool);
	if(var_69_bool != 0)
		var_52_bool = false;
	@StopWorld();
	@CameraTransit((var_64_cvector + var_67_cvector), var_66_cvector);
	var_90_float = GetByIndex(var_67_cvector, 0);
	var_91_float = GetByIndex(var_67_cvector, 2);
	@Rotate(var_90_float, var_91_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_52_bool = true;
}


// @pe
void func_5377(bool var_192_bool)
{
	int var_194_int;
	func_4956(var_194_int, "ood1Andrei1");
	if(var_194_int == 0) {
		var_192_bool = true;
		return 0;
	}
	var_192_bool = false;
}


void func_5890(object var_60_object)
{
	object var_62_object;
	@GetDiaryRoot(var_62_object);
	if(!var_62_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_60_object = false;
	}
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5389(bool var_221_bool)
{
	int var_223_int;
	func_4956(var_223_int, "ood1Andrei2");
	if(var_223_int == 0) {
		var_221_bool = true;
		return 0;
	}
	var_221_bool = false;
}


// @pe
void func_4366(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_5040(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string;
	func_4921(var_107_string);
	var_2_object = var_107_string;
}


void func_5903(bool var_51_bool, object var_52_object, int var_53_int)
{
	object var_60_object;
	func_5890(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	object var_58_object;
	var_57_object->Find(var_53_int, var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_53_int);
		var_51_bool = false;
	}
	var_58_object->AddChild(var_52_object);
	@SetVariable("player_diary", 1);
	int var_59_int;
	var_52_object->GetCategory(var_59_int);
	@SetDiarySection(var_59_int);
	var_51_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5401(bool var_200_bool)
{
	int var_202_int;
	func_4956(var_202_int, "d1q01FirstGeorgVisit");
	if(var_202_int == 1)
		var_200_bool = true;
	var_200_bool = false;
}


// @pe
void func_5413(bool var_237_bool)
{
	int var_239_int;
	func_4956(var_239_int, "ood1Andrei3");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_5932(object var_51_object)
{
	object var_54_object; object var_55_object;
	@GetMainOutdoorScene(var_54_object);
	if(var_54_object == null) {
		@Trace("Can't find main outdoor scene");
		var_55_object = null;
		var_55_object = var_51_object;
	}
	var_54_object->GetMap(var_55_object);
	var_55_object = var_51_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5425(bool var_253_bool)
{
	int var_255_int;
	func_4956(var_255_int, "ood1Andrei4");
	if(var_255_int == 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


void func_3892(object var_0_object, int var_591_int, object var_592_object)
{
	var_0_object = var_592_object;
	bool var_602_bool; object var_603_object;
	var_592_object = var_603_object;
	func_4861(var_602_bool, var_603_object);
	if(!var_602_bool) { //@nz
		var_591_int = -2;
		return 8;
	}
	object var_598_object;
	@CreateDialog(var_598_object);
	int var_605_int;
	func_5036(var_605_int);
	var_598_object->SetNPCName(var_605_int);
	string var_606_string;
	func_5038(var_606_string);
	var_598_object->SetPhoto(var_606_string);
	int var_607_int;
	func_5982(var_607_int);
	var_598_object->SetPlayerName(var_607_int);
	bool var_599_bool;
	@IsOverrideActive(var_599_bool);
	if(var_599_bool != 0) {
		var_591_int = -2;
		return 8;
	}
	@DoDialog(var_598_object);
	object var_609_object; object var_610_object;
	var_592_object = var_609_object;
	var_598_object = var_610_object;
	TaskCall(13);
	func_3955(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	bool var_601_bool;
	var_598_object->IsDialogEnd(var_601_bool);
	
	for(;;) {
		var_664_bool = !var_601_bool; //@nz
		if(var_664_bool == 0) goto Label_3944;
		@sync();
		var_598_object->IsDialogEnd(var_601_bool);
	}
	
Label_3944:
	object var_665_object;
	var_592_object = var_665_object;
	func_4917();
	@StopDialog(var_598_object);
	var_598_object->GetReturnValue(-1);
	int var_600_int = var_591_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4917(void)
{
	@CameraSwitchToNormal();
}


void func_4921(string var_41_string)
{
	@Trace("playing " + var_41_string);
	float var_44_float;
	float var_45_float;
	@lshGetAnimTimes(var_41_string, var_44_float, var_45_float);
	@lshPlayAnimation(var_44_float, var_45_float);
	@Trace("start: " + var_44_float);
	@Trace("end: " + var_45_float);
}


// @pe
void func_5437(bool var_269_bool)
{
	int var_271_int;
	func_4956(var_271_int, "ood1Andrei5");
	if(var_271_int == 0) {
		var_269_bool = true;
		return 0;
	}
	var_269_bool = false;
}


void func_5949(object var_97_object, string var_98_string, float var_99_float)
{
	object var_107_object;
	@GetMainOutdoorScene(var_107_object);
	if(var_107_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_105_cvector;
	cvector var_106_cvector;
	bool var_108_bool;
	var_107_object->GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector);
	if(!var_108_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_98_string) + " doesnt exist");
	var_107_object->GetMap(var_97_object);
	if(var_97_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_118_float = GetByIndex(var_105_cvector, 0);
	var_119_float = GetByIndex(var_105_cvector, 2);
	var_97_object->SetMapParams(var_118_float, var_119_float, var_99_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5449(bool var_285_bool)
{
	int var_287_int;
	func_4956(var_287_int, "ood1Andrei6");
	if(var_287_int == 0) {
		var_285_bool = true;
		return 0;
	}
	var_285_bool = false;
}


void func_4939(void)
{
	bool var_38_bool;
	func_5040(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


void func_4946(cvector var_77_cvector, cvector var_78_cvector)
{
	float var_81_float = sqrt(var_78_cvector | var_78_cvector);
	if(var_81_float < 0.000001)
		var_77_cvector = [0.0, 0.0, 0.0];
	var_77_cvector = var_78_cvector / var_81_float;
}


void func_338(object var_0_object, int var_157_int, object var_158_object)
{
	var_0_object = var_158_object;
	bool var_168_bool; object var_169_object;
	var_158_object = var_169_object;
	func_4861(var_168_bool, var_169_object);
	if(!var_168_bool) { //@nz
		var_157_int = -2;
		return 8;
	}
	object var_164_object;
	@CreateDialog(var_164_object);
	int var_171_int;
	func_5036(var_171_int);
	var_164_object->SetNPCName(var_171_int);
	string var_172_string;
	func_5038(var_172_string);
	var_164_object->SetPhoto(var_172_string);
	int var_173_int;
	func_5982(var_173_int);
	var_164_object->SetPlayerName(var_173_int);
	bool var_165_bool;
	@IsOverrideActive(var_165_bool);
	if(var_165_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	@DoDialog(var_164_object);
	object var_175_object; object var_176_object;
	var_158_object = var_175_object;
	var_164_object = var_176_object;
	TaskCall(5);
	func_401(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object);
	TaskReturn();
	bool var_167_bool;
	var_164_object->IsDialogEnd(var_167_bool);
	
	for(;;) {
		var_334_bool = !var_167_bool; //@nz
		if(var_334_bool == 0) goto Label_390;
		@sync();
		var_164_object->IsDialogEnd(var_167_bool);
	}
	
Label_390:
	object var_335_object;
	var_158_object = var_335_object;
	func_4917();
	@StopDialog(var_164_object);
	var_164_object->GetReturnValue(-1);
	int var_166_int = var_157_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5461(bool var_301_bool)
{
	int var_303_int;
	func_4956(var_303_int, "ood1Andrei7");
	if(var_303_int == 0) {
		var_301_bool = true;
		return 0;
	}
	var_301_bool = false;
}


void func_4956(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_5982(int var_95_int)
{
	int var_97_int;
	@GetVariable("player", var_97_int);
	if(var_97_int == 0) {
		var_95_int = 200001;
		return 2;
	EMIT "GOTO 0x176d";
	}
	if(var_97_int == 1) {
		var_95_int = 200002;
		return 2;
	}
	var_95_int = 200003;
}


// @pe
void func_5473(bool var_317_bool)
{
	int var_319_int;
	func_4956(var_319_int, "ood1Andrei8");
	if(var_319_int == 0) {
		var_317_bool = true;
		return 0;
	}
	var_317_bool = false;
}


void func_4961(object var_49_object, object var_50_object, int var_51_int)
{
	int var_55_int;
	var_50_object->GetItemID(var_55_int);
	int var_56_int;
	@GetInvItemProperty(var_56_int, var_55_int, "Category");
	bool var_57_bool;
	var_49_object->AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	if(!var_57_bool) //@nz
		var_49_object->DropItems(var_50_object, var_51_int);
}


// @pe
void func_5485(bool var_343_bool)
{
	int var_345_int;
	func_4956(var_345_int, "KnowMat");
	if(var_345_int == 1)
		var_343_bool = true;
	var_343_bool = false;
}


void func_4974(object var_44_object, string var_45_string, int var_46_int)
{
	object var_48_object;
	@CreateInvItem(var_48_object);
	var_48_object->SetItemName(var_45_string);
	object var_49_object; object var_50_object; int var_51_int;
	var_44_object = var_49_object;
	var_48_object = var_50_object;
	var_46_int = var_51_int;
	func_4961(var_49_object, var_50_object, var_51_int);
}
EMIT "Stack[-1] = 0";


void func_5999(void)
{
	@Trace("Adding diary entry");
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 195, 1, 15480);
	bool var_51_bool; object var_52_object;
	var_46_object = var_52_object;
	func_5903(var_51_bool, var_52_object, 192);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3955(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_609_object, object var_610_object)
{
	var_0_object = var_610_object;
	var_1_object = var_609_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_616_bool = false;
		bool var_617_bool = false;
		bool var_618_bool;
		func_5819(var_1_object);
		if(!var_618_bool) { //@nz
			bool var_625_bool;
			func_5831(var_1_object);
			if(!var_625_bool) //@nz
				var_617_bool = true;
		}
		if(var_617_bool != 0) {
			bool var_632_bool;
			func_5843(var_1_object);
			if(var_632_bool != 0)
				var_616_bool = true;
		}
		if(var_616_bool != 0) {
			object var_638_object; object var_639_object;
			var_638_object = var_1_object;
			var_639_object = var_0_object;
			func_5353();
			func_4053(var_610_object, "Neutral");
			var_0_object->SetMessage(12960); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12961, 14167, 14166); //@t
		} else {
					func_4053(var_610_object, "Neutral");
					var_0_object->SetMessage(12966); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12967, -1, 14172); //@t
		}
	}
	for(;;) {
		bool var_651_bool;
		func_5040(var_651_bool);
		if(var_651_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4921(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4052;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4052:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xf77";


// @pe
void func_5497(bool var_273_bool)
{
	int var_275_int;
	func_4956(var_275_int, "ood2Andrei1");
	if(var_275_int == 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


void func_4987(bool var_236_bool, string var_237_string, string var_238_string)
{
	object var_240_object;
	@FindActor(var_240_object, var_237_string);
	if(var_240_object == null)
		var_236_bool = false;
	@Trigger(var_240_object, var_238_string);
	var_236_bool = true;
}
EMIT "Stack[-1] = 0";


void func_6015(void)
{
	@Trace("Adding diary entry");
	object var_169_object;
	@CreateDiaryEntry(var_169_object, 59, 2, 12141);
	bool var_174_bool; object var_175_object;
	var_169_object = var_175_object;
	func_5903(var_174_bool, var_175_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5509(bool var_291_bool)
{
	int var_293_int;
	func_4956(var_293_int, "ood2Andrei2");
	if(var_293_int == 0) {
		var_291_bool = true;
		return 0;
	}
	var_291_bool = false;
}


void func_4999(float var_62_float)
{
	float var_64_float;
	@GetGameTime(var_64_float);
	var_64_float = var_62_float;
}


void func_5004(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	var_151_int = 1 + (var_153_float / 24);
}


void func_6031(void)
{
	@Trace("Adding diary entry");
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 58, 2, 12140);
	bool var_76_bool; object var_77_object;
	var_71_object = var_77_object;
	func_5903(var_76_bool, var_77_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_401(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_175_object, object var_176_object)
{
	var_0_object = var_176_object;
	var_1_object = var_175_object;
	var_3_object = false;
	if(1 != 0) {
		func_606(var_176_object, "Neutral");
		var_0_object->SetMessage(6465); //@t
		var_0_object->ClearReplies(); //@t
		bool var_188_bool = false;
		bool var_189_bool;
		func_5377(var_1_object);
		if(var_189_bool != 0) {
			bool var_197_bool;
			func_5401(var_1_object);
			if(var_197_bool != 0)
				var_188_bool = true;
		}
		if(var_188_bool != 0)
			var_0_object->AddReply(6466, 6344, 7129); //@t
		bool var_206_bool = false;
		bool var_207_bool;
		func_5641(var_207_bool, var_1_object);
		if(var_207_bool != 0) {
			bool var_218_bool;
			func_5389(var_1_object);
			if(var_218_bool != 0)
				var_206_bool = true;
		}
		if(var_206_bool != 0)
			var_0_object->AddReply(6467, 6336, 7130); //@t
		bool var_227_bool = false;
		bool var_228_bool;
		func_5855(var_1_object);
		if(var_228_bool != 0) {
			bool var_234_bool;
			func_5413(var_1_object);
			if(var_234_bool != 0)
				var_227_bool = true;
		}
		if(var_227_bool != 0)
			var_0_object->AddReply(6470, 7167, 7133); //@t
		bool var_243_bool = false;
		bool var_244_bool;
		func_5699(var_1_object);
		if(var_244_bool != 0) {
			bool var_250_bool;
			func_5425(var_1_object);
			if(var_250_bool != 0)
				var_243_bool = true;
		}
		if(var_243_bool != 0)
			var_0_object->AddReply(6471, 7181, 7134); //@t
		bool var_259_bool = false;
		bool var_260_bool;
		func_5687(var_1_object);
		if(var_260_bool != 0) {
			bool var_266_bool;
			func_5437(var_1_object);
			if(var_266_bool != 0)
				var_259_bool = true;
		}
		if(var_259_bool != 0)
			var_0_object->AddReply(6474, 7191, 7137); //@t
		bool var_275_bool = false;
		bool var_276_bool;
		func_5795(var_1_object);
		if(var_276_bool != 0) {
			bool var_282_bool;
			func_5449(var_1_object);
			if(var_282_bool != 0)
				var_275_bool = true;
		}
		if(var_275_bool != 0)
			var_0_object->AddReply(6476, 7206, 7139); //@t
		bool var_291_bool = false;
		bool var_292_bool;
		func_5617(var_1_object);
		if(var_292_bool != 0) {
			bool var_298_bool;
			func_5461(var_1_object);
			if(var_298_bool != 0)
				var_291_bool = true;
		}
		if(var_291_bool != 0)
			var_0_object->AddReply(6481, 7220, 7144); //@t
		bool var_307_bool = false;
		bool var_308_bool;
		func_5783(var_1_object);
		if(var_308_bool != 0) {
			bool var_314_bool;
			func_5473(var_1_object);
			if(var_314_bool != 0)
				var_307_bool = true;
		}
		if(var_307_bool != 0)
			var_0_object->AddReply(6488, 7241, 7151); //@t
		var_0_object->AddReply(6502, -1, 7166); //@t
		goto Label_576;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x195";
	}
Label_576:
	bool var_326_bool;
	func_5040(var_326_bool);
	if(var_326_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4921(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_605;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_605:
		return 0;

	}
	
}


// @pe
void func_5521(bool var_307_bool)
{
	int var_309_int;
	func_4956(var_309_int, "ood2Andrei3");
	if(var_309_int == 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


void func_5013(int var_214_int)
{
	float var_216_float;
	@GetGameTime(var_216_float);
	int var_217_int;
	var_216_float = var_217_int;
	var_214_int = var_217_int % 24;
}


// @pe
void func_5533(bool var_323_bool)
{
	int var_325_int;
	func_4956(var_325_int, "ood2Andrei4");
	if(var_325_int == 0) {
		var_323_bool = true;
		return 0;
	}
	var_323_bool = false;
}


// @pe
void func_5021(bool var_149_bool, int var_150_int)
{
	int var_151_int;
	func_5004(var_151_int);
	var_149_bool = var_151_int == var_150_int;
}


void func_6047(void)
{
	@Trace("Adding diary entry");
	object var_228_object;
	@CreateDiaryEntry(var_228_object, 60, 2, 12142);
	bool var_233_bool; object var_234_object;
	var_228_object = var_234_object;
	func_5903(var_233_bool, var_234_object, 11);
}
EMIT "Stack[-1] = 0";


void func_5027(bool var_759_bool)
{
	func_4921("No");
	bool var_761_bool;
	@lshWaitForAnimEnd(var_761_bool);
	var_761_bool = var_759_bool;
}


void func_1956(object var_0_object, int var_338_int, object var_339_object)
{
	var_0_object = var_339_object;
	bool var_349_bool; object var_350_object;
	var_339_object = var_350_object;
	func_4861(var_349_bool, var_350_object);
	if(!var_349_bool) { //@nz
		var_338_int = -2;
		return 8;
	}
	object var_345_object;
	@CreateDialog(var_345_object);
	int var_352_int;
	func_5036(var_352_int);
	var_345_object->SetNPCName(var_352_int);
	string var_353_string;
	func_5038(var_353_string);
	var_345_object->SetPhoto(var_353_string);
	int var_354_int;
	func_5982(var_354_int);
	var_345_object->SetPlayerName(var_354_int);
	bool var_346_bool;
	@IsOverrideActive(var_346_bool);
	if(var_346_bool != 0) {
		var_338_int = -2;
		return 8;
	}
	@DoDialog(var_345_object);
	object var_356_object; object var_357_object;
	var_339_object = var_356_object;
	var_345_object = var_357_object;
	TaskCall(7);
	func_2019(var_358_object, var_359_object, var_360_string, var_361_bool, var_356_object, var_357_object);
	TaskReturn();
	bool var_348_bool;
	var_345_object->IsDialogEnd(var_348_bool);
	
	for(;;) {
		var_460_bool = !var_348_bool; //@nz
		if(var_460_bool == 0) goto Label_2008;
		@sync();
		var_345_object->IsDialogEnd(var_348_bool);
	}
	
Label_2008:
	object var_461_object;
	var_339_object = var_461_object;
	func_4917();
	@StopDialog(var_345_object);
	var_345_object->GetReturnValue(-1);
	int var_347_int = var_338_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5545(bool var_339_bool)
{
	int var_341_int;
	func_4956(var_341_int, "ood2Andrei5");
	if(var_341_int == 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_5036(int var_93_int)
{
	var_93_int = 2855;
}


void func_5038(string var_94_string)
{
	var_94_string = "ui/NPC_Andrei.png";
}


void func_6063(void)
{
	@SetVariable("mt_andrei", 0);
}


void func_5040(bool var_38_bool)
{
	var_38_bool = true;
}


// @pe
void func_5042(void)
{
	@SetVariable("ood1Andrei1", 1);
}


void func_6068(object var_36_object)
{
	int var_38_int;
	@GetVariable("mt_andrei", var_38_int);
	if(!var_38_int) { //@nz
		int var_41_int; object var_42_object;
		var_36_object = var_42_object;
		TaskCall(2);
		func_49(var_43_object, var_41_int, var_42_object);
		TaskReturn();
		@SetVariable("mt_andrei", 1);
	}
	bool var_149_bool;
	func_5021(var_149_bool, 1);
	if(var_149_bool != 0) {
		int var_157_int; object var_158_object;
		var_36_object = var_158_object;
		TaskCall(4);
		func_338(var_159_object, var_157_int, var_158_object);
		TaskReturn();
		return 2;
	}
	bool var_336_bool;
	func_5021(var_336_bool, 2);
	if(var_336_bool != 0) {
		int var_338_int; object var_339_object;
		var_36_object = var_339_object;
		TaskCall(6);
		func_1956(var_340_object, var_338_int, var_339_object);
		TaskReturn();
		return 2;
	}
	bool var_462_bool;
	func_5021(var_462_bool, 3);
	if(var_462_bool != 0) {
		int var_464_int; object var_465_object;
		var_36_object = var_465_object;
		TaskCall(8);
		func_3095(var_466_object, var_464_int, var_465_object);
		TaskReturn();
		return 2;
	}
	bool var_534_bool;
	func_5021(var_534_bool, 6);
	if(var_534_bool != 0) {
		int var_536_int; object var_537_object;
		var_36_object = var_537_object;
		TaskCall(10);
		func_3523(var_538_object, var_536_int, var_537_object);
		TaskReturn();
		return 2;
	}
	bool var_589_bool;
	func_5021(var_589_bool, 10);
	if(var_589_bool != 0) {
		int var_591_int; object var_592_object;
		var_36_object = var_592_object;
		TaskCall(12);
		func_3892(var_593_object, var_591_int, var_592_object);
		TaskReturn();
		return 2;
	}
	bool var_666_bool;
	func_5021(var_666_bool, 11);
	if(var_666_bool != 0) {
		int var_668_int; object var_669_object;
		var_36_object = var_669_object;
		TaskCall(14);
		func_4187(var_670_object, var_668_int, var_669_object);
		TaskReturn();
		return 2;
	}
	bool var_759_bool;
	func_5027(var_759_bool);
}


// @pe
void func_5557(bool var_345_bool)
{
	int var_347_int;
	func_4956(var_347_int, "d2q02");
	if(var_347_int == 1000)
		var_345_bool = true;
	var_345_bool = false;
}


// @pe
void func_5048(void)
{
	@SetVariable("ood1Andrei2", 1);
}


// @pe
void func_5054(object var_184_object)
{
	@Trace("money1000 is given");
	object var_187_object;
	var_184_object = var_187_object;
	func_4837(var_187_object, "money", 1000);
}


// @pe
void func_5569(bool var_281_bool)
{
	int var_283_int;
	func_4956(var_283_int, "d2q02");
	if(var_283_int == 1)
		var_281_bool = true;
	var_281_bool = false;
}


void func_3523(object var_0_object, int var_536_int, object var_537_object)
{
	var_0_object = var_537_object;
	bool var_547_bool; object var_548_object;
	var_537_object = var_548_object;
	func_4861(var_547_bool, var_548_object);
	if(!var_547_bool) { //@nz
		var_536_int = -2;
		return 8;
	}
	object var_543_object;
	@CreateDialog(var_543_object);
	int var_550_int;
	func_5036(var_550_int);
	var_543_object->SetNPCName(var_550_int);
	string var_551_string;
	func_5038(var_551_string);
	var_543_object->SetPhoto(var_551_string);
	int var_552_int;
	func_5982(var_552_int);
	var_543_object->SetPlayerName(var_552_int);
	bool var_544_bool;
	@IsOverrideActive(var_544_bool);
	if(var_544_bool != 0) {
		var_536_int = -2;
		return 8;
	}
	@DoDialog(var_543_object);
	object var_554_object; object var_555_object;
	var_537_object = var_554_object;
	var_543_object = var_555_object;
	TaskCall(11);
	func_3586(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	bool var_546_bool;
	var_543_object->IsDialogEnd(var_546_bool);
	
	for(;;) {
		var_587_bool = !var_546_bool; //@nz
		if(var_587_bool == 0) goto Label_3575;
		@sync();
		var_543_object->IsDialogEnd(var_546_bool);
	}
	
Label_3575:
	object var_588_object;
	var_537_object = var_588_object;
	func_4917();
	@StopDialog(var_543_object);
	var_543_object->GetReturnValue(-1);
	int var_545_int = var_536_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5065(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_5581(bool var_297_bool)
{
	int var_299_int;
	func_4956(var_299_int, "d2q02");
	if(var_299_int == 3)
		var_297_bool = true;
	var_297_bool = false;
}


// @pe
void func_5071(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5077(void)
{
	@SetVariable("ood1Andrei3", 1);
}


// @pe
void func_4053(object var_2_object, string var_69_string)
{
	bool var_70_bool;
	func_5040(var_70_bool);
	if(!var_70_bool) //@nz
		return 0;
	if(var_69_string == var_2_object)
		return 0;
	string var_73_string;
	func_4921(var_73_string);
	var_2_object = var_73_string;
}


// @pe
void func_5593(bool var_313_bool)
{
	int var_315_int;
	func_4956(var_315_int, "d2q02");
	if(var_315_int == 5)
		var_313_bool = true;
	var_313_bool = false;
}


// @pe
void func_5083(void)
{
	@SetVariable("ood1Andrei4", 1);
}


// @pe
void func_5089(void)
{
	@SetVariable("ood1Andrei5", 1);
}


// @pe
void func_2019(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_356_object, object var_357_object)
{
	var_0_object = var_357_object;
	var_1_object = var_356_object;
	var_3_object = false;
	if(1 != 0) {
		func_2187(var_357_object, "Neutral");
		var_0_object->SetMessage(6864); //@t
		var_0_object->ClearReplies(); //@t
		bool var_369_bool = false;
		bool var_370_bool;
		func_5497(var_1_object);
		if(var_370_bool != 0) {
			bool var_376_bool;
			func_5569(var_1_object);
			if(var_376_bool != 0)
				var_369_bool = true;
		}
		if(var_369_bool != 0)
			var_0_object->AddReply(6865, 7572, 7571); //@t
		bool var_385_bool = false;
		bool var_386_bool;
		func_5509(var_1_object);
		if(var_386_bool != 0) {
			bool var_392_bool;
			func_5581(var_1_object);
			if(var_392_bool != 0)
				var_385_bool = true;
		}
		if(var_385_bool != 0)
			var_0_object->AddReply(6868, 7575, 7574); //@t
		bool var_401_bool = false;
		bool var_402_bool;
		func_5521(var_1_object);
		if(var_402_bool != 0) {
			bool var_408_bool;
			func_5593(var_1_object);
			if(var_408_bool != 0)
				var_401_bool = true;
		}
		if(var_401_bool != 0)
			var_0_object->AddReply(6870, 7577, 7576); //@t
		bool var_417_bool = false;
		bool var_418_bool;
		func_5533(var_1_object);
		if(var_418_bool != 0) {
			bool var_424_bool;
			func_5605(var_1_object);
			if(var_424_bool != 0)
				var_417_bool = true;
		}
		if(var_417_bool != 0)
			var_0_object->AddReply(6874, 7581, 7580); //@t
		bool var_433_bool = false;
		bool var_434_bool;
		func_5545(var_1_object);
		if(var_434_bool != 0) {
			bool var_440_bool;
			func_5557(var_1_object);
			if(var_440_bool != 0)
				var_433_bool = true;
		}
		if(var_433_bool != 0)
			var_0_object->AddReply(6872, 7579, 7578); //@t
		var_0_object->AddReply(7531, -1, 8313); //@t
		goto Label_2157;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x88b";
	EMIT "Pop(1)";
	EMIT "Push((int) 9203)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9204)";
	EMIT "Push((int) 10097)";
	EMIT "Push((int) 10096)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9216)";
	EMIT "Push((int) 10111)";
	EMIT "Push((int) 10110)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x86d";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e7";
	}
Label_2157:
	bool var_452_bool;
	func_5040(var_452_bool);
	if(var_452_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4921(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2186;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2186:
		return 0;

	}
	
}


// @pe
void func_5605(bool var_329_bool)
{
	int var_331_int;
	func_4956(var_331_int, "d2q02");
	if(var_331_int == 7)
		var_329_bool = true;
	var_329_bool = false;
}


// @pe
void func_5095(void)
{
	@SetVariable("ood1Andrei6", 1);
}


// @pe
void func_5101(void)
{
	@SetVariable("ood1Andrei7", 1);
}


// @pe
void func_5617(bool var_295_bool)
{
	int var_297_int;
	func_4956(var_297_int, "KnowViktor");
	if(var_297_int == 1)
		var_295_bool = true;
	var_295_bool = false;
}


// @pe
void func_5107(void)
{
	@SetVariable("KnowShabnak", 1);
}


// @pe
void func_5113(void)
{
	@SetVariable("ood1Andrei8", 1);
}


// @pe
void func_5629(bool var_75_bool)
{
	int var_77_int;
	func_4956(var_77_int, "d3q01");
	if(var_77_int == 0) {
		var_75_bool = true;
		return 0;
	}
	var_75_bool = false;
}


// @pe
void func_5119(void)
{
	@SetVariable("KnowMat", 1);
}


