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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	oob12Littleboy1
	oob12Littleboy2
	oob12Littleboy3
	mnogogrannik@door2
	B_Mission5
	b12q01ChildsAreVisited
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove
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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
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
	self (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x298
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe0 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x29e Vars = (object)
		EVENT_26 Op = 0x2cf Vars = (string)
		EVENT_6 Op = 0x2d7 Vars = ()
		EVENT_7 Op = 0x318 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3a0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x50b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x509

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x50d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x50f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4f8

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
0x41: Call2 0x3e5

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
0x4f: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x48d

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x460

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x487

0x5e: Pop(2)
0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x467

0x63: Pop(2)
0x64: PushEmpty(object, object)
0x65: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x66: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67: Call2 0x44e

0x68: Pop(2)
0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xca

0x6c: Pop(1)
0x6d: Push((int) 522879)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 522880)
0x73: Push((int) 24069)
0x74: Push((int) 24068)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 522898)
0x78: Push((int) 24089)
0x79: Push((int) 24088)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 522900)
0x7d: Push((int) 24091)
0x7e: Push((int) 24090)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0xac

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral"
0x84: Call2 0xca

0x85: Pop(1)
0x86: Push((int) 540520)
0x87: @@ SetMessage(Stack[-1])
0x88: Pop(1)
0x89: @@ ClearReplies()
0x8a: Pop(0)
0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x499

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 540521)
0x91: Push((int) 42529)
0x92: Push((int) 42528)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x4a5

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 540531)
0x9b: Push((int) 42540)
0x9c: Push((int) 42539)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: Push((int) 540535)
0xa0: Push((int) -1)
0xa1: Push((int) 42545)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: Push((int) 523160)
0xa5: Push((int) -1)
0xa6: Push((int) 24362)
0xa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8: Pop(3)
0xa9: GOTO 0xac

0xaa: Return(); Pop(0)

0xab: GOTO 0x4e

0xac: PushEmpty(bool)
0xad: Call2 0x511

0xae: Pop(0)
0xaf: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb0: @ lshWaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb7: Call2 0x3f7

0xb8: Pop(1)
0xb9: GOTO 0xb0

0xba: GOTO 0xc9

0xbb: Push("all")
0xbc: Push("idle")
0xbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: @ WaitForAnimEnd()
0xc0: Pop(0)
0xc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: GOTO 0xc9

0xc4: Push("all")
0xc5: Push("idle")
0xc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: GOTO 0xbf

0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty(bool)
0xcc: Call2 0x511

0xcd: Pop(0)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Return(); Pop(0)

0xd1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Return(); Pop(0)

0xd4: PushEmpty(string, bool)
0xd5: Stack[-2] = Stack[-3]
0xd6: Push("")
0xd7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: Stack[-1] = (bool) 0
0xda: GOTO 0xdc

0xdb: Stack[-1] = (bool) 1
0xdc: Call2 0x407

0xdd: Pop(2)
0xde: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: Push((int) 1)
0xe2: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0xe3: PushEmpty()
0xe4: Call2 0x421

0xe5: Pop(0)
0xe6: Push((int) 42528)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x454

0xed: Pop(2)
0xee: Push((int) 42539)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x45a

0xf5: Pop(2)
0xf6: Push((int) 24067)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0x48d

0xfc: Pop(1)
0xfd: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x460

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x487

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x467

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x44e

0x111: Pop(2)
0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call2 0xca

0x115: Pop(1)
0x116: Push((int) 522879)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 522880)
0x11c: Push((int) 24069)
0x11d: Push((int) 24068)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 522898)
0x121: Push((int) 24089)
0x122: Push((int) 24088)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 522900)
0x126: Push((int) 24091)
0x127: Push((int) 24090)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0xca

