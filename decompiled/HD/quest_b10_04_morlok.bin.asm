GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cleanup
	player
	head
	all
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
	idle
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png
	pt_map_notkin
	ShowMap
	b10q04NotkinTalk
	b10q04MorlokGotoNotkin
	AddMark
	quest_b10_04
	completed
	oob10MorlokMain1
	oob10MorlokMain2
	b10q04MorlokTalk
	b10q04
	b10q04Spi4kaTalk
	b10q04MishkaTalk
	b10q04LaskaTalk
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

Import:
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
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
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x6 Vars = (object)
		EVENT_26 Op = 0x35 Vars = (string)
		EVENT_6 Op = 0x3d Vars = ()
		EVENT_7 Op = 0x7e Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x204 Vars = (int, int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0xf

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty()
0x8: Call2 0x95

0x9: Pop(0)
0xa: PushEmpty(object)
0xb: Stack[-1] = Stack[-2]
0xc: Call2 0x55f

0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty(float, bool, float, bool)
0x10: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x11: Push((int) 3)
0x12: @ rand(Stack[-3], Stack[-1])
0x13: Pop(1)
0x14: Push((int) 3)
0x15: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16: @ Sleep(Stack[-1], Stack[-2])
0x17: Pop(1)
0x18: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x19: PushEmpty(float, float)
0x1a: Stack[-2] = Stack[-8]
0x1b: Stack[-1] = Stack[-7]
0x1c: Call2 0x54

0x1d: Pop(2)
0x1e: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1f: GOTO 0x11

0x20: Return(); Pop(4)

0x21: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x22: PushEmpty(bool)
0x23: Stack[-1] = (bool) 0
0x24: PushEmpty(bool)
0x25: Call2 0x34c

0x26: Pop(0)
0x27: Pop(1); Push((bool) Stack[-1] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x29: PushEmpty(bool)
0x2a: Call2 0x52

0x2b: Pop(0)
0x2c: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2d: Stack[-1] = (bool) 1
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: PushEmpty(object)
0x30: Call2 0x3d9

0x31: Pop(0)
0x32: @ RemoveActor(Stack[-1])
0x33: Pop(1)
0x34: Return(); Pop(0)

0x35: PushEmpty()
0x36: Push("cleanup")
0x37: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: PushEmpty()
0x3a: Call2 0x21

0x3b: Pop(0)
0x3c: Return(); Pop(0)

0x3d: Push( Stack[6 + Tasks[-1].StackPointer] )
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: PushEmpty()
0x40: Call2 0x95

0x41: Pop(0)
0x42: PushEmpty(bool)
0x43: Stack[-1] = (bool) 0
0x44: Push( Stack[5 + Tasks[-1].StackPointer] )
0x45: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x46: PushEmpty(bool)
0x47: Call2 0x52

0x48: Pop(0)
0x49: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x4a: Stack[-1] = (bool) 1
0x4b: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4c: PushEmpty(object)
0x4d: Call2 0x3d9

0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-1])
0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: Stack[-1] = (bool) 1
0x53: Return(); Pop(0)

0x54: PushEmpty()
0x55: PushEmpty(bool)
0x56: Call2 0x34c

