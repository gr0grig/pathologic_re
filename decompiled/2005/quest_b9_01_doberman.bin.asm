GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	oob9MDoberman1
	b9q01
	b9q01MDobermanGotoFactory
	pt_gmap_factory
	AddMark
	quest_b9_01
	remove_mdoberman
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x161
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa8 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x159 Vars = (object)
		EVENT_26 Op = 0x18a Vars = (string)
		EVENT_5 Op = 0x192 Vars = ()
		EVENT_6 Op = 0x197 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1ff

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x380

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x37e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x382

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x384

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x36d

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x243

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x92

0x53: Pop(1)
0x54: Push((int) 521558)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x2ed

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x2f9

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 521559)
0x68: Push((int) 22721)
0x69: Push((int) 22720)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Push((int) 521562)
0x6d: Push((int) -1)
0x6e: Push((int) 22723)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: GOTO 0x74

0x72: Return(); Pop(0)

0x73: GOTO 0x4e

0x74: PushEmpty(bool)
0x75: Call2 0x386

0x76: Pop(0)
0x77: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x78: @ lshWaitForAnimEnd()
0x79: Pop(0)
0x7a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: GOTO 0x82

0x7d: PushEmpty(string)
0x7e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f: Call2 0x254

0x80: Pop(1)
0x81: GOTO 0x78

0x82: GOTO 0x91

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: @ WaitForAnimEnd()
0x88: Pop(0)
0x89: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x91

0x8c: Push("all")
0x8d: Push("idle")
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: GOTO 0x87

0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: PushEmpty(bool)
0x94: Call2 0x386

0x95: Pop(0)
0x96: Pop(1); Push((bool) Stack[-1] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Return(); Pop(0)

0x99: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: PushEmpty(string, bool)
0x9d: Stack[-2] = Stack[-3]
0x9e: Push("")
0x9f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: Stack[-1] = (bool) 0
0xa2: GOTO 0xa4

0xa3: Stack[-1] = (bool) 1
0xa4: Call2 0x264

0xa5: Pop(2)
0xa6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Push((int) 1)
0xaa: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0xab: PushEmpty()
0xac: Call2 0x273

0xad: Pop(0)
0xae: Push((int) 22720)
0xaf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: PushEmpty(object, object)
0xb2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4: Call2 0x2b8

0xb5: Pop(2)
0xb6: Push((int) 22722)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x2be

0xbd: Pop(2)
0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x2dd

0xc2: Pop(2)
0xc3: Push((int) 22719)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Neutral"
0xc8: Call2 0x92

0xc9: Pop(1)
0xca: Push((int) 521558)
0xcb: @@ SetMessage(Stack[-1])
0xcc: Pop(1)
0xcd: @@ ClearReplies()
0xce: Pop(0)
0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 0
0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x2ed

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x2f9

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Stack[-1] = (bool) 1
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: Push((int) 521559)
0xde: Push((int) 22721)
0xdf: Push((int) 22720)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 521562)
0xe3: Push((int) -1)
0xe4: Push((int) 22723)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: Push((int) 22721)
0xe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral"
0xed: Call2 0x92

0xee: Pop(1)
0xef: Push((int) 521560)
0xf0: @@ SetMessage(Stack[-1])
0xf1: Pop(1)
0xf2: @@ ClearReplies()
0xf3: Pop(0)
0xf4: Push((int) 522279)
0xf5: Push((int) 23434)
0xf6: Push((int) 23433)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Push((int) 522272)
0xfa: Push((int) 23426)
0xfb: Push((int) 23425)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: Push((int) 23426)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(string)
0x103: Stack[-1] = "Neutral"
0x104: Call2 0x92

0x105: Pop(1)
0x106: Push((int) 522273)
0x107: @@ SetMessage(Stack[-1])
0x108: Pop(1)
0x109: @@ ClearReplies()
0x10a: Pop(0)
0x10b: Push((int) 522274)
0x10c: Push((int) 23431)
0x10d: Push((int) 23427)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Push((int) 522275)
0x111: Push((int) 23429)
0x112: Push((int) 23428)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 23429)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0x92

0x11c: Pop(1)
0x11d: Push((int) 522276)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 522277)
0x123: Push((int) 23431)
0x124: Push((int) 23430)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 23431)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0x92

0x12e: Pop(1)
0x12f: Push((int) 522278)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 522281)
0x135: Push((int) 23434)
0x136: Push((int) 23435)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 23434)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call2 0x92