0x12e: Pop(1)
0x12f: Push((int) 540520)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x499

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: Push((int) 540521)
0x13a: Push((int) 42529)
0x13b: Push((int) 42528)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x4a5

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: Push((int) 540531)
0x144: Push((int) 42540)
0x145: Push((int) 42539)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 540535)
0x149: Push((int) -1)
0x14a: Push((int) 42545)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 523160)
0x14e: Push((int) -1)
0x14f: Push((int) 24362)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 42540)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0xca

0x159: Pop(1)
0x15a: Push((int) 540532)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 540533)
0x160: Push((int) 42534)
0x161: Push((int) 42541)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 540534)
0x165: Push((int) 42531)
0x166: Push((int) 42543)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 42529)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0xca

0x170: Pop(1)
0x171: Push((int) 540522)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 540523)
0x177: Push((int) 42531)
0x178: Push((int) 42530)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 540530)
0x17c: Push((int) 42531)
0x17d: Push((int) 42537)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 42531)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral"
0x186: Call2 0xca

0x187: Pop(1)
0x188: Push((int) 540524)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 540525)
0x18e: Push((int) -1)
0x18f: Push((int) 42532)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 540526)
0x193: Push((int) 42534)
0x194: Push((int) 42533)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 42534)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0xca

0x19e: Pop(1)
0x19f: Push((int) 540527)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 540528)
0x1a5: Push((int) -1)
0x1a6: Push((int) 42535)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Push((int) 540529)
0x1aa: Push((int) -1)
0x1ab: Push((int) 42536)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 24091)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Neutral"
0x1b4: Call2 0xca

0x1b5: Pop(1)
0x1b6: Push((int) 522901)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 522902)
0x1bc: Push((int) 24093)
0x1bd: Push((int) 24092)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Push((int) 522910)
0x1c1: Push((int) -1)
0x1c2: Push((int) 24100)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Return(); Pop(0)

0x1c6: Push((int) 24093)
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Neutral"
0x1cb: Call2 0xca

0x1cc: Pop(1)
0x1cd: Push((int) 522903)
0x1ce: @@ SetMessage(Stack[-1])
0x1cf: Pop(1)
0x1d0: @@ ClearReplies()
0x1d1: Pop(0)
0x1d2: Push((int) 522904)
0x1d3: Push((int) 24095)
0x1d4: Push((int) 24094)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Push((int) 522909)
0x1d8: Push((int) -1)
0x1d9: Push((int) 24099)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 24095)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral"
0x1e2: Call2 0xca

0x1e3: Pop(1)
0x1e4: Push((int) 522905)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 522906)
0x1ea: Push((int) -1)
0x1eb: Push((int) 24096)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Push((int) 522908)
0x1ef: Push((int) -1)
0x1f0: Push((int) 24098)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 24089)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral"
0x1f9: Call2 0xca

0x1fa: Pop(1)
0x1fb: Push((int) 522899)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 522911)
0x201: Push((int) 24102)
0x202: Push((int) 24101)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 24102)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral"
0x20b: Call2 0xca

0x20c: Pop(1)
0x20d: Push((int) 522912)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 522913)
0x213: Push((int) 24091)
0x214: Push((int) 24103)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 24069)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral"
0x21d: Call2 0xca

0x21e: Pop(1)
0x21f: Push((int) 522881)
0x220: @@ SetMessage(Stack[-1])
0x221: Pop(1)
0x222: @@ ClearReplies()
0x223: Pop(0)
0x224: Push((int) 522882)
0x225: Push((int) 24071)
0x226: Push((int) 24070)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Push((int) 522897)
0x22a: Push((int) 24071)
0x22b: Push((int) 24086)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 24071)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0xca

0x235: Pop(1)
0x236: Push((int) 522883)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 522884)
0x23c: Push((int) 24073)
0x23d: Push((int) 24072)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Push((int) 522896)
0x241: Push((int) 24073)
0x242: Push((int) 24084)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Return(); Pop(0)

0x246: Push((int) 24073)
0x247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral"
0x24b: Call2 0xca

