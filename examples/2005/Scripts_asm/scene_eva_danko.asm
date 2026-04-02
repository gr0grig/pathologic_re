GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_eva
	W:NPC_Eva
	W:NPC_Danko_Eva.xml
	W:pers_nudegirl
	W:nudegirl_danko.xml
	W:OnGameTime
	W: 
	W:quest_d8_02
	W:noeva
	W:.bin
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f0065007600610000004e00500043005f0045007600610000004e00500043005f00440061006e006b006f005f004500760061002e0078006d006c00000070006500720073005f006e007500640065006700690072006c0000006e007500640065006700690072006c005f00640061006e006b006f002e0078006d006c0000004f006e00470061006d006500540069006d006500000020000000710075006500730074005f00640038005f003000320000006e006f0065007600610000002e00620069006e0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	SetTimeEvent (2 args)
	Hold (0 args)
	Trace (1 args)
	GetGameTime (1 args)
	RemoveActor (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	AddMessage (4 args)
	SendWorldWndMessage (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, object, object) Params = 0
		EVENT_5 Op = 0x1c Vars = ()
		EVENT_9 Op = 0x37 Vars = (int, float)
		EVENT_6 Op = 0x73 Vars = ()
		EVENT_26 Op = 0x7c Vars = (string)


0x0: Push((int) 1)
0x1: Push((int) 144)
0x2: @ SetTimeEvent(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: Push((int) 2)
0x5: Push((float)151.5)
0x6: @ SetTimeEvent(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: Push((int) 3)
0x9: Push((int) 180)
0xa: @ SetTimeEvent(Stack[-2], Stack[-1])
0xb: Pop(2)
0xc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd: PushEmpty(object, object, string, string, string)
0xe: PushEmpty(object)
0xf: Call2 0x87

0x10: Stack[-1] = Stack[-5]
0x11: Pop(1)
0x12: Stack[-3] = "pt_eva" // @poff=0
0x13: Stack[-2] = "NPC_Eva" // @poff=14
0x14: Stack[-1] = "NPC_Danko_Eva.xml" // @poff=30
0x15: Call2 0x98

0x16: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x17: Pop(5)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(0)

0x1c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x1e: PushEmpty(object, object, string, string, string)
0x1f: PushEmpty(object)
0x20: Call2 0x87

0x21: Stack[-1] = Stack[-5]
0x22: Pop(1)
0x23: Stack[-3] = "pt_eva" // @poff=0
0x24: Stack[-2] = "NPC_Eva" // @poff=14
0x25: Stack[-1] = "NPC_Danko_Eva.xml" // @poff=30
0x26: Call2 0x98

0x27: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x28: Pop(5)
0x29: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2a: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2b: PushEmpty(object, object, string, string, string)
0x2c: PushEmpty(object)
0x2d: Call2 0x87

0x2e: Stack[-1] = Stack[-5]
0x2f: Pop(1)
0x30: Stack[-3] = "pt_eva" // @poff=0
0x31: Stack[-2] = "pers_nudegirl" // @poff=66
0x32: Stack[-1] = "nudegirl_danko.xml" // @poff=94
0x33: Call2 0x98

0x34: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x35: Pop(5)
0x36: Return(); Pop(0)

0x37: PushEmpty(float, float, float, float)
0x38: Push("OnGameTime") // @poff=132
0x39: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3a: Push(" ") // @poff=154
0x3b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3d: @ Trace(Stack[-1])
0x3e: Pop(1)
0x3f: Push((int) 1)
0x40: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x42: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x43: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x44: GOTO 0x72

0x45: Push((int) 2)
0x46: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x48: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4a: PushEmpty(int, float)
0x4b: Stack[-7] = Stack[-1]
0x4c: Call2 0xaa

0x4d: Pop(2)
0x4e: GOTO 0x58

0x4f: @ GetGameTime(Stack[-2])
0x50: Pop(0)
0x51: Push((float)0.30000001192092896)
0x52: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x53: Push((int) 166)
0x54: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: @ SetTimeEvent(Stack[-6], Stack[-2])
0x57: Pop(0)
0x58: GOTO 0x72

0x59: Push((int) 3)
0x5a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x5c: PushEmpty(bool)
0x5d: Stack[-1] = (bool) 0
0x5e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x60: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: Stack[-1] = (bool) 1
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: PushEmpty(object, string)
0x65: Stack[-1] = "quest_d8_02" // @poff=158
0x66: Call2 0x8d

0x67: Pop(2)
0x68: GOTO 0x72

0x69: @ GetGameTime(Stack[-1])
0x6a: Pop(0)
0x6b: Push((float)0.30000001192092896)
0x6c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6d: Push((int) 189)
0x6e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x70: @ SetTimeEvent(Stack[-6], Stack[-1])
0x71: Pop(0)
0x72: Return(); Pop(4)

0x73: Push( Stack[2 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: @ RemoveActor(Stack[-2]T)
0x76: Pop(0)
0x77: Push( Stack[3 + Tasks[-1].StackPointer] )
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: @ RemoveActor(Stack[-3]T)
0x7a: Pop(0)
0x7b: Return(); Pop(0)

0x7c: PushEmpty()
0x7d: Push("noeva") // @poff=182
0x7e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x80: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x81: GOTO 0x86

0x82: Push("eva") // @poff=6
0x83: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x86: Return(); Pop(0)

0x87: PushEmpty(object, object)
0x88: @ self(Stack[-1])
0x89: Pop(0)
0x8a: Stack[-1] = Stack[-3]
0x8b: Return(); Pop(2)

0x8c: Stack[-1] = 0
0x8d: PushEmpty(object, object, object, object)
0x8e: @ GetMainOutdoorScene(Stack[-2])
0x8f: Pop(0)
0x90: Push(".bin") // @poff=194
0x91: Pop(1); Push(Stack[-6] + Stack[-1]);
0x92: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x93: Pop(1)
0x94: Stack[-1] = Stack[-6]
0x95: Return(); Pop(4)

0x96: Stack[-1] = 0
0x97: Stack[-2] = 0
0x98: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x99: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=204
0x9a: Pop(0)
0x9b: Pop(0); Push((bool) Stack[-4] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9d: Push("Locator ") // @poff=215
0x9e: Pop(1); Push(Stack[-1] + Stack[-12]);
0x9f: Push(" doesn't exist") // @poff=233
0xa0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa1: @ Trace(Stack[-1])
0xa2: Pop(1)
0xa3: Stack[-1] = 0
0xa4: GOTO 0xa7

0xa5: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa6: Pop(0)
0xa7: Stack[-1] = Stack[-13]
0xa8: Return(); Pop(8)

0xa9: Stack[-1] = 0
0xaa: PushEmpty()
0xab: PushEmpty(int, int, int, float)
0xac: Stack[-3] = (int) 533094
0xad: Stack[-2] = (int) 533093
0xae: Stack[-5] = Stack[-1]
0xaf: Call2 0xb3

0xb0: Stack[-4] = Stack[-6]
0xb1: Pop(4)
0xb2: Return(); Pop(0)

0xb3: PushEmpty(int, int)
0xb4: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0xb5: Pop(0)
0xb6: Push((int) 6)
0xb7: @ SendWorldWndMessage(Stack[-1])
0xb8: Pop(1)
0xb9: Stack[-1] = Stack[-6]
0xba: Return(); Pop(2)

