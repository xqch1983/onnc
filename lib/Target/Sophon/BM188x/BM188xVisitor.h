//===- BM188xVisitor.h ----------------------------------------------------===//
//
//                             The ONNC Project
//
// See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#ifndef ONNC_TARGET_BM188X_VISITOR_H
#define ONNC_TARGET_BM188X_VISITOR_H
#include <onnc/IR/CustomVisitor.h>

namespace onnc {

class Upsample;

namespace BM188X {

class AveragePool;
class Concat;
class Conv;
class Gemm;
class GlobalAveragePool;
class LRN;
class LeakyRelu;
class Load;
class MaxPool;
class PRelu;
class Pool;
class Relu;
class BMScale;
class SlicedConv;
class Store;
class Sum;
class Transpose;
class Upsample;

class BM188xVisitor : public CustomVisitor<BM188xVisitor>
{
public:
  using BaseType::visit;

  /// const version @{
  virtual void visit(const BM188X::AveragePool& pAveragePool) { }

  virtual void visit(const BM188X::Concat& pConcat) { }

  virtual void visit(const BM188X::Conv& pConv) { }

  virtual void visit(const BM188X::Gemm& pGemm) { }

  virtual void visit(const BM188X::GlobalAveragePool& pGAP) { }

  virtual void visit(const BM188X::LRN& pLRN) { }

  virtual void visit(const BM188X::LeakyRelu& pLeakyRelu) { }

  virtual void visit(const BM188X::Load& pLoad) { }

  virtual void visit(const BM188X::MaxPool& pMaxPool) { }

  virtual void visit(const BM188X::PRelu& pPRelu) { }

  virtual void visit(const BM188X::Pool& pPool) { }

  virtual void visit(const BM188X::Relu& pRelu) { }

  virtual void visit(const BM188X::BMScale& pScale) { }

  virtual void visit(const BM188X::SlicedConv& pSlicedConv) { }

  virtual void visit(const BM188X::Store& pStore) { }

  virtual void visit(const BM188X::Sum& pSum) { }

  virtual void visit(const BM188X::Transpose& pTranspose) { }

  virtual void visit(const BM188X::Upsample& pTranspose) { }
  /// }@

  /// non-const version @{
  virtual void visit(BM188X::AveragePool& pAveragePool) { }

  virtual void visit(BM188X::Concat& pConcat) { }

  virtual void visit(BM188X::Conv& pConv) { }

  virtual void visit(BM188X::Gemm& pGemm) { }

  virtual void visit(BM188X::GlobalAveragePool& pGAP) { }

  virtual void visit(BM188X::LRN& pLRN) { }

  virtual void visit(BM188X::LeakyRelu& pLeakyRelu) { }

  virtual void visit(BM188X::Load& pLoad) { }

  virtual void visit(BM188X::MaxPool& pMaxPool) { }

  virtual void visit(BM188X::PRelu& pPRelu) { }

  virtual void visit(BM188X::Pool& pPool) { }

  virtual void visit(BM188X::Relu& pRelu) { }

  virtual void visit(BM188X::BMScale& pScale) { }

  virtual void visit(BM188X::SlicedConv& pSlicedConv) { }

  virtual void visit(BM188X::Store& pStore) { }

  virtual void visit(BM188X::Sum& pSum) { }

  virtual void visit(BM188X::Transpose& pTranspose) { }

  virtual void visit(BM188X::Upsample& pTranspose) { }
  /// }@

  BM188xVisitor() = default;

  /// for dyn_cast
  static bool classof(const ComputeVisitor* pVisitor);
};

} // namespace BM188X
} // namespace onnc

#endif