0x24c: Pop(1)
0x24d: Push((int) 522885)
0x24e: @@ SetMessage(Stack[-1])
0x24f: Pop(1)
0x250: @@ ClearReplies()
0x251: Pop(0)
0x252: Push((int) 522886)
0x253: Push((int) 24075)
0x254: Push((int) 24074)
0x255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Push((int) 522891)
0x258: Push((int) 24080)
0x259: Push((int) 24079)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Return(); Pop(0)

0x25d: Push((int) 24080)
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x260: PushEmpty(string)
0x261: Stack[-1] = "Neutral"
0x262: Call2 0xca

0x263: Pop(1)
0x264: Push((int) 522892)
0x265: @@ SetMessage(Stack[-1])
0x266: Pop(1)
0x267: @@ ClearReplies()
0x268: Pop(0)
0x269: Push((int) 522894)
0x26a: Push((int) -1)
0x26b: Push((int) 24082)
0x26c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26d: Pop(3)
0x26e: Push((int) 522895)
0x26f: Push((int) -1)
0x270: Push((int) 24083)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 24075)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral"
0x279: Call2 0xca

0x27a: Pop(1)
0x27b: Push((int) 522887)
0x27c: @@ SetMessage(Stack[-1])
0x27d: Pop(1)
0x27e: @@ ClearReplies()
0x27f: Pop(0)
0x280: Push((int) 522889)
0x281: Push((int) -1)
0x282: Push((int) 24077)
0x283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x284: Pop(3)
0x285: Push((int) 522890)
0x286: Push((int) -1)
0x287: Push((int) 24078)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28c: PushEmpty(bool)
0x28d: Call2 0x511

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x290: @ lshStopAnimation()
0x291: Pop(0)
0x292: GOTO 0x295

0x293: @ StopAnimation()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: GOTO 0xe1

0x297: Return(); Pop(0)

0x298: PushEmpty(float, float)
0x299: Stack[-2] = (int) 300
0x29a: Stack[-1] = (int) 100
0x29b: Call2 0x2a9

0x29c: Pop(2)
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: PushEmpty()
0x2a0: Call2 0x32f

0x2a1: Pop(0)
0x2a2: PushEmpty(int, object)
0x2a3: Stack[-1] = Stack[-3]
0x2a4: Push(-2, 1); TaskCall(0)
0x2a5: Call2 0x0

0x2a6: Pop(-2, 1); TaskReturn
0x2a7: Pop(2)
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(float, bool, float, bool)
0x2aa: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x2ab: Push((int) 3)
0x2ac: @ rand(Stack[-3], Stack[-1])
0x2ad: Pop(1)
0x2ae: Push((int) 3)
0x2af: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b0: @ Sleep(Stack[-1], Stack[-2])
0x2b1: Pop(1)
0x2b2: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x2b3: PushEmpty(float, float)
0x2b4: Stack[-2] = Stack[-8]
0x2b5: Stack[-1] = Stack[-7]
0x2b6: Call2 0x2ee

0x2b7: Pop(2)
0x2b8: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x2b9: GOTO 0x2ab

0x2ba: Return(); Pop(4)

0x2bb: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x2bc: PushEmpty(bool)
0x2bd: Stack[-1] = (bool) 0
0x2be: PushEmpty(bool)
0x2bf: Call2 0x39b

