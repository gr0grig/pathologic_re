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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	k5q04_bring_water
	k5q04
	bottle_water
	RemoveItemByType
	playsound
	giveitem
	sobor@door1
	GetItemCountOfType
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1e7
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1f1 Vars = (object)
		EVENT_7 Op = 0x226 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2ae

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x422

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x420

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x424

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x426

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x40f

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
0x41: Call2 0x2f3

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
0x4f: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0xe2

0x53: Pop(1)
0x54: Push((int) 539441)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 1
0x5b: PushEmpty(bool)
0x5c: Stack[-1] = (bool) 0
0x5d: PushEmpty(bool, object)
0x5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Call2 0x39f

0x60: Pop(1)
0x61: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x3ab

0x65: Pop(1)
0x66: Pop(1); Push((bool) Stack[-1] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: Stack[-1] = (bool) 1
0x69: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 0
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x393

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73: Call2 0x3ab

0x74: Pop(1)
0x75: Pop(1); Push((bool) Stack[-1] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: Stack[-1] = (bool) 1
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 0
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 539442)
0x7c: Push((int) 41374)
0x7d: Push((int) 41373)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: PushEmpty(bool)
0x81: Stack[-1] = (bool) 1
0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 0
0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 0
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x39f

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x3ab

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x92: PushEmpty(bool, object)
0x93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94: Call2 0x3b7

0x95: Pop(1)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 1
0x98: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x99: PushEmpty(bool)
0x9a: Stack[-1] = (bool) 0
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 0
0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call2 0x3ab

0xa0: Pop(1)
0xa1: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x3b7

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 1
0xa8: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa9: PushEmpty(bool, object)
0xaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab: Call2 0x393

0xac: Pop(1)
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Stack[-1] = (bool) 1
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Stack[-1] = (bool) 0
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: Push((int) 539445)
0xb3: Push((int) 41377)
0xb4: Push((int) 41376)
0xb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(3)
0xb7: Push((int) 539450)
0xb8: Push((int) -1)
0xb9: Push((int) 41381)
0xba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb: Pop(3)
0xbc: Push((int) 540739)
0xbd: Push((int) -1)
0xbe: Push((int) 42777)
0xbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0: Pop(3)
0xc1: GOTO 0xc4

0xc2: Return(); Pop(0)

0xc3: GOTO 0x4e

0xc4: PushEmpty(bool)
0xc5: Call2 0x428

0xc6: Pop(0)
0xc7: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc8: @ lshWaitForAnimEnd()
0xc9: Pop(0)
0xca: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: GOTO 0xd2

0xcd: PushEmpty(string)
0xce: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcf: Call2 0x305

0xd0: Pop(1)
0xd1: GOTO 0xc8

0xd2: GOTO 0xe1

0xd3: Push("all")
0xd4: Push("idle")
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: @ WaitForAnimEnd()
0xd8: Pop(0)
0xd9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: GOTO 0xe1

0xdc: Push("all")
0xdd: Push("idle")
0xde: @ PlayAnimation(Stack[-2], Stack[-1])
0xdf: Pop(2)
0xe0: GOTO 0xd7

0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(bool)
0xe4: Call2 0x428

0xe5: Pop(0)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Return(); Pop(0)

0xe9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Return(); Pop(0)

0xec: PushEmpty(string, bool)
0xed: Stack[-2] = Stack[-3]
0xee: Push("")
0xef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf1: Stack[-1] = (bool) 0
0xf2: GOTO 0xf4

0xf3: Stack[-1] = (bool) 1
0xf4: Call2 0x315

0xf5: Pop(2)
0xf6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: Push((int) 1)
0xfa: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0xfb: PushEmpty()
0xfc: Call2 0x32f

0xfd: Pop(0)
0xfe: Push((int) 41375)
0xff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x36e

0x105: Pop(2)
0x106: Push((int) 41380)
0x107: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x377

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x380

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x386

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x38c

0x11c: Pop(2)
0x11d: Push((int) 41372)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0xe2

0x123: Pop(1)
0x124: Push((int) 539441)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: PushEmpty(bool)
0x12a: Stack[-1] = (bool) 1
0x12b: PushEmpty(bool)
0x12c: Stack[-1] = (bool) 0
0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call2 0x39f

0x130: Pop(1)
0x131: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x3ab

0x135: Pop(1)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Stack[-1] = (bool) 1
0x139: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13a: PushEmpty(bool)
0x13b: Stack[-1] = (bool) 0
0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x393

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x141: PushEmpty(bool, object)
0x142: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x143: Call2 0x3ab

0x144: Pop(1)
0x145: Pop(1); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 0
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 539442)
0x14c: Push((int) 41374)
0x14d: Push((int) 41373)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: PushEmpty(bool)
0x151: Stack[-1] = (bool) 1
0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 0
0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x39f

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x3ab

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x3b7

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 1
0x168: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x169: PushEmpty(bool)
0x16a: Stack[-1] = (bool) 0
0x16b: PushEmpty(bool)
0x16c: Stack[-1] = (bool) 0
0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x3ab

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x3b7

