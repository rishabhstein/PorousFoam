//Creating labels for calculating the permeability for each time step in 
////// solveC.H
{

const label patchIDi = mesh.boundaryMesh().findPatchID("inlet");
const label patchIDo = mesh.boundaryMesh().findPatchID("outlet");

dimensionedScalar perm;
dimensionedScalar p_in;
dimensionedScalar p_out;


    p_in = max(p.boundaryField()[patchIDi]);
    p_out = max(p.boundaryField()[patchIDo]);

    perm = Uscale * 12/0.1;//(p_in - p_out);

Info << "Permeabiility of system k = Uscale * Lx/(p_in - p_out) is:   " << perm.value() << endl;

}
////=====================================================================//
//