0x140: Pop(1)
0x141: Push((int) 522280)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 521561)
0x147: Push((int) -1)
0x148: Push((int) 22722)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14d: PushEmpty(bool)
0x14e: Call2 0x386

0x14f: Pop(0)
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: @ lshStopAnimation()
0x152: Pop(0)
0x153: GOTO 0x156

0x154: @ StopAnimation()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: GOTO 0xa9

0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: PushEmpty(int, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Push(-2, 1); TaskCall(0)
0x15d: Call2 0x0

0x15e: Pop(-2, 1); TaskReturn
0x15f: Pop(2)
0x160: Return(); Pop(0)

0x161: PushEmpty(float, float)
0x162: PushEmpty(bool)
0x163: Call2 0x1fa

0x164: Pop(0)
0x165: Pop(1); Push((bool) Stack[-1] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: @ Hold()
0x168: Pop(0)
0x169: GOTO 0x162

0x16a: Push((int) 3)
0x16b: @ rand(Stack[-2], Stack[-1])
0x16c: Pop(1)
0x16d: Push((int) 3)
0x16e: Pop(1); Push(Stack[-2] + Stack[-1]);
0x16f: @ Sleep(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty()
0x172: Call2 0x1a9

0x173: Pop(0)
0x174: GOTO 0x162

0x175: Return(); Pop(2)

0x176: PushEmpty(bool, bool)
0x177: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x178: @ IsLoaded(Stack[-1])
0x179: Pop(0)
0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: Pop(0); Push((bool) Stack[-2] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(bool)
0x17f: Call2 0x1a7

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Stack[-1] = (bool) 1
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Call2 0x27a

0x186: Pop(0)
0x187: @ RemoveActor(Stack[-1])
0x188: Pop(1)
0x189: Return(); Pop(2)

0x18a: PushEmpty()
0x18b: Push("cleanup")
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0x176

0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: @ StopGroup0()
0x193: Pop(0)
0x194: @ sync()
0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x1a7

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Call2 0x27a

0x1a3: Pop(0)
0x1a4: @ RemoveActor(Stack[-1])
0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: Stack[-1] = (bool) 1
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x1fa

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(14)

0x1b2: PushEmpty(int)
0x1b3: Call2 0x2a7

0x1b4: Stack[-8] = Stack[-1]
0x1b5: Pop(1)
0x1b6: Stack[-6] = (int) 0
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 0
0x1b9: Push((int) 5)
0x1ba: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x1fa

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1c2: Push((int) 3)
0x1c3: @ irand(Stack[-6], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push((int) 0)
0x1c6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c8: Push(Stack[-7])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ca: @ irand(Stack[-4], Stack[-7])
0x1cb: Pop(0)
0x1cc: Push("all")
0x1cd: PushEmpty(string, int)
0x1ce: Stack[-1] = Stack[-7]
0x1cf: Call2 0x2a0

0x1d0: Pop(1)
0x1d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: @ WaitForAnimEnd(Stack[-3])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-3] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1f5

0x1d8: GOTO 0x1ea

0x1d9: Push((int) 1)
0x1da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1dc: Push((int) 4)
0x1dd: @ rand(Stack[-3], Stack[-1])
0x1de: Pop(1)
0x1df: Push((int) 1)
0x1e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e1: @ Sleep(Stack[-1], Stack[-2])
0x1e2: Pop(1)
0x1e3: Pop(0); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x1f5

0x1e6: GOTO 0x1ea

0x1e7: Push(Stack[-6])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: GOTO 0x1f5

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x1f8

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x1f5

0x1f0: @ ResetAAS()
0x1f1: Pop(0)
0x1f2: Push((int) 1)
0x1f3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f4: GOTO 0x1b7

0x1f5: @ ResetAAS()
0x1f6: Pop(0)
0x1f7: Return(); Pop(14)

0x1f8: Stack[-1] = (bool) 1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(bool, bool)
0x1fb: @ IsLoaded(Stack[-1])
0x1fc: Pop(0)
0x1fd: Stack[-3] = Stack[-1]
0x1fe: Return(); Pop(2)

0x1ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x200: @@ GetPosition(Stack[-8])
0x201: Pop(0)
0x202: @@ GetEyesHeight(Stack[-9])
0x203: Pop(0)
0x204: Push(CvectorIndex(Stack[-8], 1))
0x205: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x206: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x207: @ GetPosition(Stack[-7])
0x208: Pop(0)
0x209: @ GetEyesHeight(Stack[-9])
0x20a: Pop(0)
0x20b: Push(CvectorIndex(Stack[-7], 1))
0x20c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x20e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x20f: Push(CvectorIndex(Stack[-6], 1))
0x210: Stack[-1] = (int) 0
0x211: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x212: Pop(0); Push(Stack[-6] | Stack[-6]);
0x213: Pop(1); Push(Sqrt(Stack[-1]))
0x214: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x215: Stack[-5] = -Stack[-6]; Pop(0);
0x216: Pop(0); Push(Stack[-6] * Stack[-19]);
0x217: PushEmpty(cvector, cvector)
0x218: Push(CVector(0.0, 1.0, 0.0))
0x219: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x21a: Call2 0x280

0x21b: Pop(1)
0x21c: Push((int) 25)
0x21d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21f: Push(CVector(0.0, 10.0, 0.0))
0x220: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x221: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x222: @ IsOverrideActive(Stack[-2])
0x223: Pop(0)
0x224: Push(Stack[-2])
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-21] = (bool) 0
0x227: Return(); Pop(18)

0x228: @ StopWorld()
0x229: Pop(0)
0x22a: @ CameraTransit(Stack[-3], Stack[-5])
0x22b: Pop(0)
0x22c: Push(CvectorIndex(Stack[-4], 0))
0x22d: Push(CvectorIndex(Stack[-5], 2))
0x22e: @ Rotate(Stack[-2], Stack[-1])
0x22f: Pop(2)
0x230: PushEmpty(bool)
0x231: Call2 0x386

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x23d

0x235: Push("head")
0x236: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x237: Pop(1)
0x238: Push(Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23a: Push("head")
0x23b: @ LookAsyncCamera(Stack[-1])
0x23c: Pop(1)
0x23d: @ CameraWaitForPlayFinish()
0x23e: Pop(0)
0x23f: @ ResumeWorld()
0x240: Pop(0)
0x241: Stack[-21] = (bool) 1
0x242: Return(); Pop(18)

0x243: PushEmpty(bool, bool)
0x244: @ CameraSwitchToNormal()
0x245: Pop(0)
0x246: PushEmpty(bool)
0x247: Call2 0x386

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x253

0x24b: Push("head")
0x24c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24d: Pop(1)
0x24e: Push(Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x250: Push("head")
0x251: @ UnlookAsync(Stack[-1])
0x252: Pop(1)
0x253: Return(); Pop(2)

0x254: PushEmpty(bool, float, float, bool, float, float)
0x255: @ lshHasAnimation(Stack[-3], Stack[-7])
0x256: Pop(0)
0x257: Push(Stack[-3])
0x258: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x259: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x25a: Pop(0)
0x25b: Push((bool) 0)
0x25c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(1)
0x25e: GOTO 0x263

0x25f: Push("Can't find lsh animation : ")
0x260: Pop(1); Push(Stack[-1] + Stack[-8]);
0x261: @ Trace(Stack[-1])
0x262: Pop(1)
0x263: Return(); Pop(6)

0x264: PushEmpty(bool, float, float, bool, float, float)
0x265: @ lshHasAnimation(Stack[-3], Stack[-8])
0x266: Pop(0)
0x267: Push(Stack[-3])
0x268: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x269: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x26a: Pop(0)
0x26b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x26c: Pop(0)
0x26d: GOTO 0x272

0x26e: Push("Can't find lsh animation : ")
0x26f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x270: @ Trace(Stack[-1])
0x271: Pop(1)
0x272: Return(); Pop(6)

0x273: PushEmpty(bool)
0x274: Call2 0x386

0x275: Pop(0)
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: @ lshStopSpeech()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: PushEmpty(object, object)
0x27b: @ self(Stack[-1])
0x27c: Pop(0)
0x27d: Stack[-3] = Stack[-1]
0x27e: Return(); Pop(2)

0x27f: Stack[-1] = 0
0x280: PushEmpty(float, float)
0x281: Pop(0); Push(Stack[-3] | Stack[-3]);
0x282: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x283: Push((float)0.0)
0x284: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x286: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x287: Return(); Pop(2)

0x288: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x289: Return(); Pop(2)

0x28a: PushEmpty(int, int)
0x28b: @ GetVariable(Stack[-3], Stack[-1])
0x28c: Pop(0)
0x28d: Stack[-4] = Stack[-1]
0x28e: Return(); Pop(2)

0x28f: PushEmpty(object, object)
0x290: @ FindActor(Stack[-1], Stack[-4])
0x291: Pop(0)
0x292: Pop(0); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-5] = (bool) 0
0x295: Return(); Pop(2)

0x296: @ Trigger(Stack[-1], Stack[-3])
0x297: Pop(0)
0x298: Stack[-5] = (bool) 1
0x299: Return(); Pop(2)

0x29a: Stack[-1] = 0
0x29b: PushEmpty(float, float)
0x29c: @ GetGameTime(Stack[-1])
0x29d: Pop(0)
0x29e: Stack[-3] = Stack[-1]
0x29f: Return(); Pop(2)

0x2a0: PushEmpty(string, string)
0x2a1: Stack[-1] = "idle"
0x2a2: Push(Stack[-3])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2a5: Stack[-4] = Stack[-1]
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(int, bool, int, bool)
0x2a8: Stack[-2] = (int) 0
0x2a9: Push("all")
0x2aa: PushEmpty(string, int)
0x2ab: Stack[-1] = Stack[-5]
0x2ac: Call2 0x2a0

0x2ad: Pop(1)
0x2ae: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: Pop(0); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x2b6

0x2b3: Push((int) 1)
0x2b4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b5: GOTO 0x2a9

0x2b6: Stack[-5] = Stack[-2]
0x2b7: Return(); Pop(4)

0x2b8: PushEmpty()
0x2b9: Push("oob9MDoberman1")
0x2ba: Push((int) 1)
0x2bb: @ SetVariable(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: Return(); Pop(0)

0x2be: PushEmpty(object, object)
0x2bf: PushEmpty(int, string)
0x2c0: Stack[-1] = "b9q01"
0x2c1: Call2 0x28a

0x2c2: Pop(1)
0x2c3: Push((int) 2)
0x2c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2c6: PushEmpty(object)
0x2c7: Call2 0x33b

0x2c8: Stack[-2] = Stack[-1]
0x2c9: Pop(1)
0x2ca: Push("b9q01MDobermanGotoFactory")
0x2cb: Push("pt_gmap_factory")
0x2cc: Push((int) 1)
0x2cd: Push((int) 530198)
0x2ce: PushEmpty(float)
0x2cf: Call2 0x29b

0x2d0: Pop(0)
0x2d1: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(5)
0x2d3: PushEmpty()
0x2d4: Call2 0x305

0x2d5: Pop(0)
0x2d6: PushEmpty(bool, string, string)
0x2d7: Stack[-2] = "quest_b9_01"
0x2d8: Stack[-1] = "remove_mdoberman"
0x2d9: Call2 0x28f

0x2da: Pop(3)
0x2db: Stack[-1] = 0
0x2dc: Return(); Pop(2)

0x2dd: PushEmpty()
0x2de: PushEmpty(object, string, float)
0x2df: PushEmpty(object)
0x2e0: Call2 0x33b

0x2e1: Stack[-4] = Stack[-1]
0x2e2: Pop(1)
0x2e3: Stack[-2] = "pt_gmap_factory"
0x2e4: Stack[-1] = (int) 2
0x2e5: Call2 0x34c

0x2e6: Pop(3)
0x2e7: PushEmpty(object)
0x2e8: Call2 0x33b

0x2e9: Pop(0)
0x2ea: @@ ShowMap(Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty()
0x2ee: PushEmpty(int, string)
0x2ef: Stack[-1] = "b9q01"
0x2f0: Call2 0x28a

0x2f1: Pop(1)
0x2f2: Push((int) 2)
0x2f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: Stack[-2] = (bool) 1
0x2f6: Return(); Pop(0)

0x2f7: Stack[-2] = (bool) 0
0x2f8: Return(); Pop(0)

0x2f9: PushEmpty()
0x2fa: PushEmpty(int, string)
0x2fb: Stack[-1] = "oob9MDoberman1"
0x2fc: Call2 0x28a

0x2fd: Pop(1)
0x2fe: Push((int) 0)
0x2ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x301: Stack[-2] = (bool) 1
0x302: Return(); Pop(0)

0x303: Stack[-2] = (bool) 0
0x304: Return(); Pop(0)

0x305: PushEmpty(object, object)
0x306: Push((int) 300)
0x307: Push((int) 1)
0x308: Push((int) 521615)
0x309: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: PushEmpty(bool, object, int)
0x30c: Stack[-2] = Stack[-4]
0x30d: Stack[-1] = (int) 297
0x30e: Call2 0x31f

0x30f: Pop(3)
0x310: Return(); Pop(2)

0x311: Stack[-1] = 0
0x312: PushEmpty(object, object)
0x313: @ GetDiaryRoot(Stack[-1])
0x314: Pop(0)
0x315: Pop(0); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: Push("Can't retrieve diary root")
0x318: @ Trace(Stack[-1])
0x319: Pop(1)
0x31a: Stack[-3] = (bool) 0
0x31b: Return(); Pop(2)

0x31c: Stack[-3] = Stack[-1]
0x31d: Return(); Pop(2)

0x31e: Stack[-1] = 0
0x31f: PushEmpty(object, object, int, object, object, int)
0x320: PushEmpty(object)
0x321: Call2 0x312

0x322: Stack[-4] = Stack[-1]
0x323: Pop(1)
0x324: @@ Find(Stack[-7], Stack[-2])
0x325: Pop(0)
0x326: Pop(0); Push((bool) Stack[-2] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x328: Push("Can't find diary parent with id: ")
0x329: Pop(1); Push(Stack[-1] + Stack[-8]);
0x32a: @ Trace(Stack[-1])
0x32b: Pop(1)
0x32c: Stack[-9] = (bool) 0
0x32d: Return(); Pop(6)

0x32e: @@ AddChild(Stack[-8])
0x32f: Pop(0)
0x330: Push((int) 7)
0x331: @ SendWorldWndMessage(Stack[-1])
0x332: Pop(1)
0x333: @@ GetCategory(Stack[-1])
0x334: Pop(0)
0x335: @ SetDiarySection(Stack[-1])
0x336: Pop(0)
0x337: Stack[-9] = (bool) 0
0x338: Return(); Pop(6)

0x339: Stack[-2] = 0
0x33a: Stack[-3] = 0
0x33b: PushEmpty(object, object, object, object)
0x33c: @ GetMainOutdoorScene(Stack[-2])
0x33d: Pop(0)
0x33e: Pop(0); Push((bool) Stack[-2] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x340: Push("Can't find main outdoor scene")
0x341: @ Trace(Stack[-1])
0x342: Pop(1)
0x343: Stack[-1] = 0
0x344: Stack[-5] = Stack[-1]
0x345: Return(); Pop(4)

0x346: @@ GetMap(Stack[-1])
0x347: Pop(0)
0x348: Stack[-5] = Stack[-1]
0x349: Return(); Pop(4)

0x34a: Stack[-1] = 0
0x34b: Stack[-2] = 0
0x34c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x34d: @ GetMainOutdoorScene(Stack[-2])
0x34e: Pop(0)
0x34f: Pop(0); Push((bool) Stack[-2] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x351: Push("Can't find main outdoor scene")
0x352: @ Trace(Stack[-1])
0x353: Pop(1)
0x354: Return(); Pop(8)

0x355: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x356: Pop(0)
0x357: Pop(0); Push((bool) Stack[-1] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x359: Push("Warning: outdoor scene locator ")
0x35a: Pop(1); Push(Stack[-1] + Stack[-11]);
0x35b: Push(" doesnt exist")
0x35c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35d: @ Trace(Stack[-1])
0x35e: Pop(1)
0x35f: @@ GetMap(Stack[-11])
0x360: Pop(0)
0x361: Pop(0); Push((bool) Stack[-11] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x363: Push("Can't find map")
0x364: @ Trace(Stack[-1])
0x365: Pop(1)
0x366: Return(); Pop(8)

0x367: Push(CvectorIndex(Stack[-4], 0))
0x368: Push(CvectorIndex(Stack[-5], 2))
0x369: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x36a: Pop(2)
0x36b: Return(); Pop(8)

0x36c: Stack[-2] = 0
0x36d: PushEmpty(int, int)
0x36e: Push("branch")
0x36f: @ GetVariable(Stack[-1], Stack[-2])
0x370: Pop(1)
0x371: Push((int) 0)
0x372: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x374: Stack[-3] = (int) 1
0x375: Return(); Pop(2)

0x376: GOTO 0x37c

0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Stack[-3] = (int) 2
0x37b: Return(); Pop(2)

0x37c: Stack[-3] = (int) 3
0x37d: Return(); Pop(2)

0x37e: Stack[-1] = (int) 518097
0x37f: Return(); Pop(0)

0x380: Stack[-1] = (int) 518096
0x381: Return(); Pop(0)

0x382: Stack[-1] = "ui/NPC_Citizen2.png"
0x383: Return(); Pop(0)

0x384: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x385: Return(); Pop(0)

0x386: Stack[-1] = (bool) 0
0x387: Return(); Pop(0)