0x57: Pop(0)
0x58: Pop(1); Push((bool) Stack[-1] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: Return(); Pop(0)

0x5b: Push("player")
0x5c: @ FindActor(Stack[-4], Stack[-1])
0x5d: Pop(1)
0x5e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x60: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x62: Push((int) 10)
0x63: Push((float)1.0)
0x64: @ SetTimer(Stack[-2], Stack[-1])
0x65: Pop(2)
0x66: PushEmpty()
0x67: Call2 0xa3

0x68: Pop(0)
0x69: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6b: Push((int) 10)
0x6c: @ KillTimer(Stack[-1])
0x6d: Pop(1)
0x6e: Return(); Pop(0)

0x6f: PushEmpty(float, float)
0x70: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x72: Stack[-3] = (bool) 0
0x73: Return(); Pop(2)

0x74: PushEmpty(float, object)
0x75: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x76: Call2 0x344

0x77: Pop(1)
0x78: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x79: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x7c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x7d: Return(); Pop(2)

0x7e: PushEmpty()
0x7f: Push((int) 10)
0x80: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x82: PushEmpty(bool)
0x83: Call2 0x6f

0x84: Pop(0)
0x85: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x86: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: PushEmpty(object)
0x89: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x8a: Call2 0x3c7

0x8b: Pop(1)
0x8c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8d: GOTO 0x94

0x8e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x90: Push("head")
0x91: @ UnlookAsync(Stack[-1])
0x92: Pop(1)
0x93: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: Call2 0xf4

0x97: Pop(0)
0x98: Push((int) 10)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9d: Push("head")
0x9e: @ UnlookAsync(Stack[-1])
0x9f: Pop(1)
0xa0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa2: Return(); Pop(0)

0xa3: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa4: @ WaitForAnimEnd()
0xa5: Pop(0)
0xa6: PushEmpty(bool)
0xa7: Call2 0x34c

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(14)

0xac: PushEmpty(int)
0xad: Call2 0x406

0xae: Stack[-8] = Stack[-1]
0xaf: Pop(1)
0xb0: Stack[-6] = (int) 0
0xb1: PushEmpty(bool)
0xb2: Stack[-1] = (bool) 0
0xb3: Push((int) 5)
0xb4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: PushEmpty(bool)
0xb7: Call2 0x34c

0xb8: Pop(0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Stack[-1] = (bool) 1
0xbb: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xbc: Push((int) 3)
0xbd: @ irand(Stack[-6], Stack[-1])
0xbe: Pop(1)
0xbf: Push((int) 0)
0xc0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc2: Push(Stack[-7])
0xc3: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc4: @ irand(Stack[-4], Stack[-7])
0xc5: Pop(0)
0xc6: Push("all")
0xc7: PushEmpty(string, int)
0xc8: Stack[-1] = Stack[-7]
0xc9: Call2 0x3ff

0xca: Pop(1)
0xcb: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc: Pop(2)
0xcd: @ WaitForAnimEnd(Stack[-3])
0xce: Pop(0)
0xcf: Pop(0); Push((bool) Stack[-3] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: GOTO 0xef

0xd2: GOTO 0xe4

0xd3: Push((int) 1)
0xd4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd6: Push((int) 4)
0xd7: @ rand(Stack[-3], Stack[-1])
0xd8: Pop(1)
0xd9: Push((int) 1)
0xda: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdb: @ Sleep(Stack[-1], Stack[-2])
0xdc: Pop(1)
0xdd: Pop(0); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: GOTO 0xef

0xe0: GOTO 0xe4

0xe1: Push(Stack[-6])
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: GOTO 0xef

0xe4: PushEmpty(bool)
0xe5: Call2 0xf2

0xe6: Pop(0)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: GOTO 0xef

0xea: @ ResetAAS()
0xeb: Pop(0)
0xec: Push((int) 1)
0xed: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xee: GOTO 0xb1

0xef: @ ResetAAS()
0xf0: Pop(0)
0xf1: Return(); Pop(14)

0xf2: Stack[-1] = (bool) 1
0xf3: Return(); Pop(0)

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: @ StopGroup0()
0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 110.0
0xfe: Call2 0x351

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0x419

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0x417

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0x41b

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0x41d

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0x54e

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[-11]
0x12a: Stack[-1] = Stack[-6]
0x12b: Push(-2, 4); TaskCall(2)
0x12c: Call2 0x143

0x12d: Pop(-2, 4); TaskReturn
0x12e: Pop(2)
0x12f: @@ IsDialogEnd(Stack[-1])
0x130: Pop(0)
0x131: Pop(0); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: @ sync()
0x134: Pop(0)
0x135: @@ IsDialogEnd(Stack[-1])
0x136: Pop(0)
0x137: GOTO 0x131

0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[-10]
0x13a: Call2 0x396

0x13b: Pop(1)
0x13c: @ StopDialog(Stack[-4])
0x13d: Pop(0)
0x13e: @@ GetReturnValue(Stack[-2])
0x13f: Pop(0)
0x140: Stack[-10] = Stack[-2]
0x141: Return(); Pop(8)

0x142: Stack[-4] = 0
0x143: PushEmpty()
0x144: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x145: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x146: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x147: Push((int) 1)
0x148: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x149: PushEmpty(bool)
0x14a: Stack[-1] = (bool) 0
0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x464

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0x4c1

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 1
0x156: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x157: PushEmpty(object, object)
0x158: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x159: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Call2 0x452

0x15b: Pop(2)
0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call2 0x1ee

0x15f: Pop(1)
0x160: Push((int) 530386)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: Push((int) 530387)
0x166: Push((int) 31760)
0x167: Push((int) 31759)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Push((int) 531497)
0x16b: Push((int) 31762)
0x16c: Push((int) 32855)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: GOTO 0x1d0

0x170: PushEmpty(bool)
0x171: Stack[-1] = (bool) 0
0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 0
0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x470

0x177: Pop(1)
0x178: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x179: PushEmpty(bool, object)
0x17a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Call2 0x4a9

0x17c: Pop(1)
0x17d: Pop(1); Push((bool) Stack[-1] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = (bool) 1
0x180: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x4b5

0x184: Pop(1)
0x185: Pop(1); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Stack[-1] = (bool) 1
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call2 0x1ee

0x18c: Pop(1)
0x18d: Push((int) 530396)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 530397)
0x193: Push((int) 31770)
0x194: Push((int) 31769)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: GOTO 0x1d0

0x198: PushEmpty(string)
0x199: Stack[-1] = "Neutral"
0x19a: Call2 0x1ee

0x19b: Pop(1)
0x19c: Push((int) 530394)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: PushEmpty(bool)
0x1a4: Stack[-1] = (bool) 0
0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call2 0x49d

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call2 0x4a9

0x1af: Pop(1)
0x1b0: Pop(1); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: Stack[-1] = (bool) 1
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b6: Call2 0x4b5

0x1b7: Pop(1)
0x1b8: Pop(1); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-1] = (bool) 1
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bc: PushEmpty(bool, object)
0x1bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Call2 0x4cd

0x1bf: Pop(1)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Stack[-1] = (bool) 1
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: Push((int) 530402)
0x1c4: Push((int) 31775)
0x1c5: Push((int) 31774)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Push((int) 530395)
0x1c9: Push((int) -1)
0x1ca: Push((int) 31767)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: GOTO 0x1d0

0x1ce: Return(); Pop(0)

0x1cf: GOTO 0x147

0x1d0: PushEmpty(bool)
0x1d1: Call2 0x41f

0x1d2: Pop(0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d4: @ lshWaitForAnimEnd()
0x1d5: Pop(0)
0x1d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: GOTO 0x1de

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1db: Call2 0x3a8

0x1dc: Pop(1)
0x1dd: GOTO 0x1d4

0x1de: GOTO 0x1ed

0x1df: Push("all")
0x1e0: Push("idle")
0x1e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e2: Pop(2)
0x1e3: @ WaitForAnimEnd()
0x1e4: Pop(0)
0x1e5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1ed

0x1e8: Push("all")
0x1e9: Push("idle")
0x1ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: GOTO 0x1e3

0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: PushEmpty(bool)
0x1f0: Call2 0x41f

0x1f1: Pop(0)
0x1f2: Pop(1); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Return(); Pop(0)

0x1f5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(string, bool)
0x1f9: Stack[-2] = Stack[-3]
0x1fa: Push("")
0x1fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-1] = (bool) 0
0x1fe: GOTO 0x200

0x1ff: Stack[-1] = (bool) 1
0x200: Call2 0x3b8

0x201: Pop(2)
0x202: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x203: Return(); Pop(0)

0x204: PushEmpty()
0x205: Push((int) 1)
0x206: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x207: PushEmpty()
0x208: Call2 0x3d2

0x209: Pop(0)
0x20a: Push((int) 31765)
0x20b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x20d: PushEmpty(object, object)
0x20e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x210: Call2 0x431

0x211: Pop(2)
0x212: PushEmpty(object, object)
0x213: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x214: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x215: Call2 0x45e

0x216: Pop(2)
0x217: PushEmpty(object, object)
0x218: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x219: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21a: Call2 0x421

0x21b: Pop(2)
0x21c: Push((int) 31773)
0x21d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: PushEmpty(object, object)
0x220: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x221: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x222: Call2 0x448

0x223: Pop(2)
0x224: Push((int) 32854)
0x225: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: PushEmpty(object, object)
0x228: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x229: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22a: Call2 0x448

0x22b: Pop(2)
0x22c: Push((int) 31774)
0x22d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22f: PushEmpty(object, object)
0x230: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x231: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x232: Call2 0x458

0x233: Pop(2)
0x234: Push((int) 31758)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x237: PushEmpty(bool)
0x238: Stack[-1] = (bool) 0
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Call2 0x464

0x23c: Pop(1)
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x240: Call2 0x4c1

0x241: Pop(1)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x245: PushEmpty(object, object)
0x246: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x247: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x248: Call2 0x452

0x249: Pop(2)
0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Neutral"
0x24c: Call2 0x1ee

0x24d: Pop(1)
0x24e: Push((int) 530386)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 530387)
0x254: Push((int) 31760)
0x255: Push((int) 31759)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Push((int) 531497)
0x259: Push((int) 31762)
0x25a: Push((int) 32855)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: PushEmpty(bool)
0x25f: Stack[-1] = (bool) 0
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: PushEmpty(bool, object)
0x263: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x264: Call2 0x470

0x265: Pop(1)
0x266: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x269: Call2 0x4a9

0x26a: Pop(1)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: Stack[-1] = (bool) 1
0x26e: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0x4b5

0x272: Pop(1)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral"
0x279: Call2 0x1ee

0x27a: Pop(1)
0x27b: Push((int) 530396)
0x27c: @@ SetMessage(Stack[-1])
0x27d: Pop(1)
0x27e: @@ ClearReplies()
0x27f: Pop(0)
0x280: Push((int) 530397)
0x281: Push((int) 31770)
0x282: Push((int) 31769)
0x283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x284: Pop(3)
0x285: Return(); Pop(0)

0x286: PushEmpty(string)
0x287: Stack[-1] = "Neutral"
0x288: Call2 0x1ee

0x289: Pop(1)
0x28a: Push((int) 530394)
0x28b: @@ SetMessage(Stack[-1])
0x28c: Pop(1)
0x28d: @@ ClearReplies()
0x28e: Pop(0)
0x28f: PushEmpty(bool)
0x290: Stack[-1] = (bool) 0
0x291: PushEmpty(bool)
0x292: Stack[-1] = (bool) 0
0x293: PushEmpty(bool)
0x294: Stack[-1] = (bool) 0
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x297: Call2 0x49d

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29a: PushEmpty(bool, object)
0x29b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29c: Call2 0x4a9

0x29d: Pop(1)
0x29e: Pop(1); Push((bool) Stack[-1] == 0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: Stack[-1] = (bool) 1
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0x4b5

0x2a5: Pop(1)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 1
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ac: Call2 0x4cd

0x2ad: Pop(1)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Stack[-1] = (bool) 1
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b1: Push((int) 530402)
0x2b2: Push((int) 31775)
0x2b3: Push((int) 31774)
0x2b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b5: Pop(3)
0x2b6: Push((int) 530395)
0x2b7: Push((int) -1)
0x2b8: Push((int) 31767)
0x2b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(3)
0x2bb: Return(); Pop(0)

0x2bc: Push((int) 31775)
0x2bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = "Neutral"
0x2c1: Call2 0x1ee

0x2c2: Pop(1)
0x2c3: Push((int) 530403)
0x2c4: @@ SetMessage(Stack[-1])
0x2c5: Pop(1)
0x2c6: @@ ClearReplies()
0x2c7: Pop(0)
0x2c8: Push((int) 530404)
0x2c9: Push((int) -1)
0x2ca: Push((int) 31776)
0x2cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(3)
0x2cd: Return(); Pop(0)

0x2ce: Push((int) 31770)
0x2cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d1: PushEmpty(string)
0x2d2: Stack[-1] = "Neutral"
0x2d3: Call2 0x1ee

0x2d4: Pop(1)
0x2d5: Push((int) 530398)
0x2d6: @@ SetMessage(Stack[-1])
0x2d7: Pop(1)
0x2d8: @@ ClearReplies()
0x2d9: Pop(0)
0x2da: Push((int) 530399)
0x2db: Push((int) 31772)
0x2dc: Push((int) 31771)
0x2dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2de: Pop(3)
0x2df: Push((int) 531496)
0x2e0: Push((int) -1)
0x2e1: Push((int) 32854)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: Return(); Pop(0)

0x2e5: Push((int) 31772)
0x2e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2e8: PushEmpty(string)
0x2e9: Stack[-1] = "Neutral"
0x2ea: Call2 0x1ee

0x2eb: Pop(1)
0x2ec: Push((int) 530400)
0x2ed: @@ SetMessage(Stack[-1])
0x2ee: Pop(1)
0x2ef: @@ ClearReplies()
0x2f0: Pop(0)
0x2f1: Push((int) 530401)
0x2f2: Push((int) -1)
0x2f3: Push((int) 31773)
0x2f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: Return(); Pop(0)

0x2f7: Push((int) 31760)
0x2f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2fa: PushEmpty(string)
0x2fb: Stack[-1] = "Neutral"
0x2fc: Call2 0x1ee

0x2fd: Pop(1)
0x2fe: Push((int) 530388)
0x2ff: @@ SetMessage(Stack[-1])
0x300: Pop(1)
0x301: @@ ClearReplies()
0x302: Pop(0)
0x303: Push((int) 530389)
0x304: Push((int) 31762)
0x305: Push((int) 31761)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: Push((int) 531498)
0x309: Push((int) 31762)
0x30a: Push((int) 32857)
0x30b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(3)
0x30d: Return(); Pop(0)

0x30e: Push((int) 31762)
0x30f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x311: PushEmpty(string)
0x312: Stack[-1] = "Neutral"
0x313: Call2 0x1ee

0x314: Pop(1)
0x315: Push((int) 530390)
0x316: @@ SetMessage(Stack[-1])
0x317: Pop(1)
0x318: @@ ClearReplies()
0x319: Pop(0)
0x31a: Push((int) 530391)
0x31b: Push((int) 31764)
0x31c: Push((int) 31763)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: Push((int) 531499)
0x320: Push((int) 31764)
0x321: Push((int) 32859)
0x322: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(3)
0x324: Return(); Pop(0)

0x325: Push((int) 31764)
0x326: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x328: PushEmpty(string)
0x329: Stack[-1] = "Neutral"
0x32a: Call2 0x1ee

0x32b: Pop(1)
0x32c: Push((int) 530392)
0x32d: @@ SetMessage(Stack[-1])
0x32e: Pop(1)
0x32f: @@ ClearReplies()
0x330: Pop(0)
0x331: Push((int) 530393)
0x332: Push((int) -1)
0x333: Push((int) 31765)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x338: PushEmpty(bool)
0x339: Call2 0x41f

0x33a: Pop(0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33c: @ lshStopAnimation()
0x33d: Pop(0)
0x33e: GOTO 0x341

0x33f: @ StopAnimation()
0x340: Pop(0)
0x341: Return(); Pop(0)

0x342: GOTO 0x205

0x343: Return(); Pop(0)

0x344: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x345: @ GetPosition(Stack[-3])
0x346: Pop(0)
0x347: @@ GetPosition(Stack[-2])
0x348: Pop(0)
0x349: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x34a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x34b: Return(); Pop(6)

0x34c: PushEmpty(bool, bool)
0x34d: @ IsLoaded(Stack[-1])
0x34e: Pop(0)
0x34f: Stack[-3] = Stack[-1]
0x350: Return(); Pop(2)

0x351: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x352: @@ GetPosition(Stack[-8])
0x353: Pop(0)
0x354: @@ GetEyesHeight(Stack[-9])
0x355: Pop(0)
0x356: Push(CvectorIndex(Stack[-8], 1))
0x357: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x358: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x359: @ GetPosition(Stack[-7])
0x35a: Pop(0)
0x35b: @ GetEyesHeight(Stack[-9])
0x35c: Pop(0)
0x35d: Push(CvectorIndex(Stack[-7], 1))
0x35e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x35f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x360: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x361: Push(CvectorIndex(Stack[-6], 1))
0x362: Stack[-1] = (int) 0
0x363: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x364: Pop(0); Push(Stack[-6] | Stack[-6]);
0x365: Pop(1); Push(Sqrt(Stack[-1]))
0x366: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x367: Stack[-5] = -Stack[-6]; Pop(0);
0x368: Pop(0); Push(Stack[-6] * Stack[-19]);
0x369: PushEmpty(cvector, cvector)
0x36a: Push(CVector(0.0, 1.0, 0.0))
0x36b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x36c: Call2 0x3df

0x36d: Pop(1)
0x36e: Push((int) 25)
0x36f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x370: Pop(2); Push(Stack[-2] + Stack[-1]);
0x371: Push(CVector(0.0, 10.0, 0.0))
0x372: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x373: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x374: @ IsOverrideActive(Stack[-2])
0x375: Pop(0)
0x376: Push(Stack[-2])
0x377: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x378: Stack[-21] = (bool) 0
0x379: Return(); Pop(18)

0x37a: @ StopWorld()
0x37b: Pop(0)
0x37c: Push((bool) 1)
0x37d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x37e: Pop(1)
0x37f: Push(CvectorIndex(Stack[-4], 0))
0x380: Push(CvectorIndex(Stack[-5], 2))
0x381: @ Rotate(Stack[-2], Stack[-1])
0x382: Pop(2)
0x383: PushEmpty(bool)
0x384: Call2 0x41f

0x385: Pop(0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x390

0x388: Push("head")
0x389: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38a: Pop(1)
0x38b: Push(Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38d: Push("head")
0x38e: @ LookAsyncCamera(Stack[-1])
0x38f: Pop(1)
0x390: @ CameraWaitForPlayFinish()
0x391: Pop(0)
0x392: @ ResumeWorld()
0x393: Pop(0)
0x394: Stack[-21] = (bool) 1
0x395: Return(); Pop(18)

0x396: PushEmpty(bool, bool)
0x397: Push((bool) 1)
0x398: @ CameraSwitchToNormal(Stack[-1])
0x399: Pop(1)
0x39a: PushEmpty(bool)
0x39b: Call2 0x41f

0x39c: Pop(0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: GOTO 0x3a7

0x39f: Push("head")
0x3a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a1: Pop(1)
0x3a2: Push(Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a4: Push("head")
0x3a5: @ UnlookAsync(Stack[-1])
0x3a6: Pop(1)
0x3a7: Return(); Pop(2)

0x3a8: PushEmpty(bool, float, float, bool, float, float)
0x3a9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3aa: Pop(0)
0x3ab: Push(Stack[-3])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ad: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ae: Pop(0)
0x3af: Push((bool) 0)
0x3b0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(1)
0x3b2: GOTO 0x3b7

0x3b3: Push("Can't find lsh animation : ")
0x3b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b5: @ Trace(Stack[-1])
0x3b6: Pop(1)
0x3b7: Return(); Pop(6)

0x3b8: PushEmpty(bool, float, float, bool, float, float)
0x3b9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3ba: Pop(0)
0x3bb: Push(Stack[-3])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3be: Pop(0)
0x3bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3c0: Pop(0)
0x3c1: GOTO 0x3c6

0x3c2: Push("Can't find lsh animation : ")
0x3c3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3c4: @ Trace(Stack[-1])
0x3c5: Pop(1)
0x3c6: Return(); Pop(6)

0x3c7: PushEmpty(float, cvector, float, cvector)
0x3c8: @@ GetEyesHeight(Stack[-2])
0x3c9: Pop(0)
0x3ca: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3cb: Push(CvectorIndex(Stack[-1], 1))
0x3cc: Stack[-1] = Stack[-3]
0x3cd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3ce: Push("head")
0x3cf: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3d0: Pop(1)
0x3d1: Return(); Pop(4)

0x3d2: PushEmpty(bool)
0x3d3: Call2 0x41f

0x3d4: Pop(0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: @ lshStopSpeech()
0x3d7: Pop(0)
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty(object, object)
0x3da: @ self(Stack[-1])
0x3db: Pop(0)
0x3dc: Stack[-3] = Stack[-1]
0x3dd: Return(); Pop(2)

0x3de: Stack[-1] = 0
0x3df: PushEmpty(float, float)
0x3e0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e2: Push((float)0.0)
0x3e3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3e6: Return(); Pop(2)

0x3e7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3e8: Return(); Pop(2)

0x3e9: PushEmpty(int, int)
0x3ea: @ GetVariable(Stack[-3], Stack[-1])
0x3eb: Pop(0)
0x3ec: Stack[-4] = Stack[-1]
0x3ed: Return(); Pop(2)

0x3ee: PushEmpty(object, object)
0x3ef: @ FindActor(Stack[-1], Stack[-4])
0x3f0: Pop(0)
0x3f1: Pop(0); Push((bool) Stack[-1] == 0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-5] = (bool) 0
0x3f4: Return(); Pop(2)

0x3f5: @ Trigger(Stack[-1], Stack[-3])
0x3f6: Pop(0)
0x3f7: Stack[-5] = (bool) 1
0x3f8: Return(); Pop(2)

0x3f9: Stack[-1] = 0
0x3fa: PushEmpty(float, float)
0x3fb: @ GetGameTime(Stack[-1])
0x3fc: Pop(0)
0x3fd: Stack[-3] = Stack[-1]
0x3fe: Return(); Pop(2)

0x3ff: PushEmpty(string, string)
0x400: Stack[-1] = "idle"
0x401: Push(Stack[-3])
0x402: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x403: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x404: Stack[-4] = Stack[-1]
0x405: Return(); Pop(2)

0x406: PushEmpty(int, bool, int, bool)
0x407: Stack[-2] = (int) 0
0x408: Push("all")
0x409: PushEmpty(string, int)
0x40a: Stack[-1] = Stack[-5]
0x40b: Call2 0x3ff

0x40c: Pop(1)
0x40d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(2)
0x40f: Pop(0); Push((bool) Stack[-1] == 0)
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: GOTO 0x415

0x412: Push((int) 1)
0x413: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x414: GOTO 0x408

0x415: Stack[-5] = Stack[-2]
0x416: Return(); Pop(4)

0x417: Stack[-1] = (int) 521048
0x418: Return(); Pop(0)

0x419: Stack[-1] = (int) 521047
0x41a: Return(); Pop(0)

0x41b: Stack[-1] = "ui/NPC_Morlok.png"
0x41c: Return(); Pop(0)

0x41d: Stack[-1] = "ui/NPC_Morlok_b.png"
0x41e: Return(); Pop(0)

0x41f: Stack[-1] = (bool) 0
0x420: Return(); Pop(0)

0x421: PushEmpty()
0x422: PushEmpty(object, string, float)
0x423: PushEmpty(object)
0x424: Call2 0x51c

0x425: Stack[-4] = Stack[-1]
0x426: Pop(1)
0x427: Stack[-2] = "pt_map_notkin"
0x428: Stack[-1] = (int) 2
0x429: Call2 0x52d

0x42a: Pop(3)
0x42b: PushEmpty(object)
0x42c: Call2 0x51c

0x42d: Pop(0)
0x42e: @@ ShowMap(Stack[-1])
0x42f: Pop(1)
0x430: Return(); Pop(0)

0x431: PushEmpty(object, object)
0x432: Push("b10q04NotkinTalk")
0x433: Push((int) 1)
0x434: @ SetVariable(Stack[-2], Stack[-1])
0x435: Pop(2)
0x436: PushEmpty(object)
0x437: Call2 0x51c

0x438: Stack[-2] = Stack[-1]
0x439: Pop(1)
0x43a: Push("b10q04MorlokGotoNotkin")
0x43b: Push("pt_map_notkin")
0x43c: Push((int) 0)
0x43d: Push((int) 530549)
0x43e: PushEmpty(float)
0x43f: Call2 0x3fa

0x440: Pop(0)
0x441: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(5)
0x443: PushEmpty()
0x444: Call2 0x4e6

0x445: Pop(0)
0x446: Return(); Pop(2)

0x447: Stack[-1] = 0
0x448: PushEmpty()
0x449: PushEmpty()
0x44a: Call2 0x4d9

0x44b: Pop(0)
0x44c: PushEmpty(bool, string, string)
0x44d: Stack[-2] = "quest_b10_04"
0x44e: Stack[-1] = "completed"
0x44f: Call2 0x3ee

0x450: Pop(3)
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: Push("oob10MorlokMain1")
0x454: Push((int) 1)
0x455: @ SetVariable(Stack[-2], Stack[-1])
0x456: Pop(2)
0x457: Return(); Pop(0)

0x458: PushEmpty()
0x459: Push("oob10MorlokMain2")
0x45a: Push((int) 1)
0x45b: @ SetVariable(Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: Return(); Pop(0)

0x45e: PushEmpty()
0x45f: Push("b10q04MorlokTalk")
0x460: Push((int) 1)
0x461: @ SetVariable(Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: PushEmpty(int, string)
0x466: Stack[-1] = "b10q04"
0x467: Call2 0x3e9

0x468: Pop(1)
0x469: Push((int) 1)
0x46a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: Stack[-2] = (bool) 1
0x46d: Return(); Pop(0)

0x46e: Stack[-2] = (bool) 0
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 0
0x473: PushEmpty(bool)
0x474: Stack[-1] = (bool) 0
0x475: PushEmpty(bool)
0x476: Stack[-1] = (bool) 0
0x477: PushEmpty(int, string)
0x478: Stack[-1] = "b10q04NotkinTalk"
0x479: Call2 0x3e9

0x47a: Pop(1)
0x47b: Push((int) 9)
0x47c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x47e: PushEmpty(int, string)
0x47f: Stack[-1] = "b10q04Spi4kaTalk"
0x480: Call2 0x3e9

0x481: Pop(1)
0x482: Push((int) 9)
0x483: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: Stack[-1] = (bool) 1
0x486: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x487: PushEmpty(int, string)
0x488: Stack[-1] = "b10q04MishkaTalk"
0x489: Call2 0x3e9

0x48a: Pop(1)
0x48b: Push((int) 9)
0x48c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48e: Stack[-1] = (bool) 1
0x48f: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x490: PushEmpty(int, string)
0x491: Stack[-1] = "b10q04LaskaTalk"
0x492: Call2 0x3e9

0x493: Pop(1)
0x494: Push((int) 9)
0x495: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x497: Stack[-1] = (bool) 1
0x498: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x499: Stack[-2] = (bool) 1
0x49a: Return(); Pop(0)

0x49b: Stack[-2] = (bool) 0
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: PushEmpty(int, string)
0x49f: Stack[-1] = "b10q04NotkinTalk"
0x4a0: Call2 0x3e9

0x4a1: Pop(1)
0x4a2: Push((int) 9)
0x4a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: Stack[-2] = (bool) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty()
0x4aa: PushEmpty(int, string)
0x4ab: Stack[-1] = "b10q04"
0x4ac: Call2 0x3e9

0x4ad: Pop(1)
0x4ae: Push((int) 1000)
0x4af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b1: Stack[-2] = (bool) 1
0x4b2: Return(); Pop(0)

0x4b3: Stack[-2] = (bool) 0
0x4b4: Return(); Pop(0)

0x4b5: PushEmpty()
0x4b6: PushEmpty(int, string)
0x4b7: Stack[-1] = "b10q04"
0x4b8: Call2 0x3e9

0x4b9: Pop(1)
0x4ba: Push((int) -1)
0x4bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-2] = (bool) 1
0x4be: Return(); Pop(0)

0x4bf: Stack[-2] = (bool) 0
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty(int, string)
0x4c3: Stack[-1] = "oob10MorlokMain1"
0x4c4: Call2 0x3e9

0x4c5: Pop(1)
0x4c6: Push((int) 0)
0x4c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-2] = (bool) 1
0x4ca: Return(); Pop(0)

0x4cb: Stack[-2] = (bool) 0
0x4cc: Return(); Pop(0)

0x4cd: PushEmpty()
0x4ce: PushEmpty(int, string)
0x4cf: Stack[-1] = "oob10MorlokMain2"
0x4d0: Call2 0x3e9

0x4d1: Pop(1)
0x4d2: Push((int) 0)
0x4d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-2] = (bool) 1
0x4d6: Return(); Pop(0)

0x4d7: Stack[-2] = (bool) 0
0x4d8: Return(); Pop(0)

0x4d9: PushEmpty(object, object)
0x4da: Push((int) 560)
0x4db: Push((int) 2)
0x4dc: Push((int) 530539)
0x4dd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: PushEmpty(bool, object, int)
0x4e0: Stack[-2] = Stack[-4]
0x4e1: Stack[-1] = (int) 545
0x4e2: Call2 0x500

0x4e3: Pop(3)
0x4e4: Return(); Pop(2)

0x4e5: Stack[-1] = 0
0x4e6: PushEmpty(object, object)
0x4e7: Push((int) 547)
0x4e8: Push((int) 2)
0x4e9: Push((int) 530438)
0x4ea: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: PushEmpty(bool, object, int)
0x4ed: Stack[-2] = Stack[-4]
0x4ee: Stack[-1] = (int) 545
0x4ef: Call2 0x500

0x4f0: Pop(3)
0x4f1: Return(); Pop(2)

0x4f2: Stack[-1] = 0
0x4f3: PushEmpty(object, object)
0x4f4: @ GetDiaryRoot(Stack[-1])
0x4f5: Pop(0)
0x4f6: Pop(0); Push((bool) Stack[-1] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f8: Push("Can't retrieve diary root")
0x4f9: @ Trace(Stack[-1])
0x4fa: Pop(1)
0x4fb: Stack[-3] = (bool) 0
0x4fc: Return(); Pop(2)

0x4fd: Stack[-3] = Stack[-1]
0x4fe: Return(); Pop(2)

0x4ff: Stack[-1] = 0
0x500: PushEmpty(object, object, int, object, object, int)
0x501: PushEmpty(object)
0x502: Call2 0x4f3

0x503: Stack[-4] = Stack[-1]
0x504: Pop(1)
0x505: @@ Find(Stack[-7], Stack[-2])
0x506: Pop(0)
0x507: Pop(0); Push((bool) Stack[-2] == 0)
0x508: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x509: Push("Can't find diary parent with id: ")
0x50a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x50b: @ Trace(Stack[-1])
0x50c: Pop(1)
0x50d: Stack[-9] = (bool) 0
0x50e: Return(); Pop(6)

0x50f: @@ AddChild(Stack[-8])
0x510: Pop(0)
0x511: Push((int) 7)
0x512: @ SendWorldWndMessage(Stack[-1])
0x513: Pop(1)
0x514: @@ GetCategory(Stack[-1])
0x515: Pop(0)
0x516: @ SetDiarySection(Stack[-1])
0x517: Pop(0)
0x518: Stack[-9] = (bool) 0
0x519: Return(); Pop(6)

0x51a: Stack[-2] = 0
0x51b: Stack[-3] = 0
0x51c: PushEmpty(object, object, object, object)
0x51d: @ GetMainOutdoorScene(Stack[-2])
0x51e: Pop(0)
0x51f: Pop(0); Push((bool) Stack[-2] == 0)
0x520: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x521: Push("Can't find main outdoor scene")
0x522: @ Trace(Stack[-1])
0x523: Pop(1)
0x524: Stack[-1] = 0
0x525: Stack[-5] = Stack[-1]
0x526: Return(); Pop(4)

0x527: @@ GetMap(Stack[-1])
0x528: Pop(0)
0x529: Stack[-5] = Stack[-1]
0x52a: Return(); Pop(4)

0x52b: Stack[-1] = 0
0x52c: Stack[-2] = 0
0x52d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x52e: @ GetMainOutdoorScene(Stack[-2])
0x52f: Pop(0)
0x530: Pop(0); Push((bool) Stack[-2] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x532: Push("Can't find main outdoor scene")
0x533: @ Trace(Stack[-1])
0x534: Pop(1)
0x535: Return(); Pop(8)

0x536: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x537: Pop(0)
0x538: Pop(0); Push((bool) Stack[-1] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53a: Push("Warning: outdoor scene locator ")
0x53b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x53c: Push(" doesnt exist")
0x53d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x53e: @ Trace(Stack[-1])
0x53f: Pop(1)
0x540: @@ GetMap(Stack[-11])
0x541: Pop(0)
0x542: Pop(0); Push((bool) Stack[-11] == 0)
0x543: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x544: Push("Can't find map")
0x545: @ Trace(Stack[-1])
0x546: Pop(1)
0x547: Return(); Pop(8)

0x548: Push(CvectorIndex(Stack[-4], 0))
0x549: Push(CvectorIndex(Stack[-5], 2))
0x54a: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x54b: Pop(2)
0x54c: Return(); Pop(8)

0x54d: Stack[-2] = 0
0x54e: PushEmpty(int, int)
0x54f: Push("branch")
0x550: @ GetVariable(Stack[-1], Stack[-2])
0x551: Pop(1)
0x552: Push((int) 0)
0x553: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x555: Stack[-3] = (int) 1
0x556: Return(); Pop(2)

0x557: GOTO 0x55d

0x558: Push((int) 1)
0x559: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: Stack[-3] = (int) 2
0x55c: Return(); Pop(2)

0x55d: Stack[-3] = (int) 3
0x55e: Return(); Pop(2)

0x55f: PushEmpty()
0x560: PushEmpty(int, object)
0x561: Stack[-1] = Stack[-3]
0x562: Push(-2, 1); TaskCall(1)
0x563: Call2 0xf9

0x564: Pop(-2, 1); TaskReturn
0x565: Pop(2)
0x566: Return(); Pop(0)

