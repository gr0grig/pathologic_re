GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	night_bk.tex
	night_ft.tex
	night_lt.tex
	night_rt.tex
	night_up.tex
	night_rain_bk.tex
	night_rain_ft.tex
	night_rain_lt.tex
	night_rain_rt.tex
	night_rain_up.tex
	Wrong time
	dawn_bk.tex
	dawn_ft.tex
	dawn_lt.tex
	dawn_rt.tex
	dawn_up.tex
	dawn_rain_bk.tex
	dawn_rain_ft.tex
	dawn_rain_lt.tex
	dawn_rain_rt.tex
	dawn_rain_up.tex
	day_clear_bk.tex
	day_clear_ft.tex
	day_clear_lt.tex
	day_clear_rt.tex
	day_clear_up.tex
	day_rain_bk.tex
	day_rain_ft.tex
	day_rain_lt.tex
	day_rain_rt.tex
	day_rain_up.tex
	day_bk.tex
	day_ft.tex
	day_lt.tex
	day_rt.tex
	day_up.tex
	Forecast: rain begins in 
	 hours
	Forecast: rain ends in 
	CanPlayThunder
	CanPlayThunder
	thunder
	rain
	wmod_level
	Level: 
	wdisease
	wnormal
	lightning
	Region
	State

Import:
	ForceWeather (17 args)
	GetGameTime (1 args)
	Trace (1 args)
	ChangeWeather (18 args)
	Sleep (1 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	Rain (0 args)
	ModLinear (2 args)
	Bright (0 args)
	ModNothing (0 args)
	GetModifierLevel (1 args)
	SetAmbientMod (1 args)
	GetActiveScene (1 args)
	irand (2 args)
	PlaySound (1 args)
	GetColorMod (2 args)
	LinearColorMod (4 args)
	GetGameTimeScale (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, bool) Params = 0
		EVENT_7 Op = 0x10d Vars = (int)
		EVENT_1000 Op = 0x1da Vars = (string, string)
		EVENT_8 Op = 0x206 Vars = (int)
		EVENT_26 Op = 0x276 Vars = (string)


0x0: PushEmpty(float, float)
0x1: PushEmpty()
0x2: Call2 0xde

0x3: Pop(0)
0x4: Push("night_bk.tex")
0x5: Push("night_ft.tex")
0x6: Push("night_lt.tex")
0x7: Push("night_rt.tex")
0x8: Push("night_up.tex")
0x9: Push("night_rain_bk.tex")
0xa: Push("night_rain_ft.tex")
0xb: Push("night_rain_lt.tex")
0xc: Push("night_rain_rt.tex")
0xd: Push("night_rain_up.tex")
0xe: Push((bool) 0)
0xf: Push(CVector(0.0, 0.0, 0.0))
0x10: Push(CVector(0.27451, 0.27451, 0.27451))
0x11: Push((float)3000.0)
0x12: Push((float)5000.0)
0x13: Push(CVector(0.19608, 0.19608, 0.19608))
0x14: Push(CVector(0.19608, 0.19608, 0.19608))
0x15: @ ForceWeather(Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(17)
0x17: @ GetGameTime(Stack[-1])
0x18: Pop(0)
0x19: PushEmpty(bool)
0x1a: Stack[-1] = (bool) 1
0x1b: Push((float)5.99)
0x1c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: Push((float)6.01)
0x1f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Stack[-1] = (bool) 0
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("Wrong time")
0x24: @ Trace(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: @ GetGameTime(Stack[-1])
0x28: Pop(0)
0x29: Push("dawn_bk.tex")
0x2a: Push("dawn_ft.tex")
0x2b: Push("dawn_lt.tex")
0x2c: Push("dawn_rt.tex")
0x2d: Push("dawn_up.tex")
0x2e: Push("dawn_rain_bk.tex")
0x2f: Push("dawn_rain_ft.tex")
0x30: Push("dawn_rain_lt.tex")
0x31: Push("dawn_rain_rt.tex")
0x32: Push("dawn_rain_up.tex")
0x33: Push((bool) 0)
0x34: Push(CVector(0.5098, 0.27451, 0.18039))
0x35: Push(CVector(0.70588, 0.50588, 0.32157))
0x36: Push((float)3000.0)
0x37: Push((float)5000.0)
0x38: Push(CVector(0.6, 0.43922, 0.28235))
0x39: Push(CVector(0.48627, 0.34118, 0.21176))
0x3a: PushEmpty(float, float, float)
0x3b: Stack[-2] = (float) 8.0
0x3c: Stack[-1] = Stack[-21]
0x3d: Call2 0x2ae

0x3e: Pop(2)
0x3f: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x40: Pop(18)
0x41: @ GetGameTime(Stack[-1])
0x42: Pop(0)
0x43: PushEmpty(float, float, float)
0x44: Stack[-2] = (float) 10.0
0x45: Stack[-1] = Stack[-4]
0x46: Call2 0x2ae

0x47: Pop(2)
0x48: @ Sleep(Stack[-1])
0x49: Pop(1)
0x4a: @ GetGameTime(Stack[-1])
0x4b: Pop(0)
0x4c: PushEmpty(bool)
0x4d: Stack[-1] = (bool) 1
0x4e: PushEmpty(int)
0x4f: Call2 0x282

0x50: Pop(0)
0x51: Push((int) 3)
0x52: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x54: PushEmpty(int)
0x55: Call2 0x282

0x56: Pop(0)
0x57: Push((int) 12)
0x58: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: Stack[-1] = (bool) 0
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: Push("day_clear_bk.tex")
0x5d: Push("day_clear_ft.tex")
0x5e: Push("day_clear_lt.tex")
0x5f: Push("day_clear_rt.tex")
0x60: Push("day_clear_up.tex")
0x61: Push("day_rain_bk.tex")
0x62: Push("day_rain_ft.tex")
0x63: Push("day_rain_lt.tex")
0x64: Push("day_rain_rt.tex")
0x65: Push("day_rain_up.tex")
0x66: Push((bool) 0)
0x67: Push(CVector(0.39216, 0.39216, 0.39216))
0x68: Push(CVector(0.58824, 0.5098, 0.47059))
0x69: Push((float)3000.0)
0x6a: Push((float)5000.0)
0x6b: Push(CVector(0.58824, 0.5098, 0.43137))
0x6c: Push(CVector(0.37255, 0.32549, 0.2902))
0x6d: PushEmpty(float, float, float)
0x6e: Stack[-2] = (float) 11.0
0x6f: Stack[-1] = Stack[-21]
0x70: Call2 0x2ae

0x71: Pop(2)
0x72: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(18)
0x74: GOTO 0x8d

0x75: Push("day_bk.tex")
0x76: Push("day_ft.tex")
0x77: Push("day_lt.tex")
0x78: Push("day_rt.tex")
0x79: Push("day_up.tex")
0x7a: Push("day_rain_bk.tex")
0x7b: Push("day_rain_ft.tex")
0x7c: Push("day_rain_lt.tex")
0x7d: Push("day_rain_rt.tex")
0x7e: Push("day_rain_up.tex")
0x7f: Push((bool) 0)
0x80: Push(CVector(0.23529, 0.20392, 0.16863))
0x81: Push(CVector(0.58824, 0.54902, 0.39216))
0x82: Push((float)3000.0)
0x83: Push((float)5000.0)
0x84: Push(CVector(0.36471, 0.34118, 0.25882))
0x85: Push(CVector(0.37255, 0.32549, 0.2902))
0x86: PushEmpty(float, float, float)
0x87: Stack[-2] = (float) 11.0
0x88: Stack[-1] = Stack[-21]
0x89: Call2 0x2ae

0x8a: Pop(2)
0x8b: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(18)
0x8d: @ GetGameTime(Stack[-1])
0x8e: Pop(0)
0x8f: PushEmpty(float, float, float)
0x90: Stack[-2] = (float) 18.0
0x91: Stack[-1] = Stack[-4]
0x92: Call2 0x2ae

0x93: Pop(2)
0x94: @ Sleep(Stack[-1])
0x95: Pop(1)
0x96: @ GetGameTime(Stack[-1])
0x97: Pop(0)
0x98: Push("dawn_bk.tex")
0x99: Push("dawn_ft.tex")
0x9a: Push("dawn_lt.tex")
0x9b: Push("dawn_rt.tex")
0x9c: Push("dawn_up.tex")
0x9d: Push("dawn_rain_bk.tex")
0x9e: Push("dawn_rain_ft.tex")
0x9f: Push("dawn_rain_lt.tex")
0xa0: Push("dawn_rain_rt.tex")
0xa1: Push("dawn_rain_up.tex")
0xa2: Push((bool) 0)
0xa3: Push(CVector(0.5098, 0.27451, 0.18039))
0xa4: Push(CVector(0.70588, 0.50588, 0.32157))
0xa5: Push((float)3000.0)
0xa6: Push((float)5000.0)
0xa7: Push(CVector(0.6, 0.43922, 0.28235))
0xa8: Push(CVector(0.48627, 0.34118, 0.21176))
0xa9: PushEmpty(float, float, float)
0xaa: Stack[-2] = (float) 19.0
0xab: Stack[-1] = Stack[-21]
0xac: Call2 0x2ae

0xad: Pop(2)
0xae: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(18)
0xb0: @ GetGameTime(Stack[-1])
0xb1: Pop(0)
0xb2: PushEmpty(float, float, float)
0xb3: Stack[-2] = (float) 20.0
0xb4: Stack[-1] = Stack[-4]
0xb5: Call2 0x2ae

0xb6: Pop(2)
0xb7: @ Sleep(Stack[-1])
0xb8: Pop(1)
0xb9: @ GetGameTime(Stack[-1])
0xba: Pop(0)
0xbb: Push("night_bk.tex")
0xbc: Push("night_ft.tex")
0xbd: Push("night_lt.tex")
0xbe: Push("night_rt.tex")
0xbf: Push("night_up.tex")
0xc0: Push("night_rain_bk.tex")
0xc1: Push("night_rain_ft.tex")
0xc2: Push("night_rain_lt.tex")
0xc3: Push("night_rain_rt.tex")
0xc4: Push("night_rain_up.tex")
0xc5: Push((bool) 0)
0xc6: Push(CVector(0.0, 0.0, 0.0))
0xc7: Push(CVector(0.27451, 0.27451, 0.27451))
0xc8: Push((float)3000.0)
0xc9: Push((float)5000.0)
0xca: Push(CVector(0.19608, 0.19608, 0.19608))
0xcb: Push(CVector(0.19608, 0.19608, 0.19608))
0xcc: PushEmpty(float, float, float)
0xcd: Stack[-2] = (float) 21.0
0xce: Stack[-1] = Stack[-21]
0xcf: Call2 0x2ae

0xd0: Pop(2)
0xd1: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(18)
0xd3: @ GetGameTime(Stack[-1])
0xd4: Pop(0)
0xd5: PushEmpty(float, float, float)
0xd6: Stack[-2] = (float) 6.0
0xd7: Stack[-1] = Stack[-4]
0xd8: Call2 0x2ae

0xd9: Pop(2)
0xda: @ Sleep(Stack[-1])
0xdb: Pop(1)
0xdc: GOTO 0x27

0xdd: Return(); Pop(2)

0xde: PushEmpty(float, float)
0xdf: Push((int) 2)
0xe0: Push((int) 20)
0xe1: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: Push((int) 40)
0xe4: @ SetTimer(Stack[-1], Stack[-2])
0xe5: Pop(1)
0xe6: Push("Forecast: rain begins in ")
0xe7: Pop(1); Push(Stack[-1] + Stack[-2]);
0xe8: Push(" hours")
0xe9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xea: @ Trace(Stack[-1])
0xeb: Pop(1)
0xec: Return(); Pop(2)

0xed: PushEmpty(float, float)
0xee: Push((int) 1)
0xef: Push((int) 8)
0xf0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(2)
0xf2: Push((int) 41)
0xf3: @ SetTimer(Stack[-1], Stack[-2])
0xf4: Pop(1)
0xf5: Push("Forecast: rain ends in ")
0xf6: Pop(1); Push(Stack[-1] + Stack[-2]);
0xf7: Push(" hours")
0xf8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf9: @ Trace(Stack[-1])
0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(float, float)
0xfd: Push((int) 60)
0xfe: Push((int) 120)
0xff: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(2)
0x101: Push((int) 43)
0x102: PushEmpty(float, float)
0x103: Stack[-1] = Stack[-4]
0x104: Call2 0x28b

0x105: Pop(1)
0x106: @ SetTimer(Stack[-2], Stack[-1])
0x107: Pop(2)
0x108: Return(); Pop(2)

0x109: Push((int) 43)
0x10a: @ KillTimer(Stack[-1])
0x10b: Pop(1)
0x10c: Return(); Pop(0)

0x10d: PushEmpty(float, float, float, float, object, bool, int, float, float, float, float, object, bool, int)
0x10e: Push((int) 40)
0x10f: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: Push((int) 40)
0x112: @ KillTimer(Stack[-1])
0x113: Pop(1)
0x114: @ Rain()
0x115: Pop(0)
0x116: Push((float)0.2)
0x117: Push((int) 1)
0x118: @ rand(Stack[-9], Stack[-2], Stack[-1])
0x119: Pop(2)
0x11a: PushEmpty()
0x11b: Call2 0xfc

0x11c: Pop(0)
0x11d: Push((int) 2)
0x11e: Pop(1); Push(Stack[-8] * Stack[-1]);
0x11f: @ ModLinear(Stack[-8], Stack[-1])
0x120: Pop(1)
0x121: PushEmpty()
0x122: Call2 0xed

0x123: Pop(0)
0x124: GOTO 0x1c1

0x125: Push((int) 41)
0x126: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x128: Push((int) 41)
0x129: @ KillTimer(Stack[-1])
0x12a: Pop(1)
0x12b: Push((int) 0)
0x12c: Push((int) 2)
0x12d: @ ModLinear(Stack[-2], Stack[-1])
0x12e: Pop(2)
0x12f: Push((int) 42)
0x130: Push((int) 2)
0x131: @ SetTimer(Stack[-2], Stack[-1])
0x132: Pop(2)
0x133: GOTO 0x1c1

0x134: Push((int) 42)
0x135: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x137: PushEmpty()
0x138: Call2 0x109

0x139: Pop(0)
0x13a: Push((int) 42)
0x13b: @ KillTimer(Stack[-1])
0x13c: Pop(1)
0x13d: @ Bright()
0x13e: Pop(0)
0x13f: @ ModNothing()
0x140: Pop(0)
0x141: PushEmpty()
0x142: Call2 0xde

0x143: Pop(0)
0x144: GOTO 0x1c1

0x145: Push((int) 43)
0x146: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x148: PushEmpty()
0x149: Call2 0xfc

0x14a: Pop(0)
0x14b: Push(GlobalVars[0])
0x14c: Pop(1); Push((bool) Stack[-1] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x14e: @ GetModifierLevel(Stack[-6])
0x14f: Pop(0)
0x150: Push((float)0.3)
0x151: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 0
0x155: Call2 0x1c2

0x156: Pop(1)
0x157: GOTO 0x1c1

0x158: PushEmpty(bool)
0x159: Stack[-1] = (bool) 0
0x15a: Push((int) 52)
0x15b: Pop(1); Push((bool) Stack[-17] >= Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15d: Push((int) 60)
0x15e: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x162: @ KillTimer(Stack[-15])
0x163: Pop(0)
0x164: Push((int) 52)
0x165: Pop(1); Push(Stack[-16] - Stack[-1]);
0x166: Push((int) 2)
0x167: Pop(2); Push(Stack[-2] % Stack[-1]);
0x168: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x169: Push(CVector(1.0, 1.0, 0.71765))
0x16a: @ SetAmbientMod(Stack[-1])
0x16b: Pop(1)
0x16c: GOTO 0x170

0x16d: Push(CVector(0.0, 0.0, 0.0))
0x16e: @ SetAmbientMod(Stack[-1])
0x16f: Pop(1)
0x170: Push((float)0.01)
0x171: Push((float)0.015)
0x172: @ rand(Stack[-7], Stack[-2], Stack[-1])
0x173: Pop(2)
0x174: Push((int) 1)
0x175: Pop(1); Push(Stack[-16] + Stack[-1]);
0x176: PushEmpty(float, float)
0x177: Stack[-1] = Stack[-8]
0x178: Call2 0x28b

0x179: Pop(1)
0x17a: @ SetTimer(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: GOTO 0x1c1

0x17d: Push((int) 60)
0x17e: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x180: @ KillTimer(Stack[-15])
0x181: Pop(0)
0x182: Push(CVector(0.0, 0.0, 0.0))
0x183: @ SetAmbientMod(Stack[-1])
0x184: Pop(1)
0x185: Push( Stack[1 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x187: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x188: Stack[-4] = (float) 0.1
0x189: GOTO 0x18e

0x18a: Push((int) 2)
0x18b: Push((int) 3)
0x18c: @ rand(Stack[-6], Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: Push((int) 50)
0x18f: PushEmpty(float, float)
0x190: Stack[-1] = Stack[-7]
0x191: Call2 0x28b

0x192: Pop(1)
0x193: @ SetTimer(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: GOTO 0x1c1

0x196: Push((int) 50)
0x197: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x199: Push((int) 50)
0x19a: @ KillTimer(Stack[-1])
0x19b: Pop(1)
0x19c: @ GetActiveScene(Stack[-3])
0x19d: Pop(0)
0x19e: Push("CanPlayThunder")
0x19f: Push((int) 1)
0x1a0: Pop(2); Push(IsFuncExist(Stack[-5], Stack[-2], Stack[-1]))
0x1a1: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a2: @@ CanPlayThunder(Stack[-2])
0x1a3: Pop(0)
0x1a4: Push(Stack[-2])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a6: Push((int) 3)
0x1a7: @ irand(Stack[-2], Stack[-1])
0x1a8: Pop(1)
0x1a9: Push("thunder")
0x1aa: Push((int) 1)
0x1ab: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ac: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ad: @ PlaySound(Stack[-1])
0x1ae: Pop(1)
0x1af: Push((int) 51)
0x1b0: PushEmpty(float, float)
0x1b1: Stack[-1] = (int) 6
0x1b2: Call2 0x28b

0x1b3: Pop(1)
0x1b4: @ SetTimer(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: Stack[-3] = 0
0x1b7: GOTO 0x1c1

0x1b8: Push((int) 51)
0x1b9: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bb: Push((int) 51)
0x1bc: @ KillTimer(Stack[-1])
0x1bd: Pop(1)
0x1be: Push(GlobalVars[0])
0x1bf: Stack[-1] = (bool) 0
0x1c0: GlobalVars[0] = Stack[-1]; Pop(1)
0x1c1: Return(); Pop(14)

0x1c2: PushEmpty(float, float)
0x1c3: Push(GlobalVars[0])
0x1c4: Stack[-1] = (bool) 1
0x1c5: GlobalVars[0] = Stack[-1]; Pop(1)
0x1c6: Push(CVector(1.0, 1.0, 0.71765))
0x1c7: @ SetAmbientMod(Stack[-1])
0x1c8: Pop(1)
0x1c9: Push(Stack[-3])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-1] = (float) 0.015
0x1cc: GOTO 0x1d1

0x1cd: Push((float)0.01)
0x1ce: Push((float)0.015)
0x1cf: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0x1d2: Push((int) 52)
0x1d3: PushEmpty(float, float)
0x1d4: Stack[-1] = Stack[-4]
0x1d5: Call2 0x28b

0x1d6: Pop(1)
0x1d7: @ SetTimer(Stack[-2], Stack[-1])
0x1d8: Pop(2)
0x1d9: Return(); Pop(2)

0x1da: PushEmpty(float, float)
0x1db: Push("rain")
0x1dc: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(int)
0x1df: Stack[-1] = (int) 40
0x1e0: Call2 0x10d

0x1e1: Pop(1)
0x1e2: GOTO 0x205

0x1e3: Push("wmod_level")
0x1e4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e6: @ GetModifierLevel(Stack[-1])
0x1e7: Pop(0)
0x1e8: Push("Level: ")
0x1e9: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1ea: @ Trace(Stack[-1])
0x1eb: Pop(1)
0x1ec: GOTO 0x205

0x1ed: Push("wdisease")
0x1ee: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f0: PushEmpty()
0x1f1: Call2 0x257

0x1f2: Pop(0)
0x1f3: GOTO 0x205

0x1f4: Push("wnormal")
0x1f5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f7: PushEmpty()
0x1f8: Call2 0x224

0x1f9: Pop(0)
0x1fa: GOTO 0x205

0x1fb: Push("lightning")
0x1fc: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fe: Push(GlobalVars[0])
0x1ff: Pop(1); Push((bool) Stack[-1] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Call2 0x1c2

0x204: Pop(1)
0x205: Return(); Pop(2)

0x206: PushEmpty()
0x207: Push((int) -1)
0x208: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20a: PushEmpty()
0x20b: Call2 0x224

0x20c: Pop(0)
0x20d: GOTO 0x223

0x20e: PushEmpty(bool, int)
0x20f: Stack[-1] = Stack[-3]
0x210: Call2 0x296

0x211: Pop(1)
0x212: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x213: PushEmpty()
0x214: Call2 0x257

0x215: Pop(0)
0x216: GOTO 0x223

0x217: PushEmpty(bool, int)
0x218: Stack[-1] = Stack[-3]
0x219: Call2 0x2a2

0x21a: Pop(1)
0x21b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21c: PushEmpty()
0x21d: Call2 0x238

0x21e: Pop(0)
0x21f: GOTO 0x223

0x220: PushEmpty()
0x221: Call2 0x224

0x222: Pop(0)
0x223: Return(); Pop(0)

0x224: PushEmpty(int, cvector, int, cvector)
0x225: Push((int) 0)
0x226: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Return(); Pop(4)

0x229: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x22a: Stack[-2] = (int) 0
0x22b: Push((int) 3)
0x22c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22e: @ GetColorMod(Stack[-1], Stack[-2])
0x22f: Pop(0)
0x230: Push(CVector(1.0, 1.0, 1.0))
0x231: Push((float)0.2)
0x232: @ LinearColorMod(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: Push((int) 1)
0x235: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x236: GOTO 0x22b

0x237: Return(); Pop(4)

0x238: PushEmpty(cvector, cvector)
0x239: Push((int) 2)
0x23a: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Return(); Pop(2)

0x23d: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x23e: Push((int) 0)
0x23f: @ GetColorMod(Stack[-2], Stack[-1])
0x240: Pop(1)
0x241: Push((int) 0)
0x242: Push(CVector(1.55639, 1.20267, 0.23796))
0x243: Push((float)0.2)
0x244: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 1)
0x247: @ GetColorMod(Stack[-2], Stack[-1])
0x248: Pop(1)
0x249: Push((int) 1)
0x24a: Push(CVector(1.55639, 1.20267, 0.23796))
0x24b: Push((float)0.2)
0x24c: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Push((int) 2)
0x24f: @ GetColorMod(Stack[-2], Stack[-1])
0x250: Pop(1)
0x251: Push((int) 2)
0x252: Push(CVector(1.55639, 1.20267, 0.23796))
0x253: Push((float)0.2)
0x254: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(2)

0x257: PushEmpty(cvector, cvector)
0x258: Push((int) 1)
0x259: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: Return(); Pop(2)

0x25c: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x25d: Push((int) 0)
0x25e: @ GetColorMod(Stack[-2], Stack[-1])
0x25f: Pop(1)
0x260: Push((int) 0)
0x261: Push(CVector(0.70588, 1.0, 0.9098))
0x262: Push((float)0.2)
0x263: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 1)
0x266: @ GetColorMod(Stack[-2], Stack[-1])
0x267: Pop(1)
0x268: Push((int) 1)
0x269: Push(CVector(0.70588, 1.0, 0.9098))
0x26a: Push((float)0.2)
0x26b: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Push((int) 2)
0x26e: @ GetColorMod(Stack[-2], Stack[-1])
0x26f: Pop(1)
0x270: Push((int) 2)
0x271: Push(CVector(0.70588, 1.0, 0.9098))
0x272: Push((float)0.2)
0x273: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Return(); Pop(2)

0x276: PushEmpty()
0x277: Push("lightning")
0x278: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27a: Push(GlobalVars[0])
0x27b: Pop(1); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27d: PushEmpty(bool)
0x27e: Stack[-1] = (bool) 1
0x27f: Call2 0x1c2

0x280: Pop(1)
0x281: Return(); Pop(0)

0x282: PushEmpty(float, float)
0x283: @ GetGameTime(Stack[-1])
0x284: Pop(0)
0x285: Push((int) 1)
0x286: PushEmpty(int)
0x287: Push((int) 24)
0x288: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x289: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x28a: Return(); Pop(2)

0x28b: PushEmpty(float, float)
0x28c: @ GetGameTimeScale(Stack[-1])
0x28d: Pop(0)
0x28e: Stack[-4] = Stack[-3] * Stack[-1]; Pop(0);
0x28f: Return(); Pop(2)

0x290: PushEmpty()
0x291: Push("Region")
0x292: Pop(1); Push(Stack[-1] + Stack[-2]);
0x293: Push("State")
0x294: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x295: Return(); Pop(0)

0x296: PushEmpty(int, int)
0x297: PushEmpty(string, int)
0x298: Stack[-1] = Stack[-5]
0x299: Call2 0x290

0x29a: Pop(1)
0x29b: @ GetVariable(Stack[-1], Stack[-2])
0x29c: Pop(1)
0x29d: Push((int) 3)
0x29e: Pop(1); Push(Stack[-2] & Stack[-1]);
0x29f: Push((int) 1)
0x2a0: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x2a1: Return(); Pop(2)

0x2a2: PushEmpty(int, int)
0x2a3: PushEmpty(string, int)
0x2a4: Stack[-1] = Stack[-5]
0x2a5: Call2 0x290

0x2a6: Pop(1)
0x2a7: @ GetVariable(Stack[-1], Stack[-2])
0x2a8: Pop(1)
0x2a9: Push((int) 3)
0x2aa: Pop(1); Push(Stack[-2] & Stack[-1]);
0x2ab: Push((int) 2)
0x2ac: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty()
0x2af: Push((int) 24)
0x2b0: Stack[-2] = Stack[-2] % Stack[-1]; Pop(1);
0x2b1: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b3: Push((int) 24)
0x2b4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b5: Stack[-4] = Stack[-1] - Stack[-2]; Pop(1);
0x2b6: Return(); Pop(0)

0x2b7: Stack[-3] = Stack[-2] - Stack[-1]; Pop(0);
0x2b8: Return(); Pop(0)