0x175: Pop(1)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Stack[-1] = (bool) 1
0x178: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x179: PushEmpty(bool, object)
0x17a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Call2 0x393

0x17c: Pop(1)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 1
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[-1] = (bool) 0
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: Push((int) 539445)
0x183: Push((int) 41377)
0x184: Push((int) 41376)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 539450)
0x188: Push((int) -1)
0x189: Push((int) 41381)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 540739)
0x18d: Push((int) -1)
0x18e: Push((int) 42777)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 41377)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call2 0xe2

0x198: Pop(1)
0x199: Push((int) 539446)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 540737)
0x19f: Push((int) 42776)
0x1a0: Push((int) 42775)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 42776)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call2 0xe2

0x1aa: Pop(1)
0x1ab: Push((int) 540738)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 539447)
0x1b1: Push((int) 41379)
0x1b2: Push((int) 41378)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 41379)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral"
0x1bb: Call2 0xe2

0x1bc: Pop(1)
0x1bd: Push((int) 539448)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 539449)
0x1c3: Push((int) -1)
0x1c4: Push((int) 41380)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 41374)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral"
0x1cd: Call2 0xe2

0x1ce: Pop(1)
0x1cf: Push((int) 539443)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 539444)
0x1d5: Push((int) -1)
0x1d6: Push((int) 41375)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1db: PushEmpty(bool)
0x1dc: Call2 0x428

0x1dd: Pop(0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1df: @ lshStopAnimation()
0x1e0: Pop(0)
0x1e1: GOTO 0x1e4

0x1e2: @ StopAnimation()
0x1e3: Pop(0)
0x1e4: Return(); Pop(0)

0x1e5: GOTO 0xf9

0x1e6: Return(); Pop(0)

0x1e7: Push((int) 1)
0x1e8: @ Sleep(Stack[-1])
0x1e9: Pop(1)
0x1ea: PushEmpty(float, float)
0x1eb: Stack[-2] = (int) 300
0x1ec: Stack[-1] = (int) 100
0x1ed: Call2 0x1fc

0x1ee: Pop(2)
0x1ef: GOTO 0x1e7

0x1f0: Return(); Pop(0)

0x1f1: PushEmpty()
0x1f2: PushEmpty()
0x1f3: Call2 0x23d

0x1f4: Pop(0)
0x1f5: PushEmpty(int, object)
0x1f6: Stack[-1] = Stack[-3]
0x1f7: Push(-2, 1); TaskCall(0)
0x1f8: Call2 0x0

0x1f9: Pop(-2, 1); TaskReturn
0x1fa: Pop(2)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x2a9

0x1ff: Pop(0)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Return(); Pop(0)

0x203: Push("player")
0x204: @ FindActor(Stack[-4], Stack[-1])
0x205: Pop(1)
0x206: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x207: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x208: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x209: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x20a: Push((int) 10)
0x20b: Push((float)1.0)
0x20c: @ SetTimer(Stack[-2], Stack[-1])
0x20d: Pop(2)
0x20e: PushEmpty()
0x20f: Call2 0x24b

0x210: Pop(0)
0x211: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x213: Push((int) 10)
0x214: @ KillTimer(Stack[-1])
0x215: Pop(1)
0x216: Return(); Pop(0)

0x217: PushEmpty(float, float)
0x218: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-3] = (bool) 0
0x21b: Return(); Pop(2)

0x21c: PushEmpty(float, object)
0x21d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21e: Call2 0x2a1

