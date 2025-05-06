GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	Door 
	 not found
	locked
	SetProperty
	No
	warehouse_rubin@door1
	ood1Notkin1
	ood1Notkin2
	ood1NotkinMQ1
	KnowTwoSouls
	pt_map_rubin
	ShowMap
	d1q01NotkinAboutRubin
	AddMark
	KnowNotkin
	ood1Notkin3
	ood1Notkin4
	ood1Notkin5
	ood1Notkin6
	ood1Notkin7
	ood3Notkin1
	ood4Notkin1
	KnowEpidemic
	d1q01
	d1q01FirstGeorgVisit
	d4q03
	KnowMark
	KnowGrif
	KnowMishka
	KnowSpi4ka
	KnowKapella
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	ui/NPC_Notkin.png

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	FindActor (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x272 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4de Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x67e Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a7 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae2 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0xe3d

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0xba9

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0xbea

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0xe41

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0xb9d

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0xbae

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0xe37

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0xe39

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0xe26

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0xbe6

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0xc8a

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 205)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 207)
0x85: Push((int) 256)
0x86: Push((int) 245)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 206)
0x8a: Push((int) 246)
0x8b: Push((int) 244)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0xe3b

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0xbea

0x9d: Pop(1)
0x9e: GOTO 0x95

0x9f: GOTO 0xae

0xa0: Push("all")
0xa1: Push("idle")
0xa2: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: @ WaitForAnimEnd()
0xa5: Pop(0)
0xa6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: GOTO 0xae

0xa9: Push("all")
0xaa: Push("idle")
0xab: @ PlayAnimation(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: GOTO 0xa4

0xae: Return(); Pop(0)

0xaf: PushEmpty()
0xb0: PushEmpty(bool)
0xb1: Call 0xe3b

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0xbea

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0xbfc

0xc4: Pop(0)
0xc5: Push((int) 243)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0xc8a

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 205)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 207)
0xd7: Push((int) 256)
0xd8: Push((int) 245)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 206)
0xdc: Push((int) 246)
0xdd: Push((int) 244)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 246)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0xaf

0xe7: Pop(1)
0xe8: Push((int) 208)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 209)
0xee: Push((int) 249)
0xef: Push((int) 247)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Push((int) 210)
0xf3: Push((int) 250)
0xf4: Push((int) 248)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Return(); Pop(0)

0xf8: Push((int) 250)
0xf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call 0xaf

0xfe: Pop(1)
0xff: Push((int) 212)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 215)
0x105: Push((int) 249)
0x106: Push((int) 253)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 249)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call 0xc64

0x111: Pop(2)
0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call 0xaf

0x115: Pop(1)
0x116: Push((int) 211)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 213)
0x11c: Push((int) 252)
0x11d: Push((int) 251)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 252)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call 0xaf

0x127: Pop(1)
0x128: Push((int) 214)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 216)
0x12e: Push((int) -1)
0x12f: Push((int) 255)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 256)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call 0xaf

0x139: Pop(1)
0x13a: Push((int) 217)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 218)
0x140: Push((int) -1)
0x141: Push((int) 257)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Push((int) 219)
0x145: Push((int) -1)
0x146: Push((int) 258)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14b: PushEmpty(bool)
0x14c: Call 0xe3b

0x14d: Pop(0)
0x14e: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14f: @ lshStopAnimation()
0x150: Pop(0)
0x151: GOTO 0x154

0x152: @ StopAnimation()
0x153: Pop(0)
0x154: Return(); Pop(0)

0x155: GOTO 0xc0

0x156: Return(); Pop(0)

0x157: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x158: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[-11]
0x15b: Call 0xbae

0x15c: Pop(1)
0x15d: Pop(1); Push((bool) Stack[-1] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15f: Stack[-10] = (int) -2
0x160: Return(); Pop(8)

0x161: @ CreateDialog(Stack[-4])
0x162: Pop(0)
0x163: PushEmpty(int)
0x164: Call 0xe37

0x165: Pop(0)
0x166: @@ SetNPCName(Stack[-1])
0x167: Pop(1)
0x168: PushEmpty(string)
0x169: Call 0xe39

0x16a: Pop(0)
0x16b: @@ SetPhoto(Stack[-1])
0x16c: Pop(1)
0x16d: PushEmpty(int)
0x16e: Call 0xe26

0x16f: Pop(0)
0x170: @@ SetPlayerName(Stack[-1])
0x171: Pop(1)
0x172: Stack[-2] = (int) -1
0x173: @ IsOverrideActive(Stack[-3])
0x174: Pop(0)
0x175: Push(Stack[-3])
0x176: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x177: Stack[-10] = (int) -2
0x178: Return(); Pop(8)

0x179: @ DoDialog(Stack[-4])
0x17a: Pop(0)
0x17b: PushEmpty(object, object)
0x17c: Stack[-2] = Stack[-11]
0x17d: Stack[-1] = Stack[-6]
0x17e: Push(-2, 4); TaskCall(5)
0x17f: Call 0x196

0x180: Pop(-2, 4); TaskReturn
0x181: Pop(2)
0x182: @@ IsDialogEnd(Stack[-1])
0x183: Pop(0)
0x184: Pop(0); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: @ sync()
0x187: Pop(0)
0x188: @@ IsDialogEnd(Stack[-1])
0x189: Pop(0)
0x18a: GOTO 0x184

0x18b: PushEmpty(object)
0x18c: Stack[-1] = Stack[-10]
0x18d: Call 0xbe6

0x18e: Pop(1)
0x18f: @ StopDialog(Stack[-4])
0x190: Pop(0)
0x191: @@ GetReturnValue(Stack[-2])
0x192: Pop(0)
0x193: Stack[-10] = Stack[-2]
0x194: Return(); Pop(8)

0x195: Stack[-4] = 0
0x196: PushEmpty()
0x197: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x198: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x199: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19a: Push((int) 1)
0x19b: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral"
0x19e: Call 0x262

0x19f: Pop(1)
0x1a0: Push((int) 8255)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call 0xd02

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call 0xcc6

0x1af: Pop(1)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Stack[-1] = (bool) 1
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: Push((int) 8256)
0x1b4: Push((int) 6255)
0x1b5: Push((int) 9079)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: PushEmpty(bool)
0x1b9: Stack[-1] = (bool) 1
0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 0
0x1bc: PushEmpty(bool, object)
0x1bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Call 0xd2e

0x1bf: Pop(1)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call 0xcd2

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: Stack[-1] = (bool) 1
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Stack[-1] = (bool) 0
0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call 0xd18

0x1cd: Pop(1)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call 0xcd2

0x1d2: Pop(1)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Stack[-1] = (bool) 1
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[-1] = (bool) 0
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: Push((int) 8257)
0x1d9: Push((int) 6264)
0x1da: Push((int) 9080)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: PushEmpty(bool)
0x1de: Stack[-1] = (bool) 0
0x1df: PushEmpty(bool, object)
0x1e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Call 0xd38

0x1e2: Pop(1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call 0xd50

0x1e7: Pop(1)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[-1] = (bool) 1
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: Push((int) 8273)
0x1ec: Push((int) 9105)
0x1ed: Push((int) 9096)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call 0xd44

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call 0xd5c

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = (bool) 1
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: Push((int) 8274)
0x1ff: Push((int) 9106)
0x200: Push((int) 9097)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: PushEmpty(bool)
0x204: Stack[-1] = (bool) 0
0x205: PushEmpty(bool, object)
0x206: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x207: Call 0xdc8

0x208: Pop(1)
0x209: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20a: PushEmpty(bool, object)
0x20b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20c: Call 0xd68

0x20d: Pop(1)
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: Stack[-1] = (bool) 1
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: Push((int) 8277)
0x212: Push((int) 9107)
0x213: Push((int) 9100)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call 0xd8c

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21d: PushEmpty(bool, object)
0x21e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21f: Call 0xd74

0x220: Pop(1)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Stack[-1] = (bool) 1
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: Push((int) 8279)
0x225: Push((int) 9108)
0x226: Push((int) 9102)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: PushEmpty(bool)
0x22a: Stack[-1] = (bool) 0
0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Call 0xdbc

0x22e: Pop(1)
0x22f: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x232: Call 0xd80

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: Push((int) 8280)
0x238: Push((int) 9109)
0x239: Push((int) 9103)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Push((int) 15221)
0x23d: Push((int) -1)
0x23e: Push((int) 16498)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: GOTO 0x244

0x242: Return(); Pop(0)

0x243: GOTO 0x19a

0x244: PushEmpty(bool)
0x245: Call 0xe3b

0x246: Pop(0)
0x247: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x248: @ lshWaitForAnimEnd()
0x249: Pop(0)
0x24a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: GOTO 0x252

0x24d: PushEmpty(string)
0x24e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x24f: Call 0xbea

0x250: Pop(1)
0x251: GOTO 0x248

0x252: GOTO 0x261

0x253: Push("all")
0x254: Push("idle")
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: @ WaitForAnimEnd()
0x258: Pop(0)
0x259: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x261

0x25c: Push("all")
0x25d: Push("idle")
0x25e: @ PlayAnimation(Stack[-2], Stack[-1])
0x25f: Pop(2)
0x260: GOTO 0x257

0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: PushEmpty(bool)
0x264: Call 0xe3b

0x265: Pop(0)
0x266: Pop(1); Push((bool) Stack[-1] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Return(); Pop(0)

0x269: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: Return(); Pop(0)

0x26c: PushEmpty(string)
0x26d: Stack[-1] = Stack[-2]
0x26e: Call 0xbea

0x26f: Pop(1)
0x270: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x271: Return(); Pop(0)

0x272: PushEmpty()
0x273: Push((int) 1)
0x274: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x275: PushEmpty()
0x276: Call 0xbfc

0x277: Pop(0)
0x278: Push((int) 9079)
0x279: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27b: PushEmpty(object, object)
0x27c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27e: Call 0xc4e

0x27f: Pop(2)
0x280: Push((int) 9080)
0x281: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x283: PushEmpty(object, object)
0x284: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x285: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x286: Call 0xc54

0x287: Pop(2)
0x288: Push((int) 6268)
0x289: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28b: PushEmpty(object, object)
0x28c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28e: Call 0xc4e

0x28f: Pop(2)
0x290: Push((int) 9096)
0x291: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x293: PushEmpty(object, object)
0x294: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x295: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x296: Call 0xc90

0x297: Pop(2)
0x298: Push((int) 9097)
0x299: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29b: PushEmpty(object, object)
0x29c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29e: Call 0xc96

0x29f: Pop(2)
0x2a0: Push((int) 9100)
0x2a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: PushEmpty(object, object)
0x2a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a6: Call 0xc9c

0x2a7: Pop(2)
0x2a8: Push((int) 9102)
0x2a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ab: PushEmpty(object, object)
0x2ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call 0xca2

0x2af: Pop(2)
0x2b0: Push((int) 9103)
0x2b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: PushEmpty(object, object)
0x2b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b6: Call 0xca8

0x2b7: Pop(2)
0x2b8: Push((int) 9078)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Neutral"
0x2bd: Call 0x262

0x2be: Pop(1)
0x2bf: Push((int) 8255)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: PushEmpty(bool)
0x2c5: Stack[-1] = (bool) 0
0x2c6: PushEmpty(bool, object)
0x2c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Call 0xd02

0x2c9: Pop(1)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cd: Call 0xcc6

0x2ce: Pop(1)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Stack[-1] = (bool) 1
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d2: Push((int) 8256)
0x2d3: Push((int) 6255)
0x2d4: Push((int) 9079)
0x2d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: PushEmpty(bool)
0x2d8: Stack[-1] = (bool) 1
0x2d9: PushEmpty(bool)
0x2da: Stack[-1] = (bool) 0
0x2db: PushEmpty(bool, object)
0x2dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dd: Call 0xd2e

0x2de: Pop(1)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Call 0xcd2

0x2e3: Pop(1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Stack[-1] = (bool) 1
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 0
0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Call 0xd18

0x2ec: Pop(1)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ee: PushEmpty(bool, object)
0x2ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f0: Call 0xcd2

0x2f1: Pop(1)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = (bool) 1
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = (bool) 0
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: Push((int) 8257)
0x2f8: Push((int) 6264)
0x2f9: Push((int) 9080)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: PushEmpty(bool)
0x2fd: Stack[-1] = (bool) 0
0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x300: Call 0xd38

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x305: Call 0xd50

0x306: Pop(1)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: Stack[-1] = (bool) 1
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: Push((int) 8273)
0x30b: Push((int) 9105)
0x30c: Push((int) 9096)
0x30d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: PushEmpty(bool)
0x310: Stack[-1] = (bool) 0
0x311: PushEmpty(bool, object)
0x312: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x313: Call 0xd44

0x314: Pop(1)
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x318: Call 0xd5c

0x319: Pop(1)
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: Stack[-1] = (bool) 1
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: Push((int) 8274)
0x31e: Push((int) 9106)
0x31f: Push((int) 9097)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: PushEmpty(bool)
0x323: Stack[-1] = (bool) 0
0x324: PushEmpty(bool, object)
0x325: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x326: Call 0xdc8

0x327: Pop(1)
0x328: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x329: PushEmpty(bool, object)
0x32a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32b: Call 0xd68

0x32c: Pop(1)
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Stack[-1] = (bool) 1
0x32f: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x330: Push((int) 8277)
0x331: Push((int) 9107)
0x332: Push((int) 9100)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: PushEmpty(bool)
0x336: Stack[-1] = (bool) 0
0x337: PushEmpty(bool, object)
0x338: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x339: Call 0xd8c

0x33a: Pop(1)
0x33b: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33c: PushEmpty(bool, object)
0x33d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Call 0xd74

0x33f: Pop(1)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Stack[-1] = (bool) 1
0x342: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x343: Push((int) 8279)
0x344: Push((int) 9108)
0x345: Push((int) 9102)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: PushEmpty(bool)
0x349: Stack[-1] = (bool) 0
0x34a: PushEmpty(bool, object)
0x34b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34c: Call 0xdbc

0x34d: Pop(1)
0x34e: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x351: Call 0xd80

0x352: Pop(1)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Stack[-1] = (bool) 1
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: Push((int) 8280)
0x357: Push((int) 9109)
0x358: Push((int) 9103)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Push((int) 15221)
0x35c: Push((int) -1)
0x35d: Push((int) 16498)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: Push((int) 9109)
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Neutral"
0x366: Call 0x262

0x367: Pop(1)
0x368: Push((int) 8286)
0x369: @@ SetMessage(Stack[-1])
0x36a: Pop(1)
0x36b: @@ ClearReplies()
0x36c: Pop(0)
0x36d: Push((int) 15222)
0x36e: Push((int) -1)
0x36f: Push((int) 16499)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Return(); Pop(0)

0x373: Push((int) 9108)
0x374: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x376: PushEmpty(string)
0x377: Stack[-1] = "Neutral"
0x378: Call 0x262

0x379: Pop(1)
0x37a: Push((int) 8285)
0x37b: @@ SetMessage(Stack[-1])
0x37c: Pop(1)
0x37d: @@ ClearReplies()
0x37e: Pop(0)
0x37f: Push((int) 15223)
0x380: Push((int) -1)
0x381: Push((int) 16500)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: Push((int) 9107)
0x386: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x388: PushEmpty(string)
0x389: Stack[-1] = "Neutral"
0x38a: Call 0x262

0x38b: Pop(1)
0x38c: Push((int) 8284)
0x38d: @@ SetMessage(Stack[-1])
0x38e: Pop(1)
0x38f: @@ ClearReplies()
0x390: Pop(0)
0x391: Push((int) 15224)
0x392: Push((int) -1)
0x393: Push((int) 16501)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 9106)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call 0x262

0x39d: Pop(1)
0x39e: Push((int) 8283)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 15225)
0x3a4: Push((int) -1)
0x3a5: Push((int) 16502)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 9105)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral"
0x3ae: Call 0x262

0x3af: Pop(1)
0x3b0: Push((int) 8282)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 15226)
0x3b6: Push((int) -1)
0x3b7: Push((int) 16503)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 6264)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "Neutral"
0x3c0: Call 0x262

