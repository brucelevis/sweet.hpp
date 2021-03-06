#include <output.hpp>

Output::Output(std::ostream& ps,std::ostream& ph,std::ostream& as, 
		std::ostream& ah, std::ostream& es, std::ostream& eh, std::ostream& vs, 
		std::ostream& vh, std::ostream& oh, std::ostream& os, std::ostream& dh,
		std::ostream& ds, std::ostream& mH, std::ostream& mS,
		std::ostream& ls, std::ostream& lh, std::ostream& in,
		std::ostream& lg, std::ostream& gh, std::ostream& gs) :
	prsS(ps), prsH(ph), astS(as), astH(ah), errS(es), errH(eh), visS(vs),
	visH(vh), outH(oh), outS(os), dotH(dh), dotS(ds), mulH(mH), mulS(mS), 
	lamH(lh), lamS(ls), inH(in), langGraph(lg), genH(gh), genS(gs)
{
}
