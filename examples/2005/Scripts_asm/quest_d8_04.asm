GlobalVarCount = 0

Strings:
	W:theater@door1
	W:termitnik_load
	A:clear
	W:termitnik
	W:pt_d8q04_morlok
	W:pers_morlok
	W:d8q04_morlok.xml
	A:add
	W:death
	W:attack
	W:fail
	W:completed
	W:d8q04
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:size
	A:get
// @pool_raw:7400680065006100740065007200400064006f006f007200310000007400650072006d00690074006e0069006b005f006c006f00610064000000636c656172007400650072006d00690074006e0069006b000000700074005f00640038007100300034005f006d006f0072006c006f006b00000070006500720073005f006d006f0072006c006f006b000000640038007100300034005f006d006f0072006c006f006b002e0078006d006c00000061646400640065006100740068000000610074007400610063006b0000006600610069006c00000063006f006d0070006c00650074006500640000006400380071003000340000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790073697a650067657400

Import:
	CreateObjectVector (1 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_9 Op = 0x82 Vars = (int, float)


0x0: Stack[1 + Tasks[-1].StackPointer] = (int)3
0x1: @ CreateObjectVector(Stack[-0]T)
0x2: Pop(0)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "theater@door1" // @poff=0
0x5: Stack[-1] = (bool) 0
0x6: Call2 0x9f

0x7: Pop(2)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 8
0xa: Call2 0x6f

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, int, object, int)
0xe: @ Trace(Stack[-5])
0xf: Pop(0)
0x10: Push("termitnik_load") // @poff=28
0x11: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x13: @@@ clear(); Obj=0 // @poff=58
0x14: Pop(0)
0x15: Push("termitnik") // @poff=64
0x16: @ GetSceneByName(Stack[-3], Stack[-1])
0x17: Pop(1)
0x18: Stack[-1] = (int) 0
0x19: Pop(0); Push((bool) Stack[-1] < Stack[1 + Tasks[-1].StackPointer])
0x1a: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-7] = Stack[-4]
0x1d: Push("pt_d8q04_morlok") // @poff=84
0x1e: Push((int) 1)
0x1f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x20: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x21: Stack[-2] = "pers_morlok" // @poff=116
0x22: Stack[-1] = "d8q04_morlok.xml" // @poff=140
0x23: Call2 0x8d

0x24: Pop(4)
0x25: @@@ add(Stack[-1]); Obj=0 // @poff=174
0x26: Pop(1)
0x27: Push((int) 1)
0x28: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x29: GOTO 0x19

0x2a: Stack[-2] = 0
0x2b: GOTO 0x48

0x2c: Push("death") // @poff=178
0x2d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2f: Push((int) -1)
0x30: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x31: GOTO 0x48

0x32: Push("attack") // @poff=190
0x33: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x35: PushEmpty(object, string)
0x36: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x37: Stack[-1] = "attack" // @poff=190
0x38: Call2 0xb0

0x39: Pop(2)
0x3a: GOTO 0x48

0x3b: Push("fail") // @poff=204
0x3c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3e: PushEmpty()
0x3f: Call2 0x57

0x40: Pop(0)
0x41: GOTO 0x48

0x42: Push("completed") // @poff=214
0x43: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: PushEmpty()
0x46: Call2 0x5f

0x47: Pop(0)
0x48: Return(); Pop(4)

0x49: PushEmpty(int, int)
0x4a: Push("d8q04") // @poff=234
0x4b: @ GetVariable(Stack[-1], Stack[-2])
0x4c: Pop(1)
0x4d: Push((int) 1000)
0x4e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x50: PushEmpty()
0x51: Call2 0x57

0x52: Pop(0)
0x53: PushEmpty()
0x54: Call2 0x68

0x55: Pop(0)
0x56: Return(); Pop(2)

0x57: Push("d8q04") // @poff=234
0x58: Push((int) -1)
0x59: @ SetVariable(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: PushEmpty()
0x5c: Call2 0x67

0x5d: Pop(0)
0x5e: Return(); Pop(0)

0x5f: Push("d8q04") // @poff=234
0x60: Push((int) 1000)
0x61: @ SetVariable(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: PushEmpty()
0x64: Call2 0x67

0x65: Pop(0)
0x66: Return(); Pop(0)

0x67: Return(); Pop(0)

0x68: EventDisable(26)
0x69: PushEmpty(object)
0x6a: Call2 0x87

0x6b: Pop(0)
0x6c: @ RemoveActor(Stack[-1])
0x6d: Pop(1)
0x6e: Return(); Pop(0)

0x6f: PushEmpty(float, float)
0x70: @ GetGameTime(Stack[-1])
0x71: Pop(0)
0x72: Push((int) 24)
0x73: Pop(1); Push(Stack[-4] * Stack[-1]);
0x74: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x76: PushEmpty()
0x77: Call2 0x68

0x78: Pop(0)
0x79: GOTO 0x81

0x7a: Push((int) 0)
0x7b: Push((int) 24)
0x7c: Pop(1); Push(Stack[-5] * Stack[-1]);
0x7d: @ SetTimeEvent(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: @ Hold()
0x80: Pop(0)
0x81: Return(); Pop(2)

0x82: PushEmpty()
0x83: PushEmpty()
0x84: Call2 0x49

0x85: Pop(0)
0x86: Return(); Pop(0)

0x87: PushEmpty(object, object)
0x88: @ self(Stack[-1])
0x89: Pop(0)
0x8a: Stack[-1] = Stack[-3]
0x8b: Return(); Pop(2)

0x8c: Stack[-1] = 0
0x8d: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x8e: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=246
0x8f: Pop(0)
0x90: Pop(0); Push((bool) Stack[-4] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x92: Push("Locator ") // @poff=257
0x93: Pop(1); Push(Stack[-1] + Stack[-12]);
0x94: Push(" doesn't exist") // @poff=275
0x95: Pop(2); Push(Stack[-2] + Stack[-1]);
0x96: @ Trace(Stack[-1])
0x97: Pop(1)
0x98: Stack[-1] = 0
0x99: GOTO 0x9c

0x9a: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x9b: Pop(0)
0x9c: Stack[-1] = Stack[-13]
0x9d: Return(); Pop(8)

0x9e: Stack[-1] = 0
0x9f: PushEmpty(object, object)
0xa0: @ FindActor(Stack[-1], Stack[-4])
0xa1: Pop(0)
0xa2: Pop(0); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa4: Push("Door ") // @poff=305
0xa5: Pop(1); Push(Stack[-1] + Stack[-5]);
0xa6: Push(" not found") // @poff=317
0xa7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa8: @ Trace(Stack[-1])
0xa9: Pop(1)
0xaa: GOTO 0xae

0xab: Push("locked") // @poff=339
0xac: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=353
0xad: Pop(1)
0xae: Return(); Pop(2)

0xaf: Stack[-1] = 0
0xb0: PushEmpty(int, int, object, int, int, object)
0xb1: Push(Stack[-8])
0xb2: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb3: @@ size(Stack[-3]); Obj=8 // @poff=365
0xb4: Pop(0)
0xb5: Stack[-2] = (int) 0
0xb6: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xb7: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb8: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=370
0xb9: Pop(0)
0xba: Push(Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: @ Trigger(Stack[-1], Stack[-7])
0xbd: Pop(0)
0xbe: Stack[-1] = 0
0xbf: Push((int) 1)
0xc0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc1: GOTO 0xb6

0xc2: Return(); Pop(6)