0x3c1: Pop(1)
0x3c2: Push((int) 5682)
0x3c3: @@ SetMessage(Stack[-1])
0x3c4: Pop(1)
0x3c5: @@ ClearReplies()
0x3c6: Pop(0)
0x3c7: Push((int) 5683)
0x3c8: Push((int) 6266)
0x3c9: Push((int) 6265)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Push((int) 5686)
0x3cd: Push((int) -1)
0x3ce: Push((int) 6268)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Return(); Pop(0)

0x3d2: Push((int) 6266)
0x3d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d5: PushEmpty(string)
0x3d6: Stack[-1] = "Neutral"
0x3d7: Call 0x262

0x3d8: Pop(1)
0x3d9: Push((int) 5684)
0x3da: @@ SetMessage(Stack[-1])
0x3db: Pop(1)
0x3dc: @@ ClearReplies()
0x3dd: Pop(0)
0x3de: Push((int) 5685)
0x3df: Push((int) -1)
0x3e0: Push((int) 6267)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 6255)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral"
0x3e9: Call 0x262

0x3ea: Pop(1)
0x3eb: Push((int) 5674)
0x3ec: @@ SetMessage(Stack[-1])
0x3ed: Pop(1)
0x3ee: @@ ClearReplies()
0x3ef: Pop(0)
0x3f0: Push((int) 5675)
0x3f1: Push((int) 6257)
0x3f2: Push((int) 6256)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Push((int) 5681)
0x3f6: Push((int) 6257)
0x3f7: Push((int) 6262)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 6257)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Neutral"
0x400: Call 0x262

0x401: Pop(1)
0x402: Push((int) 5676)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 5677)
0x408: Push((int) 6259)
0x409: Push((int) 6258)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 6259)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral"
0x412: Call 0x262

0x413: Pop(1)
0x414: Push((int) 5678)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 5679)
0x41a: Push((int) -1)
0x41b: Push((int) 6260)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Push((int) 5680)
0x41f: Push((int) -1)
0x420: Push((int) 6261)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x425: PushEmpty(bool)
0x426: Call 0xe3b

0x427: Pop(0)
0x428: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x429: @ lshStopAnimation()
0x42a: Pop(0)
0x42b: GOTO 0x42e

0x42c: @ StopAnimation()
0x42d: Pop(0)
0x42e: Return(); Pop(0)

0x42f: GOTO 0x273

0x430: Return(); Pop(0)

0x431: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x432: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[-11]
0x435: Call 0xbae

0x436: Pop(1)
0x437: Pop(1); Push((bool) Stack[-1] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x439: Stack[-10] = (int) -2
0x43a: Return(); Pop(8)

0x43b: @ CreateDialog(Stack[-4])
0x43c: Pop(0)
0x43d: PushEmpty(int)
0x43e: Call 0xe37

0x43f: Pop(0)
0x440: @@ SetNPCName(Stack[-1])
0x441: Pop(1)
0x442: PushEmpty(string)
0x443: Call 0xe39

0x444: Pop(0)
0x445: @@ SetPhoto(Stack[-1])
0x446: Pop(1)
0x447: PushEmpty(int)
0x448: Call 0xe26

0x449: Pop(0)
0x44a: @@ SetPlayerName(Stack[-1])
0x44b: Pop(1)
0x44c: Stack[-2] = (int) -1
0x44d: @ IsOverrideActive(Stack[-3])
0x44e: Pop(0)
0x44f: Push(Stack[-3])
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-10] = (int) -2
0x452: Return(); Pop(8)

0x453: @ DoDialog(Stack[-4])
0x454: Pop(0)
0x455: PushEmpty(object, object)
0x456: Stack[-2] = Stack[-11]
0x457: Stack[-1] = Stack[-6]
0x458: Push(-2, 4); TaskCall(7)
0x459: Call 0x470

0x45a: Pop(-2, 4); TaskReturn
0x45b: Pop(2)
0x45c: @@ IsDialogEnd(Stack[-1])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x460: @ sync()
0x461: Pop(0)
0x462: @@ IsDialogEnd(Stack[-1])
0x463: Pop(0)
0x464: GOTO 0x45e

0x465: PushEmpty(object)
0x466: Stack[-1] = Stack[-10]
0x467: Call 0xbe6

0x468: Pop(1)
0x469: @ StopDialog(Stack[-4])
0x46a: Pop(0)
0x46b: @@ GetReturnValue(Stack[-2])
0x46c: Pop(0)
0x46d: Stack[-10] = Stack[-2]
0x46e: Return(); Pop(8)

0x46f: Stack[-4] = 0
0x470: PushEmpty()
0x471: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x472: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x473: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x474: Push((int) 1)
0x475: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x476: PushEmpty(bool)
0x477: Stack[-1] = (bool) 0
0x478: PushEmpty(bool)
0x479: Stack[-1] = (bool) 0
0x47a: PushEmpty(bool, object)
0x47b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47c: Call 0xcde

0x47d: Pop(1)
0x47e: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x47f: PushEmpty(bool, object)
0x480: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x481: Call 0xcf6