0x21f: Pop(1)
0x220: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x221: Push( Stack[2 + Tasks[-1].StackPointer] )
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x224: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x225: Return(); Pop(2)

0x226: PushEmpty()
0x227: Push((int) 10)
0x228: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x22a: PushEmpty(bool)
0x22b: Call2 0x217

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x22e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x230: PushEmpty(object)
0x231: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x232: Call2 0x324

0x233: Pop(1)
0x234: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x235: GOTO 0x23c

0x236: Push( Stack[2 + Tasks[-1].StackPointer] )
0x237: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x238: Push("head")
0x239: @ UnlookAsync(Stack[-1])
0x23a: Pop(1)
0x23b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x23c: Return(); Pop(0)

0x23d: PushEmpty()
0x23e: Call2 0x29c

0x23f: Pop(0)
0x240: Push((int) 10)
0x241: @ KillTimer(Stack[-1])
0x242: Pop(1)
0x243: Push( Stack[2 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x245: Push("head")
0x246: @ UnlookAsync(Stack[-1])
0x247: Pop(1)
0x248: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x249: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24a: Return(); Pop(0)

0x24b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x24c: @ WaitForAnimEnd()
0x24d: Pop(0)
0x24e: PushEmpty(bool)
0x24f: Call2 0x2a9

0x250: Pop(0)
0x251: Pop(1); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Return(); Pop(14)

0x254: PushEmpty(int)
0x255: Call2 0x35d

0x256: Stack[-8] = Stack[-1]
0x257: Pop(1)
0x258: Stack[-6] = (int) 0
0x259: PushEmpty(bool)
0x25a: Stack[-1] = (bool) 0
0x25b: Push((int) 5)
0x25c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: PushEmpty(bool)
0x25f: Call2 0x2a9

0x260: Pop(0)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Stack[-1] = (bool) 1
0x263: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x264: Push((int) 3)
0x265: @ irand(Stack[-6], Stack[-1])
0x266: Pop(1)
0x267: Push((int) 0)
0x268: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x26a: Push(Stack[-7])
0x26b: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26c: @ irand(Stack[-4], Stack[-7])
0x26d: Pop(0)
0x26e: Push("all")
0x26f: PushEmpty(string, int)
0x270: Stack[-1] = Stack[-7]
0x271: Call2 0x356

0x272: Pop(1)
0x273: @ PlayAnimation(Stack[-2], Stack[-1])
0x274: Pop(2)
0x275: @ WaitForAnimEnd(Stack[-3])
0x276: Pop(0)
0x277: Pop(0); Push((bool) Stack[-3] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x297

0x27a: GOTO 0x28c

0x27b: Push((int) 1)
0x27c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x27e: Push((int) 4)
0x27f: @ rand(Stack[-3], Stack[-1])
0x280: Pop(1)
0x281: Push((int) 1)
0x282: Pop(1); Push(Stack[-3] + Stack[-1]);
0x283: @ Sleep(Stack[-1], Stack[-2])
0x284: Pop(1)
0x285: Pop(0); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x297

0x288: GOTO 0x28c

0x289: Push(Stack[-6])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x297

0x28c: PushEmpty(bool)
0x28d: Call2 0x29a

0x28e: Pop(0)
0x28f: Pop(1); Push((bool) Stack[-1] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x297

0x292: @ ResetAAS()
0x293: Pop(0)
0x294: Push((int) 1)
0x295: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x296: GOTO 0x259

0x297: @ ResetAAS()
0x298: Pop(0)
0x299: Return(); Pop(14)

0x29a: Stack[-1] = (bool) 1
0x29b: Return(); Pop(0)

0x29c: @ StopAnimation()
0x29d: Pop(0)
0x29e: @ StopGroup0()
0x29f: Pop(0)
0x2a0: Return(); Pop(0)

0x2a1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2a2: @ GetPosition(Stack[-3])
0x2a3: Pop(0)
0x2a4: @@ GetPosition(Stack[-2])
0x2a5: Pop(0)
0x2a6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a8: Return(); Pop(6)

0x2a9: PushEmpty(bool, bool)
0x2aa: @ IsLoaded(Stack[-1])
0x2ab: Pop(0)
0x2ac: Stack[-3] = Stack[-1]
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2af: @@ GetPosition(Stack[-8])
0x2b0: Pop(0)
0x2b1: @@ GetEyesHeight(Stack[-9])
0x2b2: Pop(0)
0x2b3: Push(CvectorIndex(Stack[-8], 1))
0x2b4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b6: @ GetPosition(Stack[-7])
0x2b7: Pop(0)
0x2b8: @ GetEyesHeight(Stack[-9])
0x2b9: Pop(0)
0x2ba: Push(CvectorIndex(Stack[-7], 1))
0x2bb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2bc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2bd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2be: Push(CvectorIndex(Stack[-6], 1))
0x2bf: Stack[-1] = (int) 0
0x2c0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c2: Pop(1); Push(Sqrt(Stack[-1]))
0x2c3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c4: Stack[-5] = -Stack[-6]; Pop(0);
0x2c5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c6: PushEmpty(cvector, cvector)
0x2c7: Push(CVector(0.0, 1.0, 0.0))
0x2c8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c9: Call2 0x336

0x2ca: Pop(1)
0x2cb: Push((int) 25)
0x2cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ce: Push(CVector(0.0, 10.0, 0.0))
0x2cf: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d1: @ IsOverrideActive(Stack[-2])
0x2d2: Pop(0)
0x2d3: Push(Stack[-2])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d5: Stack[-21] = (bool) 0
0x2d6: Return(); Pop(18)

0x2d7: @ StopWorld()
0x2d8: Pop(0)
0x2d9: Push((bool) 1)
0x2da: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2db: Pop(1)
0x2dc: Push(CvectorIndex(Stack[-4], 0))
0x2dd: Push(CvectorIndex(Stack[-5], 2))
0x2de: @ Rotate(Stack[-2], Stack[-1])
0x2df: Pop(2)
0x2e0: PushEmpty(bool)
0x2e1: Call2 0x428

0x2e2: Pop(0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2ed

0x2e5: Push("head")
0x2e6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e7: Pop(1)
0x2e8: Push(Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ea: Push("head")
0x2eb: @ LookAsyncCamera(Stack[-1])
0x2ec: Pop(1)
0x2ed: @ CameraWaitForPlayFinish()
0x2ee: Pop(0)
0x2ef: @ ResumeWorld()
0x2f0: Pop(0)
0x2f1: Stack[-21] = (bool) 1
0x2f2: Return(); Pop(18)

0x2f3: PushEmpty(bool, bool)
0x2f4: Push((bool) 1)
0x2f5: @ CameraSwitchToNormal(Stack[-1])
0x2f6: Pop(1)
0x2f7: PushEmpty(bool)
0x2f8: Call2 0x428

0x2f9: Pop(0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: GOTO 0x304

0x2fc: Push("head")
0x2fd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fe: Pop(1)
0x2ff: Push(Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x301: Push("head")
0x302: @ UnlookAsync(Stack[-1])
0x303: Pop(1)
0x304: Return(); Pop(2)

0x305: PushEmpty(bool, float, float, bool, float, float)
0x306: @ lshHasAnimation(Stack[-3], Stack[-7])
0x307: Pop(0)
0x308: Push(Stack[-3])
0x309: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x30b: Pop(0)
0x30c: Push((bool) 0)
0x30d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(1)
0x30f: GOTO 0x314

0x310: Push("Can't find lsh animation : ")
0x311: Pop(1); Push(Stack[-1] + Stack[-8]);
0x312: @ Trace(Stack[-1])
0x313: Pop(1)
0x314: Return(); Pop(6)

0x315: PushEmpty(bool, float, float, bool, float, float)
0x316: @ lshHasAnimation(Stack[-3], Stack[-8])
0x317: Pop(0)
0x318: Push(Stack[-3])
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x31b: Pop(0)
0x31c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x31d: Pop(0)
0x31e: GOTO 0x323

0x31f: Push("Can't find lsh animation : ")
0x320: Pop(1); Push(Stack[-1] + Stack[-9]);
0x321: @ Trace(Stack[-1])
0x322: Pop(1)
0x323: Return(); Pop(6)

0x324: PushEmpty(float, cvector, float, cvector)
0x325: @@ GetEyesHeight(Stack[-2])
0x326: Pop(0)
0x327: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x328: Push(CvectorIndex(Stack[-1], 1))
0x329: Stack[-1] = Stack[-3]
0x32a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x32b: Push("head")
0x32c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x32d: Pop(1)
0x32e: Return(); Pop(4)

0x32f: PushEmpty(bool)
0x330: Call2 0x428

0x331: Pop(0)
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: @ lshStopSpeech()
0x334: Pop(0)
0x335: Return(); Pop(0)

0x336: PushEmpty(float, float)
0x337: Pop(0); Push(Stack[-3] | Stack[-3]);
0x338: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x339: Push((float)0.0)
0x33a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x33d: Return(); Pop(2)

0x33e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x33f: Return(); Pop(2)

0x340: PushEmpty(int, int)
0x341: @ GetVariable(Stack[-3], Stack[-1])
0x342: Pop(0)
0x343: Stack[-4] = Stack[-1]
0x344: Return(); Pop(2)

0x345: PushEmpty(object, object)
0x346: @ FindActor(Stack[-1], Stack[-4])
0x347: Pop(0)
0x348: Pop(0); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34a: Push("Door ")
0x34b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x34c: Push(" not found")
0x34d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34e: @ Trace(Stack[-1])
0x34f: Pop(1)
0x350: GOTO 0x354

0x351: Push("locked")
0x352: @@ SetProperty(Stack[-1], Stack[-4])
0x353: Pop(1)
0x354: Return(); Pop(2)

0x355: Stack[-1] = 0
0x356: PushEmpty(string, string)
0x357: Stack[-1] = "idle"
0x358: Push(Stack[-3])
0x359: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x35a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x35b: Stack[-4] = Stack[-1]
0x35c: Return(); Pop(2)

0x35d: PushEmpty(int, bool, int, bool)
0x35e: Stack[-2] = (int) 0
0x35f: Push("all")
0x360: PushEmpty(string, int)
0x361: Stack[-1] = Stack[-5]
0x362: Call2 0x356

0x363: Pop(1)
0x364: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: Pop(0); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36c

0x369: Push((int) 1)
0x36a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36b: GOTO 0x35f

0x36c: Stack[-5] = Stack[-2]
0x36d: Return(); Pop(4)

0x36e: PushEmpty()
0x36f: Push("k5q04_bring_water")
0x370: Push((int) 1)
0x371: @ SetVariable(Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: PushEmpty()
0x374: Call2 0x3cc

0x375: Pop(0)
0x376: Return(); Pop(0)

0x377: PushEmpty()
0x378: Push("k5q04")
0x379: Push((int) 4)
0x37a: @ SetVariable(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: PushEmpty()
0x37d: Call2 0x3d9

0x37e: Pop(0)
0x37f: Return(); Pop(0)

0x380: PushEmpty(int, int)
0x381: Push("bottle_water")
0x382: Push((int) 20)
0x383: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: Return(); Pop(2)

0x386: PushEmpty()
0x387: Push("playsound")
0x388: Push("giveitem")
0x389: @ TriggerWorld(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: Return(); Pop(0)

0x38c: PushEmpty()
0x38d: PushEmpty(string, bool)
0x38e: Stack[-2] = "sobor@door1"
0x38f: Stack[-1] = (bool) 0
0x390: Call2 0x345

0x391: Pop(2)
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(int, string)
0x395: Stack[-1] = "k5q04"
0x396: Call2 0x340

0x397: Pop(1)
0x398: Push((int) 2)
0x399: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-2] = (bool) 1
0x39c: Return(); Pop(0)

0x39d: Stack[-2] = (bool) 0
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: PushEmpty(int, string)
0x3a1: Stack[-1] = "k5q04"
0x3a2: Call2 0x340

0x3a3: Pop(1)
0x3a4: Push((int) 3)
0x3a5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: Stack[-2] = (bool) 1
0x3a8: Return(); Pop(0)

0x3a9: Stack[-2] = (bool) 0
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: PushEmpty(int, string)
0x3ad: Stack[-1] = "k5q04_bring_water"
0x3ae: Call2 0x340

0x3af: Pop(1)
0x3b0: Push((int) 0)
0x3b1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-2] = (bool) 1
0x3b4: Return(); Pop(0)

0x3b5: Stack[-2] = (bool) 0
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: PushEmpty(bool, object)
0x3b9: Stack[-1] = Stack[-3]
0x3ba: Call2 0x3c1

0x3bb: Pop(1)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: Stack[-2] = (bool) 1
0x3be: Return(); Pop(0)

0x3bf: Stack[-2] = (bool) 0
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty(int, int)
0x3c2: Push("bottle_water")
0x3c3: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x3c4: Pop(1)
0x3c5: Push((int) 20)
0x3c6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-4] = (bool) 1
0x3c9: Return(); Pop(2)

0x3ca: Stack[-4] = (bool) 0
0x3cb: Return(); Pop(2)

0x3cc: PushEmpty(object, object)
0x3cd: Push((int) 744)
0x3ce: Push((int) 2)
0x3cf: Push((int) 539461)
0x3d0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: PushEmpty(bool, object, int)
0x3d3: Stack[-2] = Stack[-4]
0x3d4: Stack[-1] = (int) 740
0x3d5: Call2 0x3f3

0x3d6: Pop(3)
0x3d7: Return(); Pop(2)

0x3d8: Stack[-1] = 0
0x3d9: PushEmpty(object, object)
0x3da: Push((int) 745)
0x3db: Push((int) 2)
0x3dc: Push((int) 539462)
0x3dd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: PushEmpty(bool, object, int)
0x3e0: Stack[-2] = Stack[-4]
0x3e1: Stack[-1] = (int) 740
0x3e2: Call2 0x3f3

0x3e3: Pop(3)
0x3e4: Return(); Pop(2)

0x3e5: Stack[-1] = 0
0x3e6: PushEmpty(object, object)
0x3e7: @ GetDiaryRoot(Stack[-1])
0x3e8: Pop(0)
0x3e9: Pop(0); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3eb: Push("Can't retrieve diary root")
0x3ec: @ Trace(Stack[-1])
0x3ed: Pop(1)
0x3ee: Stack[-3] = (bool) 0
0x3ef: Return(); Pop(2)

0x3f0: Stack[-3] = Stack[-1]
0x3f1: Return(); Pop(2)

0x3f2: Stack[-1] = 0
0x3f3: PushEmpty(object, object, int, object, object, int)
0x3f4: PushEmpty(object)
0x3f5: Call2 0x3e6

0x3f6: Stack[-4] = Stack[-1]
0x3f7: Pop(1)
0x3f8: @@ Find(Stack[-7], Stack[-2])
0x3f9: Pop(0)
0x3fa: Pop(0); Push((bool) Stack[-2] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: Push("Can't find diary parent with id: ")
0x3fd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3fe: @ Trace(Stack[-1])
0x3ff: Pop(1)
0x400: Stack[-9] = (bool) 0
0x401: Return(); Pop(6)

0x402: @@ AddChild(Stack[-8])
0x403: Pop(0)
0x404: Push((int) 7)
0x405: @ SendWorldWndMessage(Stack[-1])
0x406: Pop(1)
0x407: @@ GetCategory(Stack[-1])
0x408: Pop(0)
0x409: @ SetDiarySection(Stack[-1])
0x40a: Pop(0)
0x40b: Stack[-9] = (bool) 0
0x40c: Return(); Pop(6)

0x40d: Stack[-2] = 0
0x40e: Stack[-3] = 0
0x40f: PushEmpty(int, int)
0x410: Push("branch")
0x411: @ GetVariable(Stack[-1], Stack[-2])
0x412: Pop(1)
0x413: Push((int) 0)
0x414: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x416: Stack[-3] = (int) 1
0x417: Return(); Pop(2)

0x418: GOTO 0x41e

0x419: Push((int) 1)
0x41a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: Stack[-3] = (int) 2
0x41d: Return(); Pop(2)

0x41e: Stack[-3] = (int) 3
0x41f: Return(); Pop(2)

0x420: Stack[-1] = (int) 515556
0x421: Return(); Pop(0)

0x422: Stack[-1] = (int) 503341
0x423: Return(); Pop(0)

0x424: Stack[-1] = "ui/NPC_Citizen3.png"
0x425: Return(); Pop(0)

0x426: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x427: Return(); Pop(0)

0x428: Stack[-1] = (bool) 0
0x429: Return(); Pop(0)