0x2c0: Pop(0)
0x2c1: Pop(1); Push((bool) Stack[-1] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: PushEmpty(bool)
0x2c4: Call2 0x2ec

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: Stack[-1] = (bool) 1
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c9: PushEmpty(object)
0x2ca: Call2 0x428

0x2cb: Pop(0)
0x2cc: @ RemoveActor(Stack[-1])
0x2cd: Pop(1)
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Push("cleanup")
0x2d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: PushEmpty()
0x2d4: Call2 0x2bb

0x2d5: Pop(0)
0x2d6: Return(); Pop(0)

0x2d7: Push( Stack[6 + Tasks[-1].StackPointer] )
0x2d8: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d9: PushEmpty()
0x2da: Call2 0x32f

0x2db: Pop(0)
0x2dc: PushEmpty(bool)
0x2dd: Stack[-1] = (bool) 0
0x2de: Push( Stack[5 + Tasks[-1].StackPointer] )
0x2df: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x2ec

0x2e2: Pop(0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: Stack[-1] = (bool) 1
0x2e5: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e6: PushEmpty(object)
0x2e7: Call2 0x428

0x2e8: Pop(0)
0x2e9: @ RemoveActor(Stack[-1])
0x2ea: Pop(1)
0x2eb: Return(); Pop(0)

0x2ec: Stack[-1] = (bool) 1
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty()
0x2ef: PushEmpty(bool)
0x2f0: Call2 0x39b

0x2f1: Pop(0)
0x2f2: Pop(1); Push((bool) Stack[-1] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Return(); Pop(0)

0x2f5: Push("player")
0x2f6: @ FindActor(Stack[-4], Stack[-1])
0x2f7: Pop(1)
0x2f8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2f9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2fa: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2fb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2fc: Push((int) 10)
0x2fd: Push((float)1.0)
0x2fe: @ SetTimer(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: PushEmpty()
0x301: Call2 0x33d

0x302: Pop(0)
0x303: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x305: Push((int) 10)
0x306: @ KillTimer(Stack[-1])
0x307: Pop(1)
0x308: Return(); Pop(0)

0x309: PushEmpty(float, float)
0x30a: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-3] = (bool) 0
0x30d: Return(); Pop(2)

0x30e: PushEmpty(float, object)
0x30f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x310: Call2 0x393

0x311: Pop(1)
0x312: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x313: Push( Stack[2 + Tasks[-1].StackPointer] )
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x316: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x317: Return(); Pop(2)

0x318: PushEmpty()
0x319: Push((int) 10)
0x31a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31c: PushEmpty(bool)
0x31d: Call2 0x309

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x320: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x322: PushEmpty(object)
0x323: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x324: Call2 0x416

0x325: Pop(1)
0x326: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x327: GOTO 0x32e

0x328: Push( Stack[2 + Tasks[-1].StackPointer] )
0x329: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32a: Push("head")
0x32b: @ UnlookAsync(Stack[-1])
0x32c: Pop(1)
0x32d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x32e: Return(); Pop(0)

0x32f: PushEmpty()
0x330: Call2 0x38e

0x331: Pop(0)
0x332: Push((int) 10)
0x333: @ KillTimer(Stack[-1])
0x334: Pop(1)
0x335: Push( Stack[2 + Tasks[-1].StackPointer] )
0x336: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x337: Push("head")
0x338: @ UnlookAsync(Stack[-1])
0x339: Pop(1)
0x33a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x33b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x33c: Return(); Pop(0)

0x33d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x33e: @ WaitForAnimEnd()
0x33f: Pop(0)
0x340: PushEmpty(bool)
0x341: Call2 0x39b

0x342: Pop(0)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: Return(); Pop(14)

0x346: PushEmpty(int)
0x347: Call2 0x51a

0x348: Stack[-8] = Stack[-1]
0x349: Pop(1)
0x34a: Stack[-6] = (int) 0
0x34b: PushEmpty(bool)
0x34c: Stack[-1] = (bool) 0
0x34d: Push((int) 5)
0x34e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: PushEmpty(bool)
0x351: Call2 0x39b

0x352: Pop(0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Stack[-1] = (bool) 1
0x355: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x356: Push((int) 3)
0x357: @ irand(Stack[-6], Stack[-1])
0x358: Pop(1)
0x359: Push((int) 0)
0x35a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x35c: Push(Stack[-7])
0x35d: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x35e: @ irand(Stack[-4], Stack[-7])
0x35f: Pop(0)
0x360: Push("all")
0x361: PushEmpty(string, int)
0x362: Stack[-1] = Stack[-7]
0x363: Call2 0x513

0x364: Pop(1)
0x365: @ PlayAnimation(Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: @ WaitForAnimEnd(Stack[-3])
0x368: Pop(0)
0x369: Pop(0); Push((bool) Stack[-3] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: GOTO 0x389

0x36c: GOTO 0x37e

0x36d: Push((int) 1)
0x36e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x370: Push((int) 4)
0x371: @ rand(Stack[-3], Stack[-1])
0x372: Pop(1)
0x373: Push((int) 1)
0x374: Pop(1); Push(Stack[-3] + Stack[-1]);
0x375: @ Sleep(Stack[-1], Stack[-2])
0x376: Pop(1)
0x377: Pop(0); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: GOTO 0x389

0x37a: GOTO 0x37e

0x37b: Push(Stack[-6])
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x389

0x37e: PushEmpty(bool)
0x37f: Call2 0x38c

0x380: Pop(0)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: GOTO 0x389

0x384: @ ResetAAS()
0x385: Pop(0)
0x386: Push((int) 1)
0x387: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x388: GOTO 0x34b

0x389: @ ResetAAS()
0x38a: Pop(0)
0x38b: Return(); Pop(14)

0x38c: Stack[-1] = (bool) 1
0x38d: Return(); Pop(0)

0x38e: @ StopAnimation()
0x38f: Pop(0)
0x390: @ StopGroup0()
0x391: Pop(0)
0x392: Return(); Pop(0)

0x393: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x394: @ GetPosition(Stack[-3])
0x395: Pop(0)
0x396: @@ GetPosition(Stack[-2])
0x397: Pop(0)
0x398: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x399: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x39a: Return(); Pop(6)

0x39b: PushEmpty(bool, bool)
0x39c: @ IsLoaded(Stack[-1])
0x39d: Pop(0)
0x39e: Stack[-3] = Stack[-1]
0x39f: Return(); Pop(2)

0x3a0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3a1: @@ GetPosition(Stack[-8])
0x3a2: Pop(0)
0x3a3: @@ GetEyesHeight(Stack[-9])
0x3a4: Pop(0)
0x3a5: Push(CvectorIndex(Stack[-8], 1))
0x3a6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3a7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3a8: @ GetPosition(Stack[-7])
0x3a9: Pop(0)
0x3aa: @ GetEyesHeight(Stack[-9])
0x3ab: Pop(0)
0x3ac: Push(CvectorIndex(Stack[-7], 1))
0x3ad: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ae: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3af: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3b0: Push(CvectorIndex(Stack[-6], 1))
0x3b1: Stack[-1] = (int) 0
0x3b2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3b3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3b4: Pop(1); Push(Sqrt(Stack[-1]))
0x3b5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3b6: Stack[-5] = -Stack[-6]; Pop(0);
0x3b7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3b8: PushEmpty(cvector, cvector)
0x3b9: Push(CVector(0.0, 1.0, 0.0))
0x3ba: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3bb: Call2 0x42e

0x3bc: Pop(1)
0x3bd: Push((int) 25)
0x3be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c0: Push(CVector(0.0, 10.0, 0.0))
0x3c1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3c2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3c3: @ IsOverrideActive(Stack[-2])
0x3c4: Pop(0)
0x3c5: Push(Stack[-2])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-21] = (bool) 0
0x3c8: Return(); Pop(18)

0x3c9: @ StopWorld()
0x3ca: Pop(0)
0x3cb: Push((bool) 1)
0x3cc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3cd: Pop(1)
0x3ce: Push(CvectorIndex(Stack[-4], 0))
0x3cf: Push(CvectorIndex(Stack[-5], 2))
0x3d0: @ Rotate(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: PushEmpty(bool)
0x3d3: Call2 0x511

0x3d4: Pop(0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d6: GOTO 0x3df

0x3d7: Push("head")
0x3d8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3d9: Pop(1)
0x3da: Push(Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dc: Push("head")
0x3dd: @ LookAsyncCamera(Stack[-1])
0x3de: Pop(1)
0x3df: @ CameraWaitForPlayFinish()
0x3e0: Pop(0)
0x3e1: @ ResumeWorld()
0x3e2: Pop(0)
0x3e3: Stack[-21] = (bool) 1
0x3e4: Return(); Pop(18)

0x3e5: PushEmpty(bool, bool)
0x3e6: Push((bool) 1)
0x3e7: @ CameraSwitchToNormal(Stack[-1])
0x3e8: Pop(1)
0x3e9: PushEmpty(bool)
0x3ea: Call2 0x511

0x3eb: Pop(0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: GOTO 0x3f6

0x3ee: Push("head")
0x3ef: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3f0: Pop(1)
0x3f1: Push(Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f3: Push("head")
0x3f4: @ UnlookAsync(Stack[-1])
0x3f5: Pop(1)
0x3f6: Return(); Pop(2)

0x3f7: PushEmpty(bool, float, float, bool, float, float)
0x3f8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3f9: Pop(0)
0x3fa: Push(Stack[-3])
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3fd: Pop(0)
0x3fe: Push((bool) 0)
0x3ff: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(1)
0x401: GOTO 0x406

0x402: Push("Can't find lsh animation : ")
0x403: Pop(1); Push(Stack[-1] + Stack[-8]);
0x404: @ Trace(Stack[-1])
0x405: Pop(1)
0x406: Return(); Pop(6)

0x407: PushEmpty(bool, float, float, bool, float, float)
0x408: @ lshHasAnimation(Stack[-3], Stack[-8])
0x409: Pop(0)
0x40a: Push(Stack[-3])
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x40d: Pop(0)
0x40e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x40f: Pop(0)
0x410: GOTO 0x415

0x411: Push("Can't find lsh animation : ")
0x412: Pop(1); Push(Stack[-1] + Stack[-9]);
0x413: @ Trace(Stack[-1])
0x414: Pop(1)
0x415: Return(); Pop(6)

0x416: PushEmpty(float, cvector, float, cvector)
0x417: @@ GetEyesHeight(Stack[-2])
0x418: Pop(0)
0x419: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x41a: Push(CvectorIndex(Stack[-1], 1))
0x41b: Stack[-1] = Stack[-3]
0x41c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x41d: Push("head")
0x41e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x41f: Pop(1)
0x420: Return(); Pop(4)

0x421: PushEmpty(bool)
0x422: Call2 0x511

0x423: Pop(0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: @ lshStopSpeech()
0x426: Pop(0)
0x427: Return(); Pop(0)

0x428: PushEmpty(object, object)
0x429: @ self(Stack[-1])
0x42a: Pop(0)
0x42b: Stack[-3] = Stack[-1]
0x42c: Return(); Pop(2)

0x42d: Stack[-1] = 0
0x42e: PushEmpty(float, float)
0x42f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x430: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x431: Push((float)0.0)
0x432: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x435: Return(); Pop(2)

0x436: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x437: Return(); Pop(2)

0x438: PushEmpty(int, int)
0x439: @ GetVariable(Stack[-3], Stack[-1])
0x43a: Pop(0)
0x43b: Stack[-4] = Stack[-1]
0x43c: Return(); Pop(2)

0x43d: PushEmpty(object, object)
0x43e: @ FindActor(Stack[-1], Stack[-4])
0x43f: Pop(0)
0x440: Pop(0); Push((bool) Stack[-1] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x442: Push("Door ")
0x443: Pop(1); Push(Stack[-1] + Stack[-5]);
0x444: Push(" not found")
0x445: Pop(2); Push(Stack[-2] + Stack[-1]);
0x446: @ Trace(Stack[-1])
0x447: Pop(1)
0x448: GOTO 0x44c

0x449: Push("locked")
0x44a: @@ SetProperty(Stack[-1], Stack[-4])
0x44b: Pop(1)
0x44c: Return(); Pop(2)

0x44d: Stack[-1] = 0
0x44e: PushEmpty()
0x44f: Push("oob12Littleboy1")
0x450: Push((int) 1)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: Push("oob12Littleboy2")
0x456: Push((int) 1)
0x457: @ SetVariable(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: Push("oob12Littleboy3")
0x45c: Push((int) 1)
0x45d: @ SetVariable(Stack[-2], Stack[-1])
0x45e: Pop(2)
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: PushEmpty(string, bool)
0x462: Stack[-2] = "mnogogrannik@door2"
0x463: Stack[-1] = (bool) 0
0x464: Call2 0x43d

0x465: Pop(2)
0x466: Return(); Pop(0)

0x467: PushEmpty()
0x468: PushEmpty(int, string)
0x469: Stack[-1] = "B_Mission5"
0x46a: Call2 0x438

0x46b: Pop(1)
0x46c: Push((int) 0)
0x46d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x46f: Push("B_Mission5")
0x470: Push((int) 1)
0x471: @ SetVariable(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: PushEmpty()
0x474: Call2 0x4b1

0x475: Pop(0)
0x476: PushEmpty(bool, int)
0x477: Stack[-1] = (int) 562
0x478: Call2 0x4e7

0x479: Pop(2)
0x47a: PushEmpty(bool, int)
0x47b: Stack[-1] = (int) 563
0x47c: Call2 0x4e7

0x47d: Pop(2)
0x47e: PushEmpty(bool, int)
0x47f: Stack[-1] = (int) 564
0x480: Call2 0x4e7

0x481: Pop(2)
0x482: PushEmpty(bool, int)
0x483: Stack[-1] = (int) 565
0x484: Call2 0x4e7

0x485: Pop(2)
0x486: Return(); Pop(0)

0x487: PushEmpty()
0x488: Push("b12q01ChildsAreVisited")
0x489: Push((int) 1)
0x48a: @ SetVariable(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: Return(); Pop(0)

0x48d: PushEmpty()
0x48e: PushEmpty(int, string)
0x48f: Stack[-1] = "oob12Littleboy1"
0x490: Call2 0x438

0x491: Pop(1)
0x492: Push((int) 0)
0x493: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x495: Stack[-2] = (bool) 1
0x496: Return(); Pop(0)

0x497: Stack[-2] = (bool) 0
0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: PushEmpty(int, string)
0x49b: Stack[-1] = "oob12Littleboy2"
0x49c: Call2 0x438

0x49d: Pop(1)
0x49e: Push((int) 0)
0x49f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-2] = (bool) 1
0x4a2: Return(); Pop(0)

0x4a3: Stack[-2] = (bool) 0
0x4a4: Return(); Pop(0)

0x4a5: PushEmpty()
0x4a6: PushEmpty(int, string)
0x4a7: Stack[-1] = "oob12Littleboy3"
0x4a8: Call2 0x438

0x4a9: Pop(1)
0x4aa: Push((int) 0)
0x4ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-2] = (bool) 1
0x4ae: Return(); Pop(0)

0x4af: Stack[-2] = (bool) 0
0x4b0: Return(); Pop(0)

0x4b1: PushEmpty(object, object)
0x4b2: Push((int) 566)
0x4b3: Push((int) 0)
0x4b4: Push((int) 530580)
0x4b5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: PushEmpty(bool, object, int)
0x4b8: Stack[-2] = Stack[-4]
0x4b9: Stack[-1] = (int) -1
0x4ba: Call2 0x4cb

0x4bb: Pop(3)
0x4bc: Return(); Pop(2)

0x4bd: Stack[-1] = 0
0x4be: PushEmpty(object, object)
0x4bf: @ GetDiaryRoot(Stack[-1])
0x4c0: Pop(0)
0x4c1: Pop(0); Push((bool) Stack[-1] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c3: Push("Can't retrieve diary root")
0x4c4: @ Trace(Stack[-1])
0x4c5: Pop(1)
0x4c6: Stack[-3] = (bool) 0
0x4c7: Return(); Pop(2)

0x4c8: Stack[-3] = Stack[-1]
0x4c9: Return(); Pop(2)

0x4ca: Stack[-1] = 0
0x4cb: PushEmpty(object, object, int, object, object, int)
0x4cc: PushEmpty(object)
0x4cd: Call2 0x4be

0x4ce: Stack[-4] = Stack[-1]
0x4cf: Pop(1)
0x4d0: @@ Find(Stack[-7], Stack[-2])
0x4d1: Pop(0)
0x4d2: Pop(0); Push((bool) Stack[-2] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d4: Push("Can't find diary parent with id: ")
0x4d5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4d6: @ Trace(Stack[-1])
0x4d7: Pop(1)
0x4d8: Stack[-9] = (bool) 0
0x4d9: Return(); Pop(6)

0x4da: @@ AddChild(Stack[-8])
0x4db: Pop(0)
0x4dc: Push((int) 7)
0x4dd: @ SendWorldWndMessage(Stack[-1])
0x4de: Pop(1)
0x4df: @@ GetCategory(Stack[-1])
0x4e0: Pop(0)
0x4e1: @ SetDiarySection(Stack[-1])
0x4e2: Pop(0)
0x4e3: Stack[-9] = (bool) 0
0x4e4: Return(); Pop(6)

0x4e5: Stack[-2] = 0
0x4e6: Stack[-3] = 0
0x4e7: PushEmpty(object, object, object, object)
0x4e8: PushEmpty(object)
0x4e9: Call2 0x4be

0x4ea: Stack[-3] = Stack[-1]
0x4eb: Pop(1)
0x4ec: @@ Find(Stack[-5], Stack[-1])
0x4ed: Pop(0)
0x4ee: Pop(0); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-6] = (bool) 0
0x4f1: Return(); Pop(4)

0x4f2: @@ Remove()
0x4f3: Pop(0)
0x4f4: Stack[-6] = (bool) 1
0x4f5: Return(); Pop(4)

0x4f6: Stack[-1] = 0
0x4f7: Stack[-2] = 0
0x4f8: PushEmpty(int, int)
0x4f9: Push("branch")
0x4fa: @ GetVariable(Stack[-1], Stack[-2])
0x4fb: Pop(1)
0x4fc: Push((int) 0)
0x4fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ff: Stack[-3] = (int) 1
0x500: Return(); Pop(2)

0x501: GOTO 0x507

0x502: Push((int) 1)
0x503: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x505: Stack[-3] = (int) 2
0x506: Return(); Pop(2)

0x507: Stack[-3] = (int) 3
0x508: Return(); Pop(2)

0x509: Stack[-1] = (int) 515560
0x50a: Return(); Pop(0)

0x50b: Stack[-1] = (int) 503345
0x50c: Return(); Pop(0)

0x50d: Stack[-1] = "ui/NPC_Citizen3.png"
0x50e: Return(); Pop(0)

0x50f: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x510: Return(); Pop(0)

0x511: Stack[-1] = (bool) 0
0x512: Return(); Pop(0)

0x513: PushEmpty(string, string)
0x514: Stack[-1] = "idle"
0x515: Push(Stack[-3])
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x518: Stack[-4] = Stack[-1]
0x519: Return(); Pop(2)

0x51a: PushEmpty(int, bool, int, bool)
0x51b: Stack[-2] = (int) 0
0x51c: Push("all")
0x51d: PushEmpty(string, int)
0x51e: Stack[-1] = Stack[-5]
0x51f: Call2 0x513

0x520: Pop(1)
0x521: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(2)
0x523: Pop(0); Push((bool) Stack[-1] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: GOTO 0x529

0x526: Push((int) 1)
0x527: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x528: GOTO 0x51c

0x529: Stack[-5] = Stack[-2]
0x52a: Return(); Pop(4)