0x482: Pop(1)
0x483: Pop(1); Push((bool) Stack[-1] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: Stack[-1] = (bool) 1
0x486: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x487: PushEmpty(bool, object)
0x488: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x489: Call 0xcea

0x48a: Pop(1)
0x48b: Pop(1); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Stack[-1] = (bool) 1
0x48e: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x48f: PushEmpty(string)
0x490: Stack[-1] = "Neutral"
0x491: Call 0x4ce

0x492: Pop(1)
0x493: Push((int) 5688)
0x494: @@ SetMessage(Stack[-1])
0x495: Pop(1)
0x496: @@ ClearReplies()
0x497: Pop(0)
0x498: PushEmpty(bool, object)
0x499: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49a: Call 0xcba

0x49b: Pop(1)
0x49c: Pop(1); Push((bool) Stack[-1] == 0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: Push((int) 6198)
0x49f: Push((int) 6852)
0x4a0: Push((int) 6851)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: PushEmpty(bool, object)
0x4a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a5: Call 0xcba

0x4a6: Pop(1)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a8: Push((int) 5689)
0x4a9: Push((int) 6272)
0x4aa: Push((int) 6271)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: GOTO 0x4b0

0x4ae: Return(); Pop(0)

0x4af: GOTO 0x474

0x4b0: PushEmpty(bool)
0x4b1: Call 0xe3b

0x4b2: Pop(0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b4: @ lshWaitForAnimEnd()
0x4b5: Pop(0)
0x4b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: GOTO 0x4be

0x4b9: PushEmpty(string)
0x4ba: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4bb: Call 0xbea

0x4bc: Pop(1)
0x4bd: GOTO 0x4b4

0x4be: GOTO 0x4cd

0x4bf: Push("all")
0x4c0: Push("idle")
0x4c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c2: Pop(2)
0x4c3: @ WaitForAnimEnd()
0x4c4: Pop(0)
0x4c5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: GOTO 0x4cd

0x4c8: Push("all")
0x4c9: Push("idle")
0x4ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x4cb: Pop(2)
0x4cc: GOTO 0x4c3

0x4cd: Return(); Pop(0)

0x4ce: PushEmpty()
0x4cf: PushEmpty(bool)
0x4d0: Call 0xe3b

0x4d1: Pop(0)
0x4d2: Pop(1); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d4: Return(); Pop(0)

0x4d5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(string)
0x4d9: Stack[-1] = Stack[-2]
0x4da: Call 0xbea

0x4db: Pop(1)
0x4dc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4dd: Return(); Pop(0)

0x4de: PushEmpty()
0x4df: Push((int) 1)
0x4e0: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x4e1: PushEmpty()
0x4e2: Call 0xbfc

0x4e3: Pop(0)
0x4e4: Push((int) 6858)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4e7: PushEmpty(object, object)
0x4e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ea: Call 0xc5a

0x4eb: Pop(2)
0x4ec: PushEmpty(object, object)
0x4ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ef: Call 0xc47

0x4f0: Pop(2)
0x4f1: PushEmpty(object, object)
0x4f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f4: Call 0xc7a

0x4f5: Pop(2)
0x4f6: PushEmpty(object, object)
0x4f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f9: Call 0xc6a

0x4fa: Pop(2)
0x4fb: Push((int) 6860)
0x4fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4fe: PushEmpty(object, object)
0x4ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x500: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x501: Call 0xc5a

0x502: Pop(2)
0x503: PushEmpty(object, object)
0x504: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x505: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x506: Call 0xc47

0x507: Pop(2)
0x508: PushEmpty(object, object)
0x509: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x50a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50b: Call 0xc7a

0x50c: Pop(2)
0x50d: PushEmpty(object, object)
0x50e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x50f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x510: Call 0xc6a

0x511: Pop(2)
0x512: Push((int) 6270)
0x513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x515: PushEmpty(bool)
0x516: Stack[-1] = (bool) 0
0x517: PushEmpty(bool)
0x518: Stack[-1] = (bool) 0
0x519: PushEmpty(bool, object)
0x51a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51b: Call 0xcde

0x51c: Pop(1)
0x51d: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x51e: PushEmpty(bool, object)
0x51f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x520: Call 0xcf6

0x521: Pop(1)
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x524: Stack[-1] = (bool) 1
0x525: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x526: PushEmpty(bool, object)
0x527: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x528: Call 0xcea

0x529: Pop(1)
0x52a: Pop(1); Push((bool) Stack[-1] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52c: Stack[-1] = (bool) 1
0x52d: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x52e: PushEmpty(string)
0x52f: Stack[-1] = "Neutral"
0x530: Call 0x4ce

0x531: Pop(1)
0x532: Push((int) 5688)
0x533: @@ SetMessage(Stack[-1])
0x534: Pop(1)
0x535: @@ ClearReplies()
0x536: Pop(0)
0x537: PushEmpty(bool, object)
0x538: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x539: Call 0xcba

0x53a: Pop(1)
0x53b: Pop(1); Push((bool) Stack[-1] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53d: Push((int) 6198)
0x53e: Push((int) 6852)
0x53f: Push((int) 6851)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: PushEmpty(bool, object)
0x543: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x544: Call 0xcba

0x545: Pop(1)
0x546: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x547: Push((int) 5689)
0x548: Push((int) 6272)
0x549: Push((int) 6271)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: Return(); Pop(0)

0x54d: Push((int) 6272)
0x54e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x550: PushEmpty(string)
0x551: Stack[-1] = "Neutral"
0x552: Call 0x4ce

0x553: Pop(1)
0x554: Push((int) 5690)
0x555: @@ SetMessage(Stack[-1])
0x556: Pop(1)
0x557: @@ ClearReplies()
0x558: Pop(0)
0x559: Push((int) 5691)
0x55a: Push((int) 6274)
0x55b: Push((int) 6273)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: Return(); Pop(0)

0x55f: Push((int) 6274)
0x560: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x561: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x562: PushEmpty(string)
0x563: Stack[-1] = "Neutral"
0x564: Call 0x4ce

0x565: Pop(1)
0x566: Push((int) 5692)
0x567: @@ SetMessage(Stack[-1])
0x568: Pop(1)
0x569: @@ ClearReplies()
0x56a: Pop(0)
0x56b: Push((int) 6203)
0x56c: Push((int) 6857)
0x56d: Push((int) 6856)
0x56e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56f: Pop(3)
0x570: Return(); Pop(0)

0x571: Push((int) 6852)
0x572: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral"
0x576: Call 0x4ce

0x577: Pop(1)
0x578: Push((int) 6199)
0x579: @@ SetMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ ClearReplies()
0x57c: Pop(0)
0x57d: Push((int) 6200)
0x57e: Push((int) 6854)
0x57f: Push((int) 6853)
0x580: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x581: Pop(3)
0x582: Return(); Pop(0)

0x583: Push((int) 6854)
0x584: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x586: PushEmpty(string)
0x587: Stack[-1] = "Neutral"
0x588: Call 0x4ce

0x589: Pop(1)
0x58a: Push((int) 6201)
0x58b: @@ SetMessage(Stack[-1])
0x58c: Pop(1)
0x58d: @@ ClearReplies()
0x58e: Pop(0)
0x58f: Push((int) 6202)
0x590: Push((int) 6857)
0x591: Push((int) 6855)
0x592: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(3)
0x594: Return(); Pop(0)

0x595: Push((int) 6857)
0x596: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x598: PushEmpty(string)
0x599: Stack[-1] = "Neutral"
0x59a: Call 0x4ce

0x59b: Pop(1)
0x59c: Push((int) 6204)
0x59d: @@ SetMessage(Stack[-1])
0x59e: Pop(1)
0x59f: @@ ClearReplies()
0x5a0: Pop(0)
0x5a1: Push((int) 6205)
0x5a2: Push((int) -1)
0x5a3: Push((int) 6858)
0x5a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a5: Pop(3)
0x5a6: Push((int) 6206)
0x5a7: Push((int) -1)
0x5a8: Push((int) 6860)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Return(); Pop(0)

0x5ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5ad: PushEmpty(bool)
0x5ae: Call 0xe3b

0x5af: Pop(0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b1: @ lshStopAnimation()
0x5b2: Pop(0)
0x5b3: GOTO 0x5b6

0x5b4: @ StopAnimation()
0x5b5: Pop(0)
0x5b6: Return(); Pop(0)

0x5b7: GOTO 0x4df

0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5bb: PushEmpty(bool, object)
0x5bc: Stack[-1] = Stack[-11]
0x5bd: Call 0xbae

0x5be: Pop(1)
0x5bf: Pop(1); Push((bool) Stack[-1] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c1: Stack[-10] = (int) -2
0x5c2: Return(); Pop(8)

0x5c3: @ CreateDialog(Stack[-4])
0x5c4: Pop(0)
0x5c5: PushEmpty(int)
0x5c6: Call 0xe37

0x5c7: Pop(0)
0x5c8: @@ SetNPCName(Stack[-1])
0x5c9: Pop(1)
0x5ca: PushEmpty(string)
0x5cb: Call 0xe39

0x5cc: Pop(0)
0x5cd: @@ SetPhoto(Stack[-1])
0x5ce: Pop(1)
0x5cf: PushEmpty(int)
0x5d0: Call 0xe26

0x5d1: Pop(0)
0x5d2: @@ SetPlayerName(Stack[-1])
0x5d3: Pop(1)
0x5d4: Stack[-2] = (int) -1
0x5d5: @ IsOverrideActive(Stack[-3])
0x5d6: Pop(0)
0x5d7: Push(Stack[-3])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d9: Stack[-10] = (int) -2
0x5da: Return(); Pop(8)

0x5db: @ DoDialog(Stack[-4])
0x5dc: Pop(0)
0x5dd: PushEmpty(object, object)
0x5de: Stack[-2] = Stack[-11]
0x5df: Stack[-1] = Stack[-6]
0x5e0: Push(-2, 4); TaskCall(9)
0x5e1: Call 0x5f8

0x5e2: Pop(-2, 4); TaskReturn
0x5e3: Pop(2)
0x5e4: @@ IsDialogEnd(Stack[-1])
0x5e5: Pop(0)
0x5e6: Pop(0); Push((bool) Stack[-1] == 0)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e8: @ sync()
0x5e9: Pop(0)
0x5ea: @@ IsDialogEnd(Stack[-1])
0x5eb: Pop(0)
0x5ec: GOTO 0x5e6

0x5ed: PushEmpty(object)
0x5ee: Stack[-1] = Stack[-10]
0x5ef: Call 0xbe6

0x5f0: Pop(1)
0x5f1: @ StopDialog(Stack[-4])
0x5f2: Pop(0)
0x5f3: @@ GetReturnValue(Stack[-2])
0x5f4: Pop(0)
0x5f5: Stack[-10] = Stack[-2]
0x5f6: Return(); Pop(8)

0x5f7: Stack[-4] = 0
0x5f8: PushEmpty()
0x5f9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5fa: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5fb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5fc: Push((int) 1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x5fe: PushEmpty(bool, object)
0x5ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x600: Call 0xd13

0x601: Pop(1)
0x602: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x603: PushEmpty(string)
0x604: Stack[-1] = "Neutral"
0x605: Call 0x66e

0x606: Pop(1)
0x607: Push((int) 7472)
0x608: @@ SetMessage(Stack[-1])
0x609: Pop(1)
0x60a: @@ ClearReplies()
0x60b: Pop(0)
0x60c: Push((int) 7473)
0x60d: Push((int) 8250)
0x60e: Push((int) 8249)
0x60f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x610: Pop(3)
0x611: Push((int) 7488)
0x612: Push((int) 8252)
0x613: Push((int) 8265)
0x614: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x615: Pop(3)
0x616: GOTO 0x650

0x617: PushEmpty(string)
0x618: Stack[-1] = "Neutral"
0x619: Call 0x66e

0x61a: Pop(1)
0x61b: Push((int) 6943)
0x61c: @@ SetMessage(Stack[-1])
0x61d: Pop(1)
0x61e: @@ ClearReplies()
0x61f: Pop(0)
0x620: PushEmpty(bool, object)
0x621: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x622: Call 0xd0e

0x623: Pop(1)
0x624: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x625: Push((int) 6944)
0x626: Push((int) 7651)
0x627: Push((int) 7650)
0x628: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x629: Pop(3)
0x62a: Push((int) 7464)
0x62b: Push((int) 8240)
0x62c: Push((int) 8239)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Push((int) 7504)
0x630: Push((int) 8267)
0x631: Push((int) 8285)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: GOTO 0x650

0x635: PushEmpty(string)
0x636: Stack[-1] = "Neutral"
0x637: Call 0x66e

0x638: Pop(1)
0x639: Push((int) 9377)
0x63a: @@ SetMessage(Stack[-1])
0x63b: Pop(1)
0x63c: @@ ClearReplies()
0x63d: Pop(0)
0x63e: Push((int) 9378)
0x63f: Push((int) 10304)
0x640: Push((int) 10303)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Push((int) 9388)
0x644: Push((int) 10304)
0x645: Push((int) 10315)
0x646: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x647: Pop(3)
0x648: Push((int) 9389)
0x649: Push((int) 10318)
0x64a: Push((int) 10317)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: GOTO 0x650

0x64e: Return(); Pop(0)

0x64f: GOTO 0x5fc

0x650: PushEmpty(bool)
0x651: Call 0xe3b

0x652: Pop(0)
0x653: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x654: @ lshWaitForAnimEnd()
0x655: Pop(0)
0x656: Push( Stack[3 + Tasks[-1].StackPointer] )
0x657: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x658: GOTO 0x65e

0x659: PushEmpty(string)
0x65a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x65b: Call 0xbea

0x65c: Pop(1)
0x65d: GOTO 0x654

0x65e: GOTO 0x66d

0x65f: Push("all")
0x660: Push("idle")
0x661: @ PlayAnimation(Stack[-2], Stack[-1])
0x662: Pop(2)
0x663: @ WaitForAnimEnd()
0x664: Pop(0)
0x665: Push( Stack[3 + Tasks[-1].StackPointer] )
0x666: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x667: GOTO 0x66d

0x668: Push("all")
0x669: Push("idle")
0x66a: @ PlayAnimation(Stack[-2], Stack[-1])
0x66b: Pop(2)
0x66c: GOTO 0x663

0x66d: Return(); Pop(0)

0x66e: PushEmpty()
0x66f: PushEmpty(bool)
0x670: Call 0xe3b

0x671: Pop(0)
0x672: Pop(1); Push((bool) Stack[-1] == 0)
0x673: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x674: Return(); Pop(0)

0x675: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: Return(); Pop(0)

0x678: PushEmpty(string)
0x679: Stack[-1] = Stack[-2]
0x67a: Call 0xbea

0x67b: Pop(1)
0x67c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x67d: Return(); Pop(0)

0x67e: PushEmpty()
0x67f: Push((int) 1)
0x680: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x681: PushEmpty()
0x682: Call 0xbfc

0x683: Pop(0)
0x684: Push((int) 8255)
0x685: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x687: PushEmpty(object, object)
0x688: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x689: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68a: Call 0xc62

0x68b: Pop(2)
0x68c: Push((int) 8256)
0x68d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x68f: PushEmpty(object, object)
0x690: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x691: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x692: Call 0xc62

0x693: Pop(2)
0x694: Push((int) 8263)
0x695: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x697: PushEmpty(object, object)
0x698: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x699: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69a: Call 0xc62

0x69b: Pop(2)
0x69c: Push((int) 8264)
0x69d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x69f: PushEmpty(object, object)
0x6a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6a2: Call 0xc62

0x6a3: Pop(2)
0x6a4: Push((int) 8242)
0x6a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a6: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a7: PushEmpty(object, object)
0x6a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6aa: Call 0xc60

0x6ab: Pop(2)
0x6ac: Push((int) 8243)
0x6ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6af: PushEmpty(object, object)
0x6b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b2: Call 0xc60

0x6b3: Pop(2)
0x6b4: Push((int) 8234)
0x6b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b7: PushEmpty(object, object)
0x6b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ba: Call 0xc60

0x6bb: Pop(2)
0x6bc: Push((int) 8237)
0x6bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6bf: PushEmpty(object, object)
0x6c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c2: Call 0xc60

0x6c3: Pop(2)
0x6c4: Push((int) 8248)
0x6c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x6c7: PushEmpty(bool, object)
0x6c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c9: Call 0xd13

0x6ca: Pop(1)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6cc: PushEmpty(string)
0x6cd: Stack[-1] = "Neutral"
0x6ce: Call 0x66e

0x6cf: Pop(1)
0x6d0: Push((int) 7472)
0x6d1: @@ SetMessage(Stack[-1])
0x6d2: Pop(1)
0x6d3: @@ ClearReplies()
0x6d4: Pop(0)
0x6d5: Push((int) 7473)
0x6d6: Push((int) 8250)
0x6d7: Push((int) 8249)
0x6d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d9: Pop(3)
0x6da: Push((int) 7488)
0x6db: Push((int) 8252)
0x6dc: Push((int) 8265)
0x6dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(3)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty(string)
0x6e1: Stack[-1] = "Neutral"
0x6e2: Call 0x66e

0x6e3: Pop(1)
0x6e4: Push((int) 6943)
0x6e5: @@ SetMessage(Stack[-1])
0x6e6: Pop(1)
0x6e7: @@ ClearReplies()
0x6e8: Pop(0)
0x6e9: PushEmpty(bool, object)
0x6ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6eb: Call 0xd0e

0x6ec: Pop(1)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ee: Push((int) 6944)
0x6ef: Push((int) 7651)
0x6f0: Push((int) 7650)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Push((int) 7464)
0x6f4: Push((int) 8240)
0x6f5: Push((int) 8239)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: Push((int) 7504)
0x6f9: Push((int) 8267)
0x6fa: Push((int) 8285)
0x6fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty(string)
0x6ff: Stack[-1] = "Neutral"
0x700: Call 0x66e

0x701: Pop(1)
0x702: Push((int) 9377)
0x703: @@ SetMessage(Stack[-1])
0x704: Pop(1)
0x705: @@ ClearReplies()
0x706: Pop(0)
0x707: Push((int) 9378)
0x708: Push((int) 10304)
0x709: Push((int) 10303)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Push((int) 9388)
0x70d: Push((int) 10304)
0x70e: Push((int) 10315)
0x70f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x710: Pop(3)
0x711: Push((int) 9389)
0x712: Push((int) 10318)
0x713: Push((int) 10317)
0x714: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x715: Pop(3)
0x716: Return(); Pop(0)

0x717: Push((int) 10318)
0x718: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x719: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x71a: PushEmpty(string)
0x71b: Stack[-1] = "Neutral"
0x71c: Call 0x66e

0x71d: Pop(1)
0x71e: Push((int) 9390)
0x71f: @@ SetMessage(Stack[-1])
0x720: Pop(1)
0x721: @@ ClearReplies()
0x722: Pop(0)
0x723: Push((int) 9391)
0x724: Push((int) -1)
0x725: Push((int) 10319)
0x726: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x727: Pop(3)
0x728: Return(); Pop(0)

0x729: Push((int) 10304)
0x72a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72b: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x72c: PushEmpty(string)
0x72d: Stack[-1] = "Neutral"
0x72e: Call 0x66e

0x72f: Pop(1)
0x730: Push((int) 9379)
0x731: @@ SetMessage(Stack[-1])
0x732: Pop(1)
0x733: @@ ClearReplies()
0x734: Pop(0)
0x735: Push((int) 9380)
0x736: Push((int) 10306)
0x737: Push((int) 10305)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: Push((int) 9387)
0x73b: Push((int) 10306)
0x73c: Push((int) 10313)
0x73d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73e: Pop(3)
0x73f: Return(); Pop(0)

0x740: Push((int) 10306)
0x741: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x743: PushEmpty(string)
0x744: Stack[-1] = "Neutral"
0x745: Call 0x66e

0x746: Pop(1)
0x747: Push((int) 9381)
0x748: @@ SetMessage(Stack[-1])
0x749: Pop(1)
0x74a: @@ ClearReplies()
0x74b: Pop(0)
0x74c: Push((int) 9382)
0x74d: Push((int) 10308)
0x74e: Push((int) 10307)
0x74f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(3)
0x751: Push((int) 9386)
0x752: Push((int) 10308)
0x753: Push((int) 10311)
0x754: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: Return(); Pop(0)

0x757: Push((int) 10308)
0x758: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x75a: PushEmpty(string)
0x75b: Stack[-1] = "Neutral"
0x75c: Call 0x66e

0x75d: Pop(1)
0x75e: Push((int) 9383)
0x75f: @@ SetMessage(Stack[-1])
0x760: Pop(1)
0x761: @@ ClearReplies()
0x762: Pop(0)
0x763: Push((int) 9384)
0x764: Push((int) -1)
0x765: Push((int) 10309)
0x766: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: Push((int) 9385)
0x769: Push((int) -1)
0x76a: Push((int) 10310)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Return(); Pop(0)

0x76e: Push((int) 8267)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x771: PushEmpty(string)
0x772: Stack[-1] = "Neutral"
0x773: Call 0x66e

0x774: Pop(1)
0x775: Push((int) 7489)
0x776: @@ SetMessage(Stack[-1])
0x777: Pop(1)
0x778: @@ ClearReplies()
0x779: Pop(0)
0x77a: Push((int) 7490)
0x77b: Push((int) 8269)
0x77c: Push((int) 8268)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Push((int) 7500)
0x780: Push((int) 8269)
0x781: Push((int) 8280)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Push((int) 7501)
0x785: Push((int) 8283)
0x786: Push((int) 8282)
0x787: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x788: Pop(3)
0x789: Return(); Pop(0)

0x78a: Push((int) 8283)
0x78b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x78d: PushEmpty(string)
0x78e: Stack[-1] = "Neutral"
0x78f: Call 0x66e

0x790: Pop(1)
0x791: Push((int) 7502)
0x792: @@ SetMessage(Stack[-1])
0x793: Pop(1)
0x794: @@ ClearReplies()
0x795: Pop(0)
0x796: Push((int) 7503)
0x797: Push((int) -1)
0x798: Push((int) 8284)
0x799: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79a: Pop(3)
0x79b: Return(); Pop(0)

0x79c: Push((int) 8269)
0x79d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x79f: PushEmpty(string)
0x7a0: Stack[-1] = "Neutral"
0x7a1: Call 0x66e

0x7a2: Pop(1)
0x7a3: Push((int) 7491)
0x7a4: @@ SetMessage(Stack[-1])
0x7a5: Pop(1)
0x7a6: @@ ClearReplies()
0x7a7: Pop(0)
0x7a8: Push((int) 7492)
0x7a9: Push((int) 8271)
0x7aa: Push((int) 8270)
0x7ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(3)
0x7ad: Push((int) 7499)
0x7ae: Push((int) 8271)
0x7af: Push((int) 8278)
0x7b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b1: Pop(3)
0x7b2: Return(); Pop(0)

0x7b3: Push((int) 8271)
0x7b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7b6: PushEmpty(string)
0x7b7: Stack[-1] = "Neutral"
0x7b8: Call 0x66e

0x7b9: Pop(1)
0x7ba: Push((int) 7493)
0x7bb: @@ SetMessage(Stack[-1])
0x7bc: Pop(1)
0x7bd: @@ ClearReplies()
0x7be: Pop(0)
0x7bf: Push((int) 7494)
0x7c0: Push((int) 8273)
0x7c1: Push((int) 8272)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Push((int) 7498)
0x7c5: Push((int) 8273)
0x7c6: Push((int) 8276)
0x7c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c8: Pop(3)
0x7c9: Return(); Pop(0)

0x7ca: Push((int) 8273)
0x7cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7cd: PushEmpty(string)
0x7ce: Stack[-1] = "Neutral"
0x7cf: Call 0x66e

0x7d0: Pop(1)
0x7d1: Push((int) 7495)
0x7d2: @@ SetMessage(Stack[-1])
0x7d3: Pop(1)
0x7d4: @@ ClearReplies()
0x7d5: Pop(0)
0x7d6: Push((int) 7496)
0x7d7: Push((int) -1)
0x7d8: Push((int) 8274)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: Push((int) 7497)
0x7dc: Push((int) -1)
0x7dd: Push((int) 8275)
0x7de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7df: Pop(3)
0x7e0: Return(); Pop(0)

0x7e1: Push((int) 8240)
0x7e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7e4: PushEmpty(string)
0x7e5: Stack[-1] = "Neutral"
0x7e6: Call 0x66e

0x7e7: Pop(1)
0x7e8: Push((int) 7465)
0x7e9: @@ SetMessage(Stack[-1])
0x7ea: Pop(1)
0x7eb: @@ ClearReplies()
0x7ec: Pop(0)
0x7ed: Push((int) 7466)
0x7ee: Push((int) -1)
0x7ef: Push((int) 8241)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Return(); Pop(0)

0x7f3: Push((int) 7651)
0x7f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x7f6: PushEmpty(string)
0x7f7: Stack[-1] = "Neutral"
0x7f8: Call 0x66e

0x7f9: Pop(1)
0x7fa: Push((int) 6945)
0x7fb: @@ SetMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: @@ ClearReplies()
0x7fe: Pop(0)
0x7ff: Push((int) 6946)
0x800: Push((int) 7653)
0x801: Push((int) 7652)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Push((int) 7455)
0x805: Push((int) 8231)
0x806: Push((int) 8230)
0x807: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x808: Pop(3)
0x809: Return(); Pop(0)

0x80a: Push((int) 8231)
0x80b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x80d: PushEmpty(string)
0x80e: Stack[-1] = "Neutral"
0x80f: Call 0x66e

0x810: Pop(1)
0x811: Push((int) 7456)
0x812: @@ SetMessage(Stack[-1])
0x813: Pop(1)
0x814: @@ ClearReplies()
0x815: Pop(0)
0x816: Push((int) 7457)
0x817: Push((int) 8233)
0x818: Push((int) 8232)
0x819: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: Return(); Pop(0)

0x81c: Push((int) 8233)
0x81d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x81f: PushEmpty(string)
0x820: Stack[-1] = "Neutral"
0x821: Call 0x66e

0x822: Pop(1)
0x823: Push((int) 7458)
0x824: @@ SetMessage(Stack[-1])
0x825: Pop(1)
0x826: @@ ClearReplies()
0x827: Pop(0)
0x828: Push((int) 7459)
0x829: Push((int) -1)
0x82a: Push((int) 8234)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Push((int) 7460)
0x82e: Push((int) 8236)
0x82f: Push((int) 8235)
0x830: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x831: Pop(3)
0x832: Return(); Pop(0)

0x833: Push((int) 8236)
0x834: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x836: PushEmpty(string)
0x837: Stack[-1] = "Neutral"
0x838: Call 0x66e

0x839: Pop(1)
0x83a: Push((int) 7461)
0x83b: @@ SetMessage(Stack[-1])
0x83c: Pop(1)
0x83d: @@ ClearReplies()
0x83e: Pop(0)
0x83f: Push((int) 7462)
0x840: Push((int) -1)
0x841: Push((int) 8237)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: Return(); Pop(0)

0x845: Push((int) 7653)
0x846: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x847: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x848: PushEmpty(string)
0x849: Stack[-1] = "Neutral"
0x84a: Call 0x66e

0x84b: Pop(1)
0x84c: Push((int) 6947)
0x84d: @@ SetMessage(Stack[-1])
0x84e: Pop(1)
0x84f: @@ ClearReplies()
0x850: Pop(0)
0x851: Push((int) 7454)
0x852: Push((int) 8238)
0x853: Push((int) 8229)
0x854: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x855: Pop(3)
0x856: Push((int) 7469)
0x857: Push((int) 8245)
0x858: Push((int) 8244)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: Return(); Pop(0)

0x85c: Push((int) 8245)
0x85d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85e: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x85f: PushEmpty(string)
0x860: Stack[-1] = "Neutral"
0x861: Call 0x66e

0x862: Pop(1)
0x863: Push((int) 7470)
0x864: @@ SetMessage(Stack[-1])
0x865: Pop(1)
0x866: @@ ClearReplies()
0x867: Pop(0)
0x868: Push((int) 7471)
0x869: Push((int) 8238)
0x86a: Push((int) 8246)
0x86b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86c: Pop(3)
0x86d: Return(); Pop(0)

0x86e: Push((int) 8238)
0x86f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x871: PushEmpty(string)
0x872: Stack[-1] = "Neutral"
0x873: Call 0x66e

0x874: Pop(1)
0x875: Push((int) 7463)
0x876: @@ SetMessage(Stack[-1])
0x877: Pop(1)
0x878: @@ ClearReplies()
0x879: Pop(0)
0x87a: Push((int) 7467)
0x87b: Push((int) -1)
0x87c: Push((int) 8242)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Push((int) 7468)
0x880: Push((int) -1)
0x881: Push((int) 8243)
0x882: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x883: Pop(3)
0x884: Return(); Pop(0)

0x885: Push((int) 8250)
0x886: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x888: PushEmpty(string)
0x889: Stack[-1] = "Neutral"
0x88a: Call 0x66e

0x88b: Pop(1)
0x88c: Push((int) 7474)
0x88d: @@ SetMessage(Stack[-1])
0x88e: Pop(1)
0x88f: @@ ClearReplies()
0x890: Pop(0)
0x891: Push((int) 7475)
0x892: Push((int) 8252)
0x893: Push((int) 8251)
0x894: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x895: Pop(3)
0x896: Push((int) 7487)
0x897: Push((int) -1)
0x898: Push((int) 8264)
0x899: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89a: Pop(3)
0x89b: Return(); Pop(0)

0x89c: Push((int) 8252)
0x89d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x89f: PushEmpty(string)
0x8a0: Stack[-1] = "Neutral"
0x8a1: Call 0x66e

0x8a2: Pop(1)
0x8a3: Push((int) 7476)
0x8a4: @@ SetMessage(Stack[-1])
0x8a5: Pop(1)
0x8a6: @@ ClearReplies()
0x8a7: Pop(0)
0x8a8: Push((int) 7477)
0x8a9: Push((int) 8254)
0x8aa: Push((int) 8253)
0x8ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ac: Pop(3)
0x8ad: Push((int) 7481)
0x8ae: Push((int) 8258)
0x8af: Push((int) 8257)
0x8b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b1: Pop(3)
0x8b2: Return(); Pop(0)

0x8b3: Push((int) 8258)
0x8b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8b6: PushEmpty(string)
0x8b7: Stack[-1] = "Neutral"
0x8b8: Call 0x66e

0x8b9: Pop(1)
0x8ba: Push((int) 7482)
0x8bb: @@ SetMessage(Stack[-1])
0x8bc: Pop(1)
0x8bd: @@ ClearReplies()
0x8be: Pop(0)
0x8bf: Push((int) 7483)
0x8c0: Push((int) 8260)
0x8c1: Push((int) 8259)
0x8c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c3: Pop(3)
0x8c4: Push((int) 7486)
0x8c5: Push((int) -1)
0x8c6: Push((int) 8263)
0x8c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c8: Pop(3)
0x8c9: Return(); Pop(0)

0x8ca: Push((int) 8260)
0x8cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8cd: PushEmpty(string)
0x8ce: Stack[-1] = "Neutral"
0x8cf: Call 0x66e

0x8d0: Pop(1)
0x8d1: Push((int) 7484)
0x8d2: @@ SetMessage(Stack[-1])
0x8d3: Pop(1)
0x8d4: @@ ClearReplies()
0x8d5: Pop(0)
0x8d6: Push((int) 7485)
0x8d7: Push((int) 8254)
0x8d8: Push((int) 8261)
0x8d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8da: Pop(3)
0x8db: Return(); Pop(0)

0x8dc: Push((int) 8254)
0x8dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8df: PushEmpty(string)
0x8e0: Stack[-1] = "Neutral"
0x8e1: Call 0x66e

0x8e2: Pop(1)
0x8e3: Push((int) 7478)
0x8e4: @@ SetMessage(Stack[-1])
0x8e5: Pop(1)
0x8e6: @@ ClearReplies()
0x8e7: Pop(0)
0x8e8: Push((int) 7479)
0x8e9: Push((int) -1)
0x8ea: Push((int) 8255)
0x8eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ec: Pop(3)
0x8ed: Push((int) 7480)
0x8ee: Push((int) -1)
0x8ef: Push((int) 8256)
0x8f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f1: Pop(3)
0x8f2: Return(); Pop(0)

0x8f3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8f4: PushEmpty(bool)
0x8f5: Call 0xe3b

0x8f6: Pop(0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f8: @ lshStopAnimation()
0x8f9: Pop(0)
0x8fa: GOTO 0x8fd

0x8fb: @ StopAnimation()
0x8fc: Pop(0)
0x8fd: Return(); Pop(0)

0x8fe: GOTO 0x67f

0x8ff: Return(); Pop(0)

0x900: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x901: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x902: PushEmpty(bool, object)
0x903: Stack[-1] = Stack[-11]
0x904: Call 0xbae

0x905: Pop(1)
0x906: Pop(1); Push((bool) Stack[-1] == 0)
0x907: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x908: Stack[-10] = (int) -2
0x909: Return(); Pop(8)

0x90a: @ CreateDialog(Stack[-4])
0x90b: Pop(0)
0x90c: PushEmpty(int)
0x90d: Call 0xe37

0x90e: Pop(0)
0x90f: @@ SetNPCName(Stack[-1])
0x910: Pop(1)
0x911: PushEmpty(string)
0x912: Call 0xe39

0x913: Pop(0)
0x914: @@ SetPhoto(Stack[-1])
0x915: Pop(1)
0x916: PushEmpty(int)
0x917: Call 0xe26

0x918: Pop(0)
0x919: @@ SetPlayerName(Stack[-1])
0x91a: Pop(1)
0x91b: Stack[-2] = (int) -1
0x91c: @ IsOverrideActive(Stack[-3])
0x91d: Pop(0)
0x91e: Push(Stack[-3])
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-10] = (int) -2
0x921: Return(); Pop(8)

0x922: @ DoDialog(Stack[-4])
0x923: Pop(0)
0x924: PushEmpty(object, object)
0x925: Stack[-2] = Stack[-11]
0x926: Stack[-1] = Stack[-6]
0x927: Push(-2, 4); TaskCall(11)
0x928: Call 0x93f

0x929: Pop(-2, 4); TaskReturn
0x92a: Pop(2)
0x92b: @@ IsDialogEnd(Stack[-1])
0x92c: Pop(0)
0x92d: Pop(0); Push((bool) Stack[-1] == 0)
0x92e: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x92f: @ sync()
0x930: Pop(0)
0x931: @@ IsDialogEnd(Stack[-1])
0x932: Pop(0)
0x933: GOTO 0x92d

0x934: PushEmpty(object)
0x935: Stack[-1] = Stack[-10]
0x936: Call 0xbe6

0x937: Pop(1)
0x938: @ StopDialog(Stack[-4])
0x939: Pop(0)
0x93a: @@ GetReturnValue(Stack[-2])
0x93b: Pop(0)
0x93c: Stack[-10] = Stack[-2]
0x93d: Return(); Pop(8)

0x93e: Stack[-4] = 0
0x93f: PushEmpty()
0x940: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x941: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x942: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x943: Push((int) 1)
0x944: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x945: PushEmpty(bool, object)
0x946: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x947: Call 0xd98

0x948: Pop(1)
0x949: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x94a: PushEmpty(object, object)
0x94b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x94c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x94d: Call 0xcae

0x94e: Pop(2)
0x94f: PushEmpty(string)
0x950: Stack[-1] = "Neutral"
0x951: Call 0x997

0x952: Pop(1)
0x953: Push((int) 9978)
0x954: @@ SetMessage(Stack[-1])
0x955: Pop(1)
0x956: @@ ClearReplies()
0x957: Pop(0)
0x958: Push((int) 9979)
0x959: Push((int) 10998)
0x95a: Push((int) 10997)
0x95b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95c: Pop(3)
0x95d: Push((int) 9990)
0x95e: Push((int) 10998)
0x95f: Push((int) 11009)
0x960: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x961: Pop(3)
0x962: Push((int) 9991)
0x963: Push((int) 10998)
0x964: Push((int) 11011)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: GOTO 0x979

0x968: PushEmpty(string)
0x969: Stack[-1] = "Neutral"
0x96a: Call 0x997

0x96b: Pop(1)
0x96c: Push((int) 15318)
0x96d: @@ SetMessage(Stack[-1])
0x96e: Pop(1)
0x96f: @@ ClearReplies()
0x970: Pop(0)
0x971: Push((int) 15319)
0x972: Push((int) -1)
0x973: Push((int) 16557)
0x974: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x975: Pop(3)
0x976: GOTO 0x979

0x977: Return(); Pop(0)

0x978: GOTO 0x943

0x979: PushEmpty(bool)
0x97a: Call 0xe3b

0x97b: Pop(0)
0x97c: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x97d: @ lshWaitForAnimEnd()
0x97e: Pop(0)
0x97f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x980: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x981: GOTO 0x987

0x982: PushEmpty(string)
0x983: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x984: Call 0xbea

0x985: Pop(1)
0x986: GOTO 0x97d

0x987: GOTO 0x996

0x988: Push("all")
0x989: Push("idle")
0x98a: @ PlayAnimation(Stack[-2], Stack[-1])
0x98b: Pop(2)
0x98c: @ WaitForAnimEnd()
0x98d: Pop(0)
0x98e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98f: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x990: GOTO 0x996

0x991: Push("all")
0x992: Push("idle")
0x993: @ PlayAnimation(Stack[-2], Stack[-1])
0x994: Pop(2)
0x995: GOTO 0x98c

0x996: Return(); Pop(0)

0x997: PushEmpty()
0x998: PushEmpty(bool)
0x999: Call 0xe3b

0x99a: Pop(0)
0x99b: Pop(1); Push((bool) Stack[-1] == 0)
0x99c: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99d: Return(); Pop(0)

0x99e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x9a0: Return(); Pop(0)

0x9a1: PushEmpty(string)
0x9a2: Stack[-1] = Stack[-2]
0x9a3: Call 0xbea

0x9a4: Pop(1)
0x9a5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9a6: Return(); Pop(0)

0x9a7: PushEmpty()
0x9a8: Push((int) 1)
0x9a9: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0x9aa: PushEmpty()
0x9ab: Call 0xbfc

0x9ac: Pop(0)
0x9ad: Push((int) 10996)
0x9ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9b0: PushEmpty(bool, object)
0x9b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b2: Call 0xd98

0x9b3: Pop(1)
0x9b4: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9b5: PushEmpty(object, object)
0x9b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b8: Call 0xcae

0x9b9: Pop(2)
0x9ba: PushEmpty(string)
0x9bb: Stack[-1] = "Neutral"
0x9bc: Call 0x997

0x9bd: Pop(1)
0x9be: Push((int) 9978)
0x9bf: @@ SetMessage(Stack[-1])
0x9c0: Pop(1)
0x9c1: @@ ClearReplies()
0x9c2: Pop(0)
0x9c3: Push((int) 9979)
0x9c4: Push((int) 10998)
0x9c5: Push((int) 10997)
0x9c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c7: Pop(3)
0x9c8: Push((int) 9990)
0x9c9: Push((int) 10998)
0x9ca: Push((int) 11009)
0x9cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cc: Pop(3)
0x9cd: Push((int) 9991)
0x9ce: Push((int) 10998)
0x9cf: Push((int) 11011)
0x9d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d1: Pop(3)
0x9d2: Return(); Pop(0)

0x9d3: PushEmpty(string)
0x9d4: Stack[-1] = "Neutral"
0x9d5: Call 0x997

0x9d6: Pop(1)
0x9d7: Push((int) 15318)
0x9d8: @@ SetMessage(Stack[-1])
0x9d9: Pop(1)
0x9da: @@ ClearReplies()
0x9db: Pop(0)
0x9dc: Push((int) 15319)
0x9dd: Push((int) -1)
0x9de: Push((int) 16557)
0x9df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e0: Pop(3)
0x9e1: Return(); Pop(0)

0x9e2: Push((int) 10998)
0x9e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9e5: PushEmpty(string)
0x9e6: Stack[-1] = "Neutral"
0x9e7: Call 0x997

0x9e8: Pop(1)
0x9e9: Push((int) 9980)
0x9ea: @@ SetMessage(Stack[-1])
0x9eb: Pop(1)
0x9ec: @@ ClearReplies()
0x9ed: Pop(0)
0x9ee: Push((int) 9981)
0x9ef: Push((int) 11000)
0x9f0: Push((int) 10999)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Push((int) 9988)
0x9f4: Push((int) 11000)
0x9f5: Push((int) 11006)
0x9f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f7: Pop(3)
0x9f8: Push((int) 9989)
0x9f9: Push((int) -1)
0x9fa: Push((int) 11008)
0x9fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fc: Pop(3)
0x9fd: Return(); Pop(0)

0x9fe: Push((int) 11000)
0x9ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa00: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa01: PushEmpty(string)
0xa02: Stack[-1] = "Neutral"
0xa03: Call 0x997

0xa04: Pop(1)
0xa05: Push((int) 9982)
0xa06: @@ SetMessage(Stack[-1])
0xa07: Pop(1)
0xa08: @@ ClearReplies()
0xa09: Pop(0)
0xa0a: Push((int) 9983)
0xa0b: Push((int) -1)
0xa0c: Push((int) 11001)
0xa0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0e: Pop(3)
0xa0f: Push((int) 9984)
0xa10: Push((int) 11003)
0xa11: Push((int) 11002)
0xa12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa13: Pop(3)
0xa14: Return(); Pop(0)

0xa15: Push((int) 11003)
0xa16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa18: PushEmpty(string)
0xa19: Stack[-1] = "Neutral"
0xa1a: Call 0x997

0xa1b: Pop(1)
0xa1c: Push((int) 9985)
0xa1d: @@ SetMessage(Stack[-1])
0xa1e: Pop(1)
0xa1f: @@ ClearReplies()
0xa20: Pop(0)
0xa21: Push((int) 9986)
0xa22: Push((int) -1)
0xa23: Push((int) 11004)
0xa24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa25: Pop(3)
0xa26: Push((int) 9987)
0xa27: Push((int) -1)
0xa28: Push((int) 11005)
0xa29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2a: Pop(3)
0xa2b: Return(); Pop(0)

0xa2c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa2d: PushEmpty(bool)
0xa2e: Call 0xe3b

0xa2f: Pop(0)
0xa30: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa31: @ lshStopAnimation()
0xa32: Pop(0)
0xa33: GOTO 0xa36

0xa34: @ StopAnimation()
0xa35: Pop(0)
0xa36: Return(); Pop(0)

0xa37: GOTO 0x9a8

0xa38: Return(); Pop(0)

0xa39: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa3a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa3b: PushEmpty(bool, object)
0xa3c: Stack[-1] = Stack[-11]
0xa3d: Call 0xbae

0xa3e: Pop(1)
0xa3f: Pop(1); Push((bool) Stack[-1] == 0)
0xa40: IF (Stack[-1] == 0) GOTO 0xa43; Pop(1)

0xa41: Stack[-10] = (int) -2
0xa42: Return(); Pop(8)

0xa43: @ CreateDialog(Stack[-4])
0xa44: Pop(0)
0xa45: PushEmpty(int)
0xa46: Call 0xe37

0xa47: Pop(0)
0xa48: @@ SetNPCName(Stack[-1])
0xa49: Pop(1)
0xa4a: PushEmpty(string)
0xa4b: Call 0xe39

0xa4c: Pop(0)
0xa4d: @@ SetPhoto(Stack[-1])
0xa4e: Pop(1)
0xa4f: PushEmpty(int)
0xa50: Call 0xe26

0xa51: Pop(0)
0xa52: @@ SetPlayerName(Stack[-1])
0xa53: Pop(1)
0xa54: Stack[-2] = (int) -1
0xa55: @ IsOverrideActive(Stack[-3])
0xa56: Pop(0)
0xa57: Push(Stack[-3])
0xa58: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa59: Stack[-10] = (int) -2
0xa5a: Return(); Pop(8)

0xa5b: @ DoDialog(Stack[-4])
0xa5c: Pop(0)
0xa5d: PushEmpty(object, object)
0xa5e: Stack[-2] = Stack[-11]
0xa5f: Stack[-1] = Stack[-6]
0xa60: Push(-2, 4); TaskCall(13)
0xa61: Call 0xa78

0xa62: Pop(-2, 4); TaskReturn
0xa63: Pop(2)
0xa64: @@ IsDialogEnd(Stack[-1])
0xa65: Pop(0)
0xa66: Pop(0); Push((bool) Stack[-1] == 0)
0xa67: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa68: @ sync()
0xa69: Pop(0)
0xa6a: @@ IsDialogEnd(Stack[-1])
0xa6b: Pop(0)
0xa6c: GOTO 0xa66

0xa6d: PushEmpty(object)
0xa6e: Stack[-1] = Stack[-10]
0xa6f: Call 0xbe6

0xa70: Pop(1)
0xa71: @ StopDialog(Stack[-4])
0xa72: Pop(0)
0xa73: @@ GetReturnValue(Stack[-2])
0xa74: Pop(0)
0xa75: Stack[-10] = Stack[-2]
0xa76: Return(); Pop(8)

0xa77: Stack[-4] = 0
0xa78: PushEmpty()
0xa79: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa7a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa7b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa7c: Push((int) 1)
0xa7d: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xa7e: PushEmpty(string)
0xa7f: Stack[-1] = "Neutral"
0xa80: Call 0xad2

0xa81: Pop(1)
0xa82: Push((int) 11211)
0xa83: @@ SetMessage(Stack[-1])
0xa84: Pop(1)
0xa85: @@ ClearReplies()
0xa86: Pop(0)
0xa87: PushEmpty(bool)
0xa88: Stack[-1] = (bool) 1
0xa89: PushEmpty(bool)
0xa8a: Stack[-1] = (bool) 0
0xa8b: PushEmpty(bool, object)
0xa8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8d: Call 0xd22

0xa8e: Pop(1)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa90: PushEmpty(bool, object)
0xa91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa92: Call 0xdb0

0xa93: Pop(1)
0xa94: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa95: Stack[-1] = (bool) 1
0xa96: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xa97: PushEmpty(bool)
0xa98: Stack[-1] = (bool) 0
0xa99: PushEmpty(bool, object)
0xa9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9b: Call 0xda4

0xa9c: Pop(1)
0xa9d: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xa9e: PushEmpty(bool, object)
0xa9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa0: Call 0xdb0

0xaa1: Pop(1)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa3: Stack[-1] = (bool) 1
0xaa4: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa5: Stack[-1] = (bool) 0
0xaa6: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaa7: Push((int) 11212)
0xaa8: Push((int) 12401)
0xaa9: Push((int) 12400)
0xaaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaab: Pop(3)
0xaac: Push((int) 15335)
0xaad: Push((int) -1)
0xaae: Push((int) 16558)
0xaaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab0: Pop(3)
0xab1: GOTO 0xab4

0xab2: Return(); Pop(0)

0xab3: GOTO 0xa7c

0xab4: PushEmpty(bool)
0xab5: Call 0xe3b

0xab6: Pop(0)
0xab7: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xab8: @ lshWaitForAnimEnd()
0xab9: Pop(0)
0xaba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xabb: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabc: GOTO 0xac2

0xabd: PushEmpty(string)
0xabe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xabf: Call 0xbea

0xac0: Pop(1)
0xac1: GOTO 0xab8

0xac2: GOTO 0xad1

0xac3: Push("all")
0xac4: Push("idle")
0xac5: @ PlayAnimation(Stack[-2], Stack[-1])
0xac6: Pop(2)
0xac7: @ WaitForAnimEnd()
0xac8: Pop(0)
0xac9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaca: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xacb: GOTO 0xad1

0xacc: Push("all")
0xacd: Push("idle")
0xace: @ PlayAnimation(Stack[-2], Stack[-1])
0xacf: Pop(2)
0xad0: GOTO 0xac7

0xad1: Return(); Pop(0)

0xad2: PushEmpty()
0xad3: PushEmpty(bool)
0xad4: Call 0xe3b

0xad5: Pop(0)
0xad6: Pop(1); Push((bool) Stack[-1] == 0)
0xad7: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad8: Return(); Pop(0)

0xad9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xada: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xadb: Return(); Pop(0)

0xadc: PushEmpty(string)
0xadd: Stack[-1] = Stack[-2]
0xade: Call 0xbea

0xadf: Pop(1)
0xae0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xae1: Return(); Pop(0)

0xae2: PushEmpty()
0xae3: Push((int) 1)
0xae4: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xae5: PushEmpty()
0xae6: Call 0xbfc

0xae7: Pop(0)
0xae8: Push((int) 12400)
0xae9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xaeb: PushEmpty(object, object)
0xaec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaee: Call 0xcb4

0xaef: Pop(2)
0xaf0: Push((int) 12399)
0xaf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf2: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xaf3: PushEmpty(string)
0xaf4: Stack[-1] = "Neutral"
0xaf5: Call 0xad2

0xaf6: Pop(1)
0xaf7: Push((int) 11211)
0xaf8: @@ SetMessage(Stack[-1])
0xaf9: Pop(1)
0xafa: @@ ClearReplies()
0xafb: Pop(0)
0xafc: PushEmpty(bool)
0xafd: Stack[-1] = (bool) 1
0xafe: PushEmpty(bool)
0xaff: Stack[-1] = (bool) 0
0xb00: PushEmpty(bool, object)
0xb01: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb02: Call 0xd22

0xb03: Pop(1)
0xb04: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xb05: PushEmpty(bool, object)
0xb06: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb07: Call 0xdb0

0xb08: Pop(1)
0xb09: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xb0a: Stack[-1] = (bool) 1
0xb0b: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb0c: PushEmpty(bool)
0xb0d: Stack[-1] = (bool) 0
0xb0e: PushEmpty(bool, object)
0xb0f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb10: Call 0xda4

0xb11: Pop(1)
0xb12: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb13: PushEmpty(bool, object)
0xb14: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb15: Call 0xdb0

0xb16: Pop(1)
0xb17: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb18: Stack[-1] = (bool) 1
0xb19: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb1a: Stack[-1] = (bool) 0
0xb1b: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1c: Push((int) 11212)
0xb1d: Push((int) 12401)
0xb1e: Push((int) 12400)
0xb1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(3)
0xb21: Push((int) 15335)
0xb22: Push((int) -1)
0xb23: Push((int) 16558)
0xb24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb25: Pop(3)
0xb26: Return(); Pop(0)

0xb27: Push((int) 12401)
0xb28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb29: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb2a: PushEmpty(string)
0xb2b: Stack[-1] = "Neutral"
0xb2c: Call 0xad2

0xb2d: Pop(1)
0xb2e: Push((int) 11213)
0xb2f: @@ SetMessage(Stack[-1])
0xb30: Pop(1)
0xb31: @@ ClearReplies()
0xb32: Pop(0)
0xb33: Push((int) 11214)
0xb34: Push((int) 12403)
0xb35: Push((int) 12402)
0xb36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(3)
0xb38: Push((int) 11223)
0xb39: Push((int) 12413)
0xb3a: Push((int) 12412)
0xb3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3c: Pop(3)
0xb3d: Return(); Pop(0)

0xb3e: Push((int) 12413)
0xb3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb40: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb41: PushEmpty(string)
0xb42: Stack[-1] = "Neutral"
0xb43: Call 0xad2

0xb44: Pop(1)
0xb45: Push((int) 11224)
0xb46: @@ SetMessage(Stack[-1])
0xb47: Pop(1)
0xb48: @@ ClearReplies()
0xb49: Pop(0)
0xb4a: Push((int) 11225)
0xb4b: Push((int) 12405)
0xb4c: Push((int) 12414)
0xb4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4e: Pop(3)
0xb4f: Return(); Pop(0)

0xb50: Push((int) 12403)
0xb51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb52: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb53: PushEmpty(string)
0xb54: Stack[-1] = "Neutral"
0xb55: Call 0xad2

0xb56: Pop(1)
0xb57: Push((int) 11215)
0xb58: @@ SetMessage(Stack[-1])
0xb59: Pop(1)
0xb5a: @@ ClearReplies()
0xb5b: Pop(0)
0xb5c: Push((int) 11216)
0xb5d: Push((int) 12405)
0xb5e: Push((int) 12404)
0xb5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb60: Pop(3)
0xb61: Push((int) 11220)
0xb62: Push((int) 12409)
0xb63: Push((int) 12408)
0xb64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb65: Pop(3)
0xb66: Return(); Pop(0)

0xb67: Push((int) 12409)
0xb68: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb69: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb6a: PushEmpty(string)
0xb6b: Stack[-1] = "Neutral"
0xb6c: Call 0xad2

0xb6d: Pop(1)
0xb6e: Push((int) 11221)
0xb6f: @@ SetMessage(Stack[-1])
0xb70: Pop(1)
0xb71: @@ ClearReplies()
0xb72: Pop(0)
0xb73: Push((int) 11222)
0xb74: Push((int) 12405)
0xb75: Push((int) 12410)
0xb76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb77: Pop(3)
0xb78: Return(); Pop(0)

0xb79: Push((int) 12405)
0xb7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb7c: PushEmpty(string)
0xb7d: Stack[-1] = "Neutral"
0xb7e: Call 0xad2

0xb7f: Pop(1)
0xb80: Push((int) 11217)
0xb81: @@ SetMessage(Stack[-1])
0xb82: Pop(1)
0xb83: @@ ClearReplies()
0xb84: Pop(0)
0xb85: Push((int) 11218)
0xb86: Push((int) -1)
0xb87: Push((int) 12406)
0xb88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb89: Pop(3)
0xb8a: Push((int) 11219)
0xb8b: Push((int) -1)
0xb8c: Push((int) 12407)
0xb8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8e: Pop(3)
0xb8f: Return(); Pop(0)

0xb90: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb91: PushEmpty(bool)
0xb92: Call 0xe3b

0xb93: Pop(0)
0xb94: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb95: @ lshStopAnimation()
0xb96: Pop(0)
0xb97: GOTO 0xb9a

0xb98: @ StopAnimation()
0xb99: Pop(0)
0xb9a: Return(); Pop(0)

0xb9b: GOTO 0xae3

0xb9c: Return(); Pop(0)

0xb9d: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0xb9e: @@ GetPosition(Stack[-4])
0xb9f: Pop(0)
0xba0: @ GetPosition(Stack[-3])
0xba1: Pop(0)
0xba2: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xba3: Push(CvectorIndex(Stack[-2], 0))
0xba4: Push(CvectorIndex(Stack[-3], 2))
0xba5: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xba6: Pop(2)
0xba7: Stack[-10] = Stack[-1]
0xba8: Return(); Pop(8)

0xba9: PushEmpty(bool, bool)
0xbaa: @ IsLoaded(Stack[-1])
0xbab: Pop(0)
0xbac: Stack[-3] = Stack[-1]
0xbad: Return(); Pop(2)

0xbae: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xbaf: @@ GetPosition(Stack[-7])
0xbb0: Pop(0)
0xbb1: @@ GetEyesHeight(Stack[-8])
0xbb2: Pop(0)
0xbb3: Push(CvectorIndex(Stack[-7], 1))
0xbb4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xbb5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xbb6: @ GetPosition(Stack[-6])
0xbb7: Pop(0)
0xbb8: @ GetEyesHeight(Stack[-8])
0xbb9: Pop(0)
0xbba: Push(CvectorIndex(Stack[-6], 1))
0xbbb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xbbc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xbbd: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xbbe: Push(CvectorIndex(Stack[-5], 1))
0xbbf: Stack[-1] = (int) 0
0xbc0: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xbc1: Pop(0); Push(Stack[-5] | Stack[-5]);
0xbc2: Pop(1); Push(Sqrt(Stack[-1]))
0xbc3: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xbc4: Stack[-4] = -Stack[-5]; Pop(0);
0xbc5: Push((int) 70)
0xbc6: Pop(1); Push(Stack[-6] * Stack[-1]);
0xbc7: PushEmpty(cvector, cvector)
0xbc8: Push(CVector(0.0, 1.0, 0.0))
0xbc9: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xbca: Call 0xc03

0xbcb: Pop(1)
0xbcc: Push((int) 25)
0xbcd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbce: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbcf: Push(CVector(0.0, 10.0, 0.0))
0xbd0: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xbd1: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xbd2: @ IsOverrideActive(Stack[-1])
0xbd3: Pop(0)
0xbd4: Push(Stack[-1])
0xbd5: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd6: Stack[-18] = (bool) 0
0xbd7: Return(); Pop(16)

0xbd8: @ StopWorld()
0xbd9: Pop(0)
0xbda: @ CameraTransit(Stack[-2], Stack[-4])
0xbdb: Pop(0)
0xbdc: Push(CvectorIndex(Stack[-3], 0))
0xbdd: Push(CvectorIndex(Stack[-4], 2))
0xbde: @ Rotate(Stack[-2], Stack[-1])
0xbdf: Pop(2)
0xbe0: @ CameraWaitForPlayFinish()
0xbe1: Pop(0)
0xbe2: @ ResumeWorld()
0xbe3: Pop(0)
0xbe4: Stack[-18] = (bool) 1
0xbe5: Return(); Pop(16)

0xbe6: PushEmpty()
0xbe7: @ CameraSwitchToNormal()
0xbe8: Pop(0)
0xbe9: Return(); Pop(0)

0xbea: PushEmpty(float, float, float, float)
0xbeb: Push("playing ")
0xbec: Pop(1); Push(Stack[-1] + Stack[-6]);
0xbed: @ Trace(Stack[-1])
0xbee: Pop(1)
0xbef: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xbf0: Pop(0)
0xbf1: @ lshPlayAnimation(Stack[-2], Stack[-1])
0xbf2: Pop(0)
0xbf3: Push("start: ")
0xbf4: Pop(1); Push(Stack[-1] + Stack[-3]);
0xbf5: @ Trace(Stack[-1])
0xbf6: Pop(1)
0xbf7: Push("end: ")
0xbf8: Pop(1); Push(Stack[-1] + Stack[-2]);
0xbf9: @ Trace(Stack[-1])
0xbfa: Pop(1)
0xbfb: Return(); Pop(4)

0xbfc: PushEmpty(bool)
0xbfd: Call 0xe3b

0xbfe: Pop(0)
0xbff: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xc00: @ lshStopSpeech()
0xc01: Pop(0)
0xc02: Return(); Pop(0)

0xc03: PushEmpty(float, float)
0xc04: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc05: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc06: Push((float)0.0)
0xc07: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc09: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc0a: Return(); Pop(2)

0xc0b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc0c: Return(); Pop(2)

0xc0d: PushEmpty(int, int)
0xc0e: @ GetVariable(Stack[-3], Stack[-1])
0xc0f: Pop(0)
0xc10: Stack[-4] = Stack[-1]
0xc11: Return(); Pop(2)

0xc12: PushEmpty(object, object)
0xc13: @ FindActor(Stack[-1], Stack[-4])
0xc14: Pop(0)
0xc15: Pop(0); Push((bool) Stack[-1] == 0)
0xc16: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc17: Push("Door ")
0xc18: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc19: Push(" not found")
0xc1a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1b: @ Trace(Stack[-1])
0xc1c: Pop(1)
0xc1d: Push("locked")
0xc1e: @@ SetProperty(Stack[-1], Stack[-4])
0xc1f: Pop(1)
0xc20: Return(); Pop(2)

0xc21: Stack[-1] = 0
0xc22: PushEmpty(float, float)
0xc23: @ GetGameTime(Stack[-1])
0xc24: Pop(0)
0xc25: Stack[-3] = Stack[-1]
0xc26: Return(); Pop(2)

0xc27: PushEmpty(float, float)
0xc28: @ GetGameTime(Stack[-1])
0xc29: Pop(0)
0xc2a: Push((int) 1)
0xc2b: PushEmpty(int)
0xc2c: Push((int) 24)
0xc2d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc2e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc2f: Return(); Pop(2)

0xc30: PushEmpty(float, float)
0xc31: @ GetGameTime(Stack[-1])
0xc32: Pop(0)
0xc33: PushEmpty(int)
0xc34: Stack[-1] = Stack[-2]
0xc35: Push((int) 24)
0xc36: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xc37: Return(); Pop(2)

0xc38: PushEmpty()
0xc39: PushEmpty(int)
0xc3a: Call 0xc27

0xc3b: Pop(0)
0xc3c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xc3d: Return(); Pop(0)

0xc3e: PushEmpty(bool, bool)
0xc3f: PushEmpty(string)
0xc40: Stack[-1] = "No"
0xc41: Call 0xbea

0xc42: Pop(1)
0xc43: @ lshWaitForAnimEnd(Stack[-1])
0xc44: Pop(0)
0xc45: Stack[-3] = Stack[-1]
0xc46: Return(); Pop(2)

0xc47: PushEmpty()
0xc48: PushEmpty(string, bool)
0xc49: Stack[-2] = "warehouse_rubin@door1"
0xc4a: Stack[-1] = (bool) 0
0xc4b: Call 0xc12

0xc4c: Pop(2)
0xc4d: Return(); Pop(0)

0xc4e: PushEmpty()
0xc4f: Push("ood1Notkin1")
0xc50: Push((int) 1)
0xc51: @ SetVariable(Stack[-2], Stack[-1])
0xc52: Pop(2)
0xc53: Return(); Pop(0)

0xc54: PushEmpty()
0xc55: Push("ood1Notkin2")
0xc56: Push((int) 1)
0xc57: @ SetVariable(Stack[-2], Stack[-1])
0xc58: Pop(2)
0xc59: Return(); Pop(0)

0xc5a: PushEmpty()
0xc5b: Push("ood1NotkinMQ1")
0xc5c: Push((int) 1)
0xc5d: @ SetVariable(Stack[-2], Stack[-1])
0xc5e: Pop(2)
0xc5f: Return(); Pop(0)

0xc60: PushEmpty()
0xc61: Return(); Pop(0)

0xc62: PushEmpty()
0xc63: Return(); Pop(0)

0xc64: PushEmpty()
0xc65: Push("KnowTwoSouls")
0xc66: Push((int) 1)
0xc67: @ SetVariable(Stack[-2], Stack[-1])
0xc68: Pop(2)
0xc69: Return(); Pop(0)

0xc6a: PushEmpty()
0xc6b: PushEmpty(object, string, float)
0xc6c: PushEmpty(object)
0xc6d: Call 0xdf4

0xc6e: Stack[-4] = Stack[-1]
0xc6f: Pop(1)
0xc70: Stack[-2] = "pt_map_rubin"
0xc71: Stack[-1] = (int) 2
0xc72: Call 0xe05

0xc73: Pop(3)
0xc74: PushEmpty(object)
0xc75: Call 0xdf4

0xc76: Pop(0)
0xc77: @@ ShowMap(Stack[-1])
0xc78: Pop(1)
0xc79: Return(); Pop(0)

0xc7a: PushEmpty(object, object)
0xc7b: PushEmpty(object)
0xc7c: Call 0xdf4

0xc7d: Stack[-2] = Stack[-1]
0xc7e: Pop(1)
0xc7f: Push("d1q01NotkinAboutRubin")
0xc80: Push("pt_map_rubin")
0xc81: Push((int) 1)
0xc82: Push((int) 8648)
0xc83: PushEmpty(float)
0xc84: Call 0xc22

0xc85: Pop(0)
0xc86: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc87: Pop(5)
0xc88: Return(); Pop(2)

0xc89: Stack[-1] = 0
0xc8a: PushEmpty()
0xc8b: Push("KnowNotkin")
0xc8c: Push((int) 1)
0xc8d: @ SetVariable(Stack[-2], Stack[-1])
0xc8e: Pop(2)
0xc8f: Return(); Pop(0)

0xc90: PushEmpty()
0xc91: Push("ood1Notkin3")
0xc92: Push((int) 1)
0xc93: @ SetVariable(Stack[-2], Stack[-1])
0xc94: Pop(2)
0xc95: Return(); Pop(0)

0xc96: PushEmpty()
0xc97: Push("ood1Notkin4")
0xc98: Push((int) 1)
0xc99: @ SetVariable(Stack[-2], Stack[-1])
0xc9a: Pop(2)
0xc9b: Return(); Pop(0)

0xc9c: PushEmpty()
0xc9d: Push("ood1Notkin5")
0xc9e: Push((int) 1)
0xc9f: @ SetVariable(Stack[-2], Stack[-1])
0xca0: Pop(2)
0xca1: Return(); Pop(0)

0xca2: PushEmpty()
0xca3: Push("ood1Notkin6")
0xca4: Push((int) 1)
0xca5: @ SetVariable(Stack[-2], Stack[-1])
0xca6: Pop(2)
0xca7: Return(); Pop(0)

0xca8: PushEmpty()
0xca9: Push("ood1Notkin7")
0xcaa: Push((int) 1)
0xcab: @ SetVariable(Stack[-2], Stack[-1])
0xcac: Pop(2)
0xcad: Return(); Pop(0)

0xcae: PushEmpty()
0xcaf: Push("ood3Notkin1")
0xcb0: Push((int) 1)
0xcb1: @ SetVariable(Stack[-2], Stack[-1])
0xcb2: Pop(2)
0xcb3: Return(); Pop(0)

0xcb4: PushEmpty()
0xcb5: Push("ood4Notkin1")
0xcb6: Push((int) 1)
0xcb7: @ SetVariable(Stack[-2], Stack[-1])
0xcb8: Pop(2)
0xcb9: Return(); Pop(0)

0xcba: PushEmpty()
0xcbb: PushEmpty(int, string)
0xcbc: Stack[-1] = "KnowEpidemic"
0xcbd: Call 0xc0d

0xcbe: Pop(1)
0xcbf: Push((int) 1)
0xcc0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc2: Stack[-2] = (bool) 1
0xcc3: Return(); Pop(0)

0xcc4: Stack[-2] = (bool) 0
0xcc5: Return(); Pop(0)

0xcc6: PushEmpty()
0xcc7: PushEmpty(int, string)
0xcc8: Stack[-1] = "ood1Notkin1"
0xcc9: Call 0xc0d

0xcca: Pop(1)
0xccb: Push((int) 0)
0xccc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xccd: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcce: Stack[-2] = (bool) 1
0xccf: Return(); Pop(0)

0xcd0: Stack[-2] = (bool) 0
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty()
0xcd3: PushEmpty(int, string)
0xcd4: Stack[-1] = "ood1Notkin2"
0xcd5: Call 0xc0d

0xcd6: Pop(1)
0xcd7: Push((int) 0)
0xcd8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcd9: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcda: Stack[-2] = (bool) 1
0xcdb: Return(); Pop(0)

0xcdc: Stack[-2] = (bool) 0
0xcdd: Return(); Pop(0)

0xcde: PushEmpty()
0xcdf: PushEmpty(int, string)
0xce0: Stack[-1] = "ood1NotkinMQ1"
0xce1: Call 0xc0d

0xce2: Pop(1)
0xce3: Push((int) 0)
0xce4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xce5: IF (Stack[-1] == 0) GOTO 0xce8; Pop(1)

0xce6: Stack[-2] = (bool) 1
0xce7: Return(); Pop(0)

0xce8: Stack[-2] = (bool) 0
0xce9: Return(); Pop(0)

0xcea: PushEmpty()
0xceb: PushEmpty(int, string)
0xcec: Stack[-1] = "d1q01"
0xced: Call 0xc0d

0xcee: Pop(1)
0xcef: Push((int) 1000)
0xcf0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcf1: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcf2: Stack[-2] = (bool) 1
0xcf3: Return(); Pop(0)

0xcf4: Stack[-2] = (bool) 0
0xcf5: Return(); Pop(0)

0xcf6: PushEmpty()
0xcf7: PushEmpty(int, string)
0xcf8: Stack[-1] = "d1q01"
0xcf9: Call 0xc0d

0xcfa: Pop(1)
0xcfb: Push((int) 0)
0xcfc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcfd: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcfe: Stack[-2] = (bool) 1
0xcff: Return(); Pop(0)

0xd00: Stack[-2] = (bool) 0
0xd01: Return(); Pop(0)

0xd02: PushEmpty()
0xd03: PushEmpty(int, string)
0xd04: Stack[-1] = "d1q01FirstGeorgVisit"
0xd05: Call 0xc0d

0xd06: Pop(1)
0xd07: Push((int) 1)
0xd08: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd09: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd0a: Stack[-2] = (bool) 1
0xd0b: Return(); Pop(0)

0xd0c: Stack[-2] = (bool) 0
0xd0d: Return(); Pop(0)

0xd0e: PushEmpty()
0xd0f: Stack[-2] = (bool) 1
0xd10: Return(); Pop(0)

0xd11: Stack[-2] = (bool) 0
0xd12: Return(); Pop(0)

0xd13: PushEmpty()
0xd14: Stack[-2] = (bool) 1
0xd15: Return(); Pop(0)

0xd16: Stack[-2] = (bool) 0
0xd17: Return(); Pop(0)

0xd18: PushEmpty()
0xd19: PushEmpty(bool, object)
0xd1a: Stack[-1] = Stack[-3]
0xd1b: Call 0xdd4

0xd1c: Pop(1)
0xd1d: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd1e: Stack[-2] = (bool) 1
0xd1f: Return(); Pop(0)

0xd20: Stack[-2] = (bool) 0
0xd21: Return(); Pop(0)

0xd22: PushEmpty()
0xd23: PushEmpty(int, string)
0xd24: Stack[-1] = "d4q03"
0xd25: Call 0xc0d

0xd26: Pop(1)
0xd27: Push((int) 2)
0xd28: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd29: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd2a: Stack[-2] = (bool) 1
0xd2b: Return(); Pop(0)

0xd2c: Stack[-2] = (bool) 0
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty()
0xd2f: PushEmpty(bool, object)
0xd30: Stack[-1] = Stack[-3]
0xd31: Call 0xddf

0xd32: Pop(1)
0xd33: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd34: Stack[-2] = (bool) 1
0xd35: Return(); Pop(0)

0xd36: Stack[-2] = (bool) 0
0xd37: Return(); Pop(0)

0xd38: PushEmpty()
0xd39: PushEmpty(int, string)
0xd3a: Stack[-1] = "KnowMark"
0xd3b: Call 0xc0d

0xd3c: Pop(1)
0xd3d: Push((int) 1)
0xd3e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd3f: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd40: Stack[-2] = (bool) 1
0xd41: Return(); Pop(0)

0xd42: Stack[-2] = (bool) 0
0xd43: Return(); Pop(0)

0xd44: PushEmpty()
0xd45: PushEmpty(int, string)
0xd46: Stack[-1] = "KnowGrif"
0xd47: Call 0xc0d

0xd48: Pop(1)
0xd49: Push((int) 1)
0xd4a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd4b: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd4c: Stack[-2] = (bool) 1
0xd4d: Return(); Pop(0)

0xd4e: Stack[-2] = (bool) 0
0xd4f: Return(); Pop(0)

0xd50: PushEmpty()
0xd51: PushEmpty(int, string)
0xd52: Stack[-1] = "ood1Notkin3"
0xd53: Call 0xc0d

0xd54: Pop(1)
0xd55: Push((int) 0)
0xd56: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd57: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd58: Stack[-2] = (bool) 1
0xd59: Return(); Pop(0)

0xd5a: Stack[-2] = (bool) 0
0xd5b: Return(); Pop(0)

0xd5c: PushEmpty()
0xd5d: PushEmpty(int, string)
0xd5e: Stack[-1] = "ood1Notkin4"
0xd5f: Call 0xc0d

0xd60: Pop(1)
0xd61: Push((int) 0)
0xd62: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd63: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd64: Stack[-2] = (bool) 1
0xd65: Return(); Pop(0)

0xd66: Stack[-2] = (bool) 0
0xd67: Return(); Pop(0)

0xd68: PushEmpty()
0xd69: PushEmpty(int, string)
0xd6a: Stack[-1] = "ood1Notkin5"
0xd6b: Call 0xc0d

0xd6c: Pop(1)
0xd6d: Push((int) 0)
0xd6e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd6f: IF (Stack[-1] == 0) GOTO 0xd72; Pop(1)

0xd70: Stack[-2] = (bool) 1
0xd71: Return(); Pop(0)

0xd72: Stack[-2] = (bool) 0
0xd73: Return(); Pop(0)

0xd74: PushEmpty()
0xd75: PushEmpty(int, string)
0xd76: Stack[-1] = "ood1Notkin6"
0xd77: Call 0xc0d

0xd78: Pop(1)
0xd79: Push((int) 0)
0xd7a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd7b: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd7c: Stack[-2] = (bool) 1
0xd7d: Return(); Pop(0)

0xd7e: Stack[-2] = (bool) 0
0xd7f: Return(); Pop(0)

0xd80: PushEmpty()
0xd81: PushEmpty(int, string)
0xd82: Stack[-1] = "ood1Notkin7"
0xd83: Call 0xc0d

0xd84: Pop(1)
0xd85: Push((int) 0)
0xd86: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd87: IF (Stack[-1] == 0) GOTO 0xd8a; Pop(1)

0xd88: Stack[-2] = (bool) 1
0xd89: Return(); Pop(0)

0xd8a: Stack[-2] = (bool) 0
0xd8b: Return(); Pop(0)

0xd8c: PushEmpty()
0xd8d: PushEmpty(int, string)
0xd8e: Stack[-1] = "KnowMishka"
0xd8f: Call 0xc0d

0xd90: Pop(1)
0xd91: Push((int) 1)
0xd92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd93: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd94: Stack[-2] = (bool) 1
0xd95: Return(); Pop(0)

0xd96: Stack[-2] = (bool) 0
0xd97: Return(); Pop(0)

0xd98: PushEmpty()
0xd99: PushEmpty(int, string)
0xd9a: Stack[-1] = "ood3Notkin1"
0xd9b: Call 0xc0d

0xd9c: Pop(1)
0xd9d: Push((int) 0)
0xd9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd9f: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xda0: Stack[-2] = (bool) 1
0xda1: Return(); Pop(0)

0xda2: Stack[-2] = (bool) 0
0xda3: Return(); Pop(0)

0xda4: PushEmpty()
0xda5: PushEmpty(int, string)
0xda6: Stack[-1] = "d4q03"
0xda7: Call 0xc0d

0xda8: Pop(1)
0xda9: Push((int) 3)
0xdaa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdab: IF (Stack[-1] == 0) GOTO 0xdae; Pop(1)

0xdac: Stack[-2] = (bool) 1
0xdad: Return(); Pop(0)

0xdae: Stack[-2] = (bool) 0
0xdaf: Return(); Pop(0)

0xdb0: PushEmpty()
0xdb1: PushEmpty(int, string)
0xdb2: Stack[-1] = "ood4Notkin1"
0xdb3: Call 0xc0d

0xdb4: Pop(1)
0xdb5: Push((int) 0)
0xdb6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdb7: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb8: Stack[-2] = (bool) 1
0xdb9: Return(); Pop(0)

0xdba: Stack[-2] = (bool) 0
0xdbb: Return(); Pop(0)

0xdbc: PushEmpty()
0xdbd: PushEmpty(int, string)
0xdbe: Stack[-1] = "KnowSpi4ka"
0xdbf: Call 0xc0d

0xdc0: Pop(1)
0xdc1: Push((int) 1)
0xdc2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdc3: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdc4: Stack[-2] = (bool) 1
0xdc5: Return(); Pop(0)

0xdc6: Stack[-2] = (bool) 0
0xdc7: Return(); Pop(0)

0xdc8: PushEmpty()
0xdc9: PushEmpty(int, string)
0xdca: Stack[-1] = "KnowKapella"
0xdcb: Call 0xc0d

0xdcc: Pop(1)
0xdcd: Push((int) 1)
0xdce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdd0: Stack[-2] = (bool) 1
0xdd1: Return(); Pop(0)

0xdd2: Stack[-2] = (bool) 0
0xdd3: Return(); Pop(0)

0xdd4: PushEmpty()
0xdd5: PushEmpty(int)
0xdd6: Call 0xc30

0xdd7: Pop(0)
0xdd8: Push((int) 18)
0xdd9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xdda: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xddb: Stack[-2] = (bool) 1
0xddc: Return(); Pop(0)

0xddd: Stack[-2] = (bool) 0
0xdde: Return(); Pop(0)

0xddf: PushEmpty()
0xde0: PushEmpty(bool)
0xde1: Stack[-1] = (bool) 0
0xde2: PushEmpty(int)
0xde3: Call 0xc30

0xde4: Pop(0)
0xde5: Push((int) 12)
0xde6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xde8: PushEmpty(int)
0xde9: Call 0xc30

0xdea: Pop(0)
0xdeb: Push((int) 18)
0xdec: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xded: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xdee: Stack[-1] = (bool) 1
0xdef: IF (Stack[-1] == 0) GOTO 0xdf2; Pop(1)

0xdf0: Stack[-2] = (bool) 1
0xdf1: Return(); Pop(0)

0xdf2: Stack[-2] = (bool) 0
0xdf3: Return(); Pop(0)

0xdf4: PushEmpty(object, object, object, object)
0xdf5: @ GetMainOutdoorScene(Stack[-2])
0xdf6: Pop(0)
0xdf7: Pop(0); Push((bool) Stack[-2] == 0)
0xdf8: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdf9: Push("Can't find main outdoor scene")
0xdfa: @ Trace(Stack[-1])
0xdfb: Pop(1)
0xdfc: Stack[-1] = 0
0xdfd: Stack[-5] = Stack[-1]
0xdfe: Return(); Pop(4)

0xdff: @@ GetMap(Stack[-1])
0xe00: Pop(0)
0xe01: Stack[-5] = Stack[-1]
0xe02: Return(); Pop(4)

0xe03: Stack[-1] = 0
0xe04: Stack[-2] = 0
0xe05: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xe06: @ GetMainOutdoorScene(Stack[-2])
0xe07: Pop(0)
0xe08: Pop(0); Push((bool) Stack[-2] == 0)
0xe09: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xe0a: Push("Can't find main outdoor scene")
0xe0b: @ Trace(Stack[-1])
0xe0c: Pop(1)
0xe0d: Return(); Pop(8)

0xe0e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xe0f: Pop(0)
0xe10: Pop(0); Push((bool) Stack[-1] == 0)
0xe11: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe12: Push("Warning: outdoor scene locator ")
0xe13: Pop(1); Push(Stack[-1] + Stack[-11]);
0xe14: Push(" doesnt exist")
0xe15: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe16: @ Trace(Stack[-1])
0xe17: Pop(1)
0xe18: @@ GetMap(Stack[-11])
0xe19: Pop(0)
0xe1a: Pop(0); Push((bool) Stack[-11] == 0)
0xe1b: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe1c: Push("Can't find map")
0xe1d: @ Trace(Stack[-1])
0xe1e: Pop(1)
0xe1f: Return(); Pop(8)

0xe20: Push(CvectorIndex(Stack[-4], 0))
0xe21: Push(CvectorIndex(Stack[-5], 2))
0xe22: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xe23: Pop(2)
0xe24: Return(); Pop(8)

0xe25: Stack[-2] = 0
0xe26: PushEmpty(int, int)
0xe27: Push("player")
0xe28: @ GetVariable(Stack[-1], Stack[-2])
0xe29: Pop(1)
0xe2a: Push((int) 0)
0xe2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2c: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe2d: Stack[-3] = (int) 200001
0xe2e: Return(); Pop(2)

0xe2f: GOTO 0xe35

0xe30: Push((int) 1)
0xe31: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe35; Pop(1)

0xe33: Stack[-3] = (int) 200002
0xe34: Return(); Pop(2)

0xe35: Stack[-3] = (int) 200003
0xe36: Return(); Pop(2)

0xe37: Stack[-1] = (int) 2873
0xe38: Return(); Pop(0)

0xe39: Stack[-1] = "ui/NPC_Notkin.png"
0xe3a: Return(); Pop(0)

0xe3b: Stack[-1] = (bool) 1
0xe3c: Return(); Pop(0)

0xe3d: Push(GlobalVars[1])
0xe3e: Stack[-1] = (bool) 0
0xe3f: GlobalVars[1] = Stack[-1]; Pop(1)
0xe40: Return(); Pop(0)

0xe41: PushEmpty()
0xe42: Push(GlobalVars[1])
0xe43: Pop(1); Push((bool) Stack[-1] == 0)
0xe44: IF (Stack[-1] == 0) GOTO 0xe4e; Pop(1)

0xe45: PushEmpty(int, object)
0xe46: Stack[-1] = Stack[-3]
0xe47: Push(-2, 1); TaskCall(2)
0xe48: Call 0x31

0xe49: Pop(-2, 1); TaskReturn
0xe4a: Pop(2)
0xe4b: Push(GlobalVars[1])
0xe4c: Stack[-1] = (bool) 1
0xe4d: GlobalVars[1] = Stack[-1]; Pop(1)
0xe4e: PushEmpty(bool, int)
0xe4f: Stack[-1] = (int) 1
0xe50: Call 0xc38

0xe51: Pop(1)
0xe52: IF (Stack[-1] == 0) GOTO 0xe68; Pop(1)

0xe53: PushEmpty(int, string)
0xe54: Stack[-1] = "d1q01"
0xe55: Call 0xc0d

0xe56: Pop(1)
0xe57: Push((int) 1)
0xe58: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe59: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe5a: PushEmpty(int, object)
0xe5b: Stack[-1] = Stack[-3]
0xe5c: Push(-2, 1); TaskCall(6)
0xe5d: Call 0x431

0xe5e: Pop(-2, 1); TaskReturn
0xe5f: Pop(2)
0xe60: Return(); Pop(0)

0xe61: PushEmpty(int, object)
0xe62: Stack[-1] = Stack[-3]
0xe63: Push(-2, 1); TaskCall(4)
0xe64: Call 0x157

0xe65: Pop(-2, 1); TaskReturn
0xe66: Pop(2)
0xe67: Return(); Pop(0)

0xe68: PushEmpty(bool, int)
0xe69: Stack[-1] = (int) 2
0xe6a: Call 0xc38

0xe6b: Pop(1)
0xe6c: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe6d: PushEmpty(int, object)
0xe6e: Stack[-1] = Stack[-3]
0xe6f: Push(-2, 1); TaskCall(8)
0xe70: Call 0x5b9

0xe71: Pop(-2, 1); TaskReturn
0xe72: Pop(2)
0xe73: Return(); Pop(0)

0xe74: PushEmpty(bool, int)
0xe75: Stack[-1] = (int) 3
0xe76: Call 0xc38

0xe77: Pop(1)
0xe78: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe79: PushEmpty(int, object)
0xe7a: Stack[-1] = Stack[-3]
0xe7b: Push(-2, 1); TaskCall(10)
0xe7c: Call 0x900

0xe7d: Pop(-2, 1); TaskReturn
0xe7e: Pop(2)
0xe7f: Return(); Pop(0)

0xe80: PushEmpty(bool, int)
0xe81: Stack[-1] = (int) 4
0xe82: Call 0xc38

0xe83: Pop(1)
0xe84: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe85: PushEmpty(int, object)
0xe86: Stack[-1] = Stack[-3]
0xe87: Push(-2, 1); TaskCall(12)
0xe88: Call 0xa39

0xe89: Pop(-2, 1); TaskReturn
0xe8a: Pop(2)
0xe8b: Return(); Pop(0)

0xe8c: PushEmpty(bool)
0xe8d: Call 0xc3e

0xe8e: Pop(1)
0xe8f: Return(); Pop(0)

